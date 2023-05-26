const NL = token.immediate(/[\r\n]+/);

const PREC = {
  comment: 1,
  request: 2,
  header: 3,
  param: 4,
  body: 5,
  var: 6,
}

module.exports = grammar({
  name: "http",

  // extras - an array of tokens that may appear anywhere in the language. 
  // This is often used for whitespace and comments. 
  // The default value of extras is to accept whitespace.
  // To control whitespace explicitly, specify extras: $ => [] in your grammar.
  extras: $ => [ $.comment ],
  word: $ => $.identifier,
  inline: $ => [],

  // Tokens : token(rule) - This function marks the given rule as producing only a single token. 
  // Tree-sitter’s default is to treat each String or RegExp literal in the grammar as a separate token. 
  // Each token is matched separately by the lexer and returned as its own leaf node in the tree. 
  // The token function allows you to express a complex rule using the functions described above (rather than as a single regular expression) but still have Tree-sitter treat it as a single token.

  // conflicts: ($) => [
  //     [$.variable_declarator, $._prefix_exp],
  //     [$.emmy_ignore, $.emmy_comment],
  // ],
  conflicts: $ => [
    [$.payload_file]
  ],

  rules: {
    document: $ => repeat($.query),

   // TODO support comment
	query: $ => seq(
        // $.comment
		field("request", $.request),
		// $.content_type,
        // repeat => 0 or more
        repeat($.header),
        // should depend from method ?
        repeat1('\n')
        , $.body
      // ,
        // optional($.script)
	),


    request: ($) => seq(field("method", $.method),
        $._whitespace,
      field("url", $.target_url), 
      optional(seq($._whitespace, $.http_version)),
      NL),
    http_version: _ => /HTTP\/.*/,
    method: $ => choice(/(OPTIONS|GET|HEAD|POST|PUT|DELETE|TRACE|CONNECT|PATCH)/, $.const_spec),

    // url: (_) => 
    //   // /[^\n]+/,
    //   // /\w/,
    //   /((www|http:|https:)\/\/(?:w{1,3}\.)?[^\s.]+(?:\.[a-z]+)*(?::\d+)?|\{\{\w+\}\})([\w.,@?^=%&amp;:\/~+#\{\}\u00C0-\u00FF-]*[\w@?^=%&amp;\/~+#\u00C0-\u00FF-])?/,
    target_url: $ => seq(
      optional(seq($.scheme, "://")),
      optional($.authority),
      $.host,
      optional($.path),
      optional(repeat1($.query_param)),
    ),

    scheme: _ => /(about|acct|arcp|cap|cid|coap+tcp|coap+ws|coaps+tcp|coaps+ws|data|dns|example|file|ftp|geo|h323|http|https|im|info|ipp|mailto|mid|ni|nih|payto|pkcs11|pres|reload|secret-token|session|sms|tag|telnet|urn|ws|wss)/,

    authority: $ => prec.left(PREC.request, seq(optional($.pair), "@")),
    host: $ => prec.left(PREC.request, seq($.identifier, optional($.pair))),
    path: $ => repeat1(choice("/", seq("/", $.identifier, optional("/")))),
    http_version: _ => prec.right(/HTTP\/1.1|HTTP\/2/),

    header: ($) =>
      seq(
        field("name", seq(/[A-Za-z0-9_-]+/, token.immediate(":"))),
        $._whitespace,
        field("value", $.value), '\n'
      ),
    // so a better approach would be to match all whitespace characters and all non-whitespace characters, with [\s\S], which will match everything, and is faster and simpler.
    //
    // right implies takes the one that finishes last
    // internal_script: _ => right/[\s\S]*/),

    // users can embed their own script
    // script: $ => seq('{%', prec(19, $.internal_script), '%}'),
    // if we let name here it catches a lot of stuff (everything before ":" ?)
    // name: (_) => /[A-Za-z0-9_-]+/,
    // value can contain slashes like application/json
    value: (_) => /[^\n]+/,
    // value: (_) => /\w+/,


    // choice
    body: $ => $.external_body,
    // body: $ => choice($.external_body, $.internal_body),
    external_body: $ => 
      seq(
        '<',
        $._whitespace,
        $.payload_file,
        '\n'
      ),
    payload_file: _ => /[a-z.\/]+/,

    // catch all until the next query
    // prec
    // internal_body: _ => prec(40, /[\s\S]*\n\n/),

    scheme: _ => /(about|acct|arcp|cap|cid|coap+tcp|coap+ws|coaps+tcp|coaps+ws|data|dns|example|file|ftp|geo|h323|http|https|im|info|ipp|mailto|mid|ni|nih|payto|pkcs11|pres|reload|secret-token|session|sms|tag|telnet|urn|ws|wss)/,

	// content_type_key: $ => seq("content-type:", $.content_type),
	// content_type: $ => $.value,

	// accept_type_key: $ => seq("accept-type:", $.accept_type),
	// accept_type: $ => $.value,


    pair: $ => seq(
      field("name", $.identifier),
      ":",
      field("value", $.identifier),
    ),

    query_param: $ => prec.left(PREC.param, seq(
      choice("?", "&"),
      field('key', alias($.identifier, $.key)),
      '=',
      field('value', alias($.identifier, $.value)),
      optional(NL),
    )),

    header: $ => prec(PREC.header, seq(
      field("name", alias($.identifier, $.name)),
      ":",
      optional($._whitespace),
      field("value", alias($._line, $.value)),
      NL,
    )),

    json_body: $ => prec.left(PREC.body, seq(/\{\n/, repeat(seq($._line, NL)), /\}\n\n/)),
    xml_body: $ => prec.left(PREC.body, seq(/<\?xml.*\?>/, NL, repeat(seq($._line, NL)), /<\/.*>\n\n/)),
    graphql_body: $ => prec(PREC.body, seq("query", $._whitespace, "(", repeat(seq($._line, NL)), /\}\n\n/)),

    external_body: $ => seq(
      "<",
      optional(seq("@", $.identifier)),
      $._whitespace,
      field("file_path", alias($._line, $.path))
    ),

    variable: $ => prec.left(PREC.var, seq("{{", $.identifier, "}}")),

    variable_declaration: $ => prec.left(PREC.var, seq(
      "@",
      field("identifier", $.identifier),
      optional(seq(
        optional($._whitespace),
        "=",
        optional($._whitespace),
        field("value", $._line),
      ))
    )),

    const_spec: _ => /[A-Z][A-Z\\d_]+/,
    identifier: _ => /[A-Za-z_.\d\u00A1-\uFFFF-]+/,
    comment: _ => prec.left(PREC.comment, token(seq("#", /.*/, NL))),
    _whitespace: _ => repeat1(/[\t\v ]/),
    _newline: _ => repeat1(/[\n]/),
    _line: _ => /[^\n]+/,
    string: _ => /"[^"]*"/,
    number: _ => /[0-9]+/,
    boolean: _ => choice('true', 'false'),
    null: _ => 'null',
  },
});

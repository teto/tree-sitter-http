const json = require("tree-sitter-json/grammar");

module.exports = grammar(json, {
  name: "http",
  // extras - an array of tokens that may appear anywhere in the language. 
  // This is often used for whitespace and comments. 
  // The default value of extras is to accept whitespace.
  // To control whitespace explicitly, specify extras: $ => [] in your grammar.
  // extras: ($, original) => [
  //   ...original,
  //   $.request,
  //   $.header,
  //   $.external_body,
  //   $.comment,
  // ],
  //
  // Tokens : token(rule) - This function marks the given rule as producing only a single token. 
  // Tree-sitter’s default is to treat each String or RegExp literal in the grammar as a separate token. 
  // Each token is matched separately by the lexer and returned as its own leaf node in the tree. 
  // The token function allows you to express a complex rule using the functions described above (rather than as a single regular expression) but still have Tree-sitter treat it as a single token.


  // Tree-sitter will try to resolve the conflict by matching the rule with the higher precedence.
  // extras: ($, original) => [...original, $.comment],
  extras: _ => [ ],
  //   /\s/,
  //   $.comment,
  // ],

    // conflicts: ($) => [
    //     [$.variable_declarator, $._prefix_exp],
    //     [$.emmy_ignore, $.emmy_comment],
    // ],

  conflicts: $ => [
    [$.payload_file]
  ],

  inline: $ => [ 
    $._whitespace,
    // $.name
  ],

  rules: {
    document: $ => repeat($.query),

	query: $ => seq(
		field("request", $.request),
		// $.content_type,
        // repeat => 0 or more
        repeat($.header),
        // should depend from method ?
        repeat1('\n')
        // , $.body
      // ,
        // optional($.script)
	),


    request: ($) => seq(field("method", $.method),
        $._whitespace,
      field("url", $.url), 
      optional(seq($._whitespace, $.http_version)), '\n'),
    http_version: _ => /HTTP\/.*/,
    method: (_) => /(GET|POST|PATCH|DELETE|PUT)/,
    url: (_) => 
      // /[^\n]+/,
      // /\w/,
      /((www|http:|https:)\/\/(?:w{1,3}\.)?[^\s.]+(?:\.[a-z]+)*(?::\d+)?|\{\{\w+\}\})([\w.,@?^=%&amp;:\/~+#\{\}\u00C0-\u00FF-]*[\w@?^=%&amp;\/~+#\u00C0-\u00FF-])?/,

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


	// content_type_key: $ => seq("content-type:", $.content_type),
	// content_type: $ => $.value,

	// accept_type_key: $ => seq("accept-type:", $.accept_type),
	// accept_type: $ => $.value,

    comment: (_) => token(seq("#", /[\s\S]*/)),

    _whitespace: (_) => repeat1(/[\t\v ]/),
  },
});

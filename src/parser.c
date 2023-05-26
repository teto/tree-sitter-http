#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 86
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 55
#define ALIAS_COUNT 3
#define TOKEN_COUNT 33
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 9

enum {
  sym_identifier = 1,
  anon_sym_LF = 2,
  aux_sym_request_token1 = 3,
  aux_sym_http_version_token1 = 4,
  aux_sym_method_token1 = 5,
  sym_const_spec = 6,
  anon_sym_COLON_SLASH_SLASH = 7,
  sym_scheme = 8,
  anon_sym_AT = 9,
  anon_sym_SLASH = 10,
  anon_sym_COLON = 11,
  aux_sym_value_token1 = 12,
  anon_sym_LT = 13,
  anon_sym_QMARK = 14,
  anon_sym_AMP = 15,
  anon_sym_EQ = 16,
  aux_sym_json_body_token1 = 17,
  aux_sym_json_body_token2 = 18,
  aux_sym_xml_body_token1 = 19,
  aux_sym_xml_body_token2 = 20,
  anon_sym_query = 21,
  anon_sym_LPAREN = 22,
  anon_sym_LBRACE_LBRACE = 23,
  anon_sym_RBRACE_RBRACE = 24,
  aux_sym_comment_token1 = 25,
  aux_sym__whitespace_token1 = 26,
  aux_sym__newline_token1 = 27,
  sym_string = 28,
  sym_number = 29,
  anon_sym_true = 30,
  anon_sym_false = 31,
  sym_null = 32,
  sym_document = 33,
  sym_query = 34,
  sym_request = 35,
  sym_http_version = 36,
  sym_method = 37,
  sym_target_url = 38,
  sym_authority = 39,
  sym_host = 40,
  sym_path = 41,
  sym_header = 42,
  sym_body = 43,
  sym_external_body = 44,
  sym_pair = 45,
  sym_query_param = 46,
  sym_comment = 47,
  aux_sym__whitespace = 48,
  sym__line = 49,
  aux_sym_document_repeat1 = 50,
  aux_sym_query_repeat1 = 51,
  aux_sym_query_repeat2 = 52,
  aux_sym_target_url_repeat1 = 53,
  aux_sym_path_repeat1 = 54,
  alias_sym_key = 55,
  alias_sym_name = 56,
  alias_sym_value = 57,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_LF] = "\n",
  [aux_sym_request_token1] = "request_token1",
  [aux_sym_http_version_token1] = "http_version_token1",
  [aux_sym_method_token1] = "method_token1",
  [sym_const_spec] = "const_spec",
  [anon_sym_COLON_SLASH_SLASH] = "://",
  [sym_scheme] = "scheme",
  [anon_sym_AT] = "@",
  [anon_sym_SLASH] = "/",
  [anon_sym_COLON] = ":",
  [aux_sym_value_token1] = "value_token1",
  [anon_sym_LT] = "<",
  [anon_sym_QMARK] = "\?",
  [anon_sym_AMP] = "&",
  [anon_sym_EQ] = "=",
  [aux_sym_json_body_token1] = "json_body_token1",
  [aux_sym_json_body_token2] = "json_body_token2",
  [aux_sym_xml_body_token1] = "xml_body_token1",
  [aux_sym_xml_body_token2] = "xml_body_token2",
  [anon_sym_query] = "query",
  [anon_sym_LPAREN] = "(",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [aux_sym_comment_token1] = "comment_token1",
  [aux_sym__whitespace_token1] = "_whitespace_token1",
  [aux_sym__newline_token1] = "_newline_token1",
  [sym_string] = "string",
  [sym_number] = "number",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_null] = "null",
  [sym_document] = "document",
  [sym_query] = "query",
  [sym_request] = "request",
  [sym_http_version] = "http_version",
  [sym_method] = "method",
  [sym_target_url] = "target_url",
  [sym_authority] = "authority",
  [sym_host] = "host",
  [sym_path] = "path",
  [sym_header] = "header",
  [sym_body] = "body",
  [sym_external_body] = "external_body",
  [sym_pair] = "pair",
  [sym_query_param] = "query_param",
  [sym_comment] = "comment",
  [aux_sym__whitespace] = "_whitespace",
  [sym__line] = "_line",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_query_repeat1] = "query_repeat1",
  [aux_sym_query_repeat2] = "query_repeat2",
  [aux_sym_target_url_repeat1] = "target_url_repeat1",
  [aux_sym_path_repeat1] = "path_repeat1",
  [alias_sym_key] = "key",
  [alias_sym_name] = "name",
  [alias_sym_value] = "value",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_LF] = anon_sym_LF,
  [aux_sym_request_token1] = aux_sym_request_token1,
  [aux_sym_http_version_token1] = aux_sym_http_version_token1,
  [aux_sym_method_token1] = aux_sym_method_token1,
  [sym_const_spec] = sym_const_spec,
  [anon_sym_COLON_SLASH_SLASH] = anon_sym_COLON_SLASH_SLASH,
  [sym_scheme] = sym_scheme,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_value_token1] = aux_sym_value_token1,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_json_body_token1] = aux_sym_json_body_token1,
  [aux_sym_json_body_token2] = aux_sym_json_body_token2,
  [aux_sym_xml_body_token1] = aux_sym_xml_body_token1,
  [aux_sym_xml_body_token2] = aux_sym_xml_body_token2,
  [anon_sym_query] = anon_sym_query,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [aux_sym__whitespace_token1] = aux_sym__whitespace_token1,
  [aux_sym__newline_token1] = aux_sym__newline_token1,
  [sym_string] = sym_string,
  [sym_number] = sym_number,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_null] = sym_null,
  [sym_document] = sym_document,
  [sym_query] = sym_query,
  [sym_request] = sym_request,
  [sym_http_version] = sym_http_version,
  [sym_method] = sym_method,
  [sym_target_url] = sym_target_url,
  [sym_authority] = sym_authority,
  [sym_host] = sym_host,
  [sym_path] = sym_path,
  [sym_header] = sym_header,
  [sym_body] = sym_body,
  [sym_external_body] = sym_external_body,
  [sym_pair] = sym_pair,
  [sym_query_param] = sym_query_param,
  [sym_comment] = sym_comment,
  [aux_sym__whitespace] = aux_sym__whitespace,
  [sym__line] = sym__line,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_query_repeat1] = aux_sym_query_repeat1,
  [aux_sym_query_repeat2] = aux_sym_query_repeat2,
  [aux_sym_target_url_repeat1] = aux_sym_target_url_repeat1,
  [aux_sym_path_repeat1] = aux_sym_path_repeat1,
  [alias_sym_key] = alias_sym_key,
  [alias_sym_name] = alias_sym_name,
  [alias_sym_value] = alias_sym_value,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_request_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_http_version_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_method_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_const_spec] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_scheme] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_value_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_json_body_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_json_body_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_xml_body_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_xml_body_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_query] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__whitespace_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__newline_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_null] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_query] = {
    .visible = true,
    .named = true,
  },
  [sym_request] = {
    .visible = true,
    .named = true,
  },
  [sym_http_version] = {
    .visible = true,
    .named = true,
  },
  [sym_method] = {
    .visible = true,
    .named = true,
  },
  [sym_target_url] = {
    .visible = true,
    .named = true,
  },
  [sym_authority] = {
    .visible = true,
    .named = true,
  },
  [sym_host] = {
    .visible = true,
    .named = true,
  },
  [sym_path] = {
    .visible = true,
    .named = true,
  },
  [sym_header] = {
    .visible = true,
    .named = true,
  },
  [sym_body] = {
    .visible = true,
    .named = true,
  },
  [sym_external_body] = {
    .visible = true,
    .named = true,
  },
  [sym_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_query_param] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__whitespace] = {
    .visible = false,
    .named = false,
  },
  [sym__line] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_query_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_query_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_target_url_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_path_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_key] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_value] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_file_path = 1,
  field_key = 2,
  field_method = 3,
  field_name = 4,
  field_request = 5,
  field_url = 6,
  field_value = 7,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_file_path] = "file_path",
  [field_key] = "key",
  [field_method] = "method",
  [field_name] = "name",
  [field_request] = "request",
  [field_url] = "url",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 1},
  [5] = {.index = 3, .length = 2},
  [6] = {.index = 6, .length = 2},
  [7] = {.index = 8, .length = 1},
  [8] = {.index = 9, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_request, 0},
  [1] =
    {field_method, 0},
    {field_url, 2},
  [3] =
    {field_name, 0},
    {field_value, 2},
  [5] =
    {field_file_path, 2},
  [6] =
    {field_name, 0},
    {field_value, 3},
  [8] =
    {field_file_path, 4},
  [9] =
    {field_key, 1},
    {field_value, 3},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [3] = {
    [0] = alias_sym_name,
    [2] = alias_sym_value,
  },
  [4] = {
    [2] = sym_path,
  },
  [6] = {
    [0] = alias_sym_name,
    [3] = alias_sym_value,
  },
  [7] = {
    [4] = sym_path,
  },
  [8] = {
    [1] = alias_sym_key,
    [3] = alias_sym_value,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__line, 3,
    sym__line,
    alias_sym_value,
    sym_path,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 31,
  [46] = 46,
  [47] = 31,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 39,
  [61] = 39,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 46,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(36);
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == '&') ADVANCE(97);
      if (lookahead == '(') ADVANCE(103);
      if (lookahead == '/') ADVANCE(90);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == '<') ADVANCE(95);
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == '?') ADVANCE(96);
      if (lookahead == '@') ADVANCE(89);
      if (lookahead == 'C') ADVANCE(110);
      if (lookahead == 'D') ADVANCE(107);
      if (lookahead == 'G') ADVANCE(108);
      if (lookahead == 'H') ADVANCE(109);
      if (lookahead == 'O') ADVANCE(111);
      if (lookahead == 'P') ADVANCE(106);
      if (lookahead == 'T') ADVANCE(112);
      if (lookahead == '{') ADVANCE(3);
      if (lookahead == '}') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(113);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(115);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == '<') ADVANCE(94);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(115);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(117);
      if (lookahead == '\r') ADVANCE(116);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(99);
      if (lookahead == '{') ADVANCE(104);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == '}') ADVANCE(105);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(100);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(102);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(6);
      if (lookahead == '>') ADVANCE(7);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(119);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == '&') ADVANCE(97);
      if (lookahead == '/') ADVANCE(90);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == '?') ADVANCE(96);
      if (lookahead == '@') ADVANCE(89);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(38);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(118);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(115);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == 'H') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == ' ') ADVANCE(118);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == ' ') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(93);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(88);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(15);
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(12);
      END_STATE();
    case 15:
      if (lookahead == '1') ADVANCE(34);
      if (lookahead == '2') ADVANCE(39);
      END_STATE();
    case 16:
      if (lookahead == '1') ADVANCE(39);
      END_STATE();
    case 17:
      if (lookahead == '>') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '>') ADVANCE(101);
      if (lookahead == '?') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == '?') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == 'A') ADVANCE(83);
      if (lookahead == 'O') ADVANCE(76);
      if (lookahead == 'U') ADVANCE(81);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(87);
      END_STATE();
    case 21:
      if (lookahead == 'E') ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(87);
      END_STATE();
    case 22:
      if (lookahead == 'E') ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(87);
      END_STATE();
    case 23:
      if (lookahead == 'E') ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(87);
      END_STATE();
    case 24:
      if (lookahead == 'O') ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(87);
      END_STATE();
    case 25:
      if (lookahead == 'P') ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(87);
      END_STATE();
    case 26:
      if (lookahead == 'P') ADVANCE(13);
      END_STATE();
    case 27:
      if (lookahead == 'R') ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(87);
      END_STATE();
    case 28:
      if (lookahead == 'T') ADVANCE(26);
      END_STATE();
    case 29:
      if (lookahead == 'T') ADVANCE(28);
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 31:
      if (lookahead == 'm') ADVANCE(30);
      END_STATE();
    case 32:
      if (lookahead == 'x') ADVANCE(31);
      END_STATE();
    case 33:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(87);
      END_STATE();
    case 34:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(16);
      END_STATE();
    case 35:
      if (eof) ADVANCE(36);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == '&') ADVANCE(97);
      if (lookahead == '/') ADVANCE(90);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == '?') ADVANCE(96);
      if (lookahead == '@') ADVANCE(89);
      if (lookahead == 'C') ADVANCE(24);
      if (lookahead == 'D') ADVANCE(21);
      if (lookahead == 'G') ADVANCE(22);
      if (lookahead == 'H') ADVANCE(23);
      if (lookahead == 'O') ADVANCE(25);
      if (lookahead == 'P') ADVANCE(20);
      if (lookahead == 'T') ADVANCE(27);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(38);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(33);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_request_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_http_version_token1);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == '\\') ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(86);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(115);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(87);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'A') ADVANCE(52);
      if (lookahead == '\\') ADVANCE(87);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(86);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(115);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'A') ADVANCE(53);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(87);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'A') ADVANCE(50);
      if (lookahead == '\\') ADVANCE(87);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(86);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(115);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'A') ADVANCE(51);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(87);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'C') ADVANCE(78);
      if (lookahead == '\\') ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(86);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(115);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'C') ADVANCE(60);
      if (lookahead == '\\') ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(86);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(115);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'C') ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(87);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'C') ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(87);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'C') ADVANCE(54);
      if (lookahead == '\\') ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(86);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(115);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'C') ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(87);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'D') ADVANCE(40);
      if (lookahead == '\\') ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(86);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(115);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'D') ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(87);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'E') ADVANCE(40);
      if (lookahead == '\\') ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(86);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(115);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'E') ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(87);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'E') ADVANCE(46);
      if (lookahead == '\\') ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(86);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(115);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'E') ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(87);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'E') ADVANCE(84);
      if (lookahead == '\\') ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(86);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(115);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'E') ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(87);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'H') ADVANCE(40);
      if (lookahead == '\\') ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(86);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(115);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'H') ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(87);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'I') ADVANCE(72);
      if (lookahead == '\\') ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(86);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(115);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'I') ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(87);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'L') ADVANCE(58);
      if (lookahead == '\\') ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(86);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(115);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'L') ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(87);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'N') ADVANCE(68);
      if (lookahead == '\\') ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(86);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(115);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'N') ADVANCE(75);
      if (lookahead == '\\') ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(86);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(115);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'N') ADVANCE(56);
      if (lookahead == '\\') ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(86);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(115);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'N') ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(87);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'N') ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(87);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'N') ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(87);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'O') ADVANCE(67);
      if (lookahead == '\\') ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(86);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(115);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'O') ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(87);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'S') ADVANCE(78);
      if (lookahead == '\\') ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(86);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(115);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'S') ADVANCE(40);
      if (lookahead == '\\') ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(86);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(115);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'S') ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(87);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'S') ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(87);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'T') ADVANCE(40);
      if (lookahead == '\\') ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(86);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(115);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'T') ADVANCE(62);
      if (lookahead == '\\') ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(86);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(115);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'T') ADVANCE(47);
      if (lookahead == '\\') ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(86);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(115);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'T') ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(87);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'T') ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(87);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'T') ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(87);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'T') ADVANCE(54);
      if (lookahead == '\\') ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(86);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(115);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'T') ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(87);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == '\\') ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(86);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(115);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_const_spec);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_COLON_SLASH_SLASH);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == '\n') ADVANCE(117);
      if (lookahead == '\r') ADVANCE(92);
      if (lookahead != 0) ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == '?') ADVANCE(32);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_json_body_token1);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_json_body_token2);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_xml_body_token1);
      if (lookahead == '?') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_xml_body_token2);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(80);
      if (lookahead == 'O') ADVANCE(74);
      if (lookahead == 'U') ADVANCE(78);
      if (lookahead == '\\') ADVANCE(87);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(86);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(115);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(64);
      if (lookahead == '\\') ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(86);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(115);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(78);
      if (lookahead == '\\') ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(86);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(115);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(42);
      if (lookahead == '\\') ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(86);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(115);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(66);
      if (lookahead == '\\') ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(86);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(115);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(79);
      if (lookahead == '\\') ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(86);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(115);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(44);
      if (lookahead == '\\') ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(86);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(115);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(86);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(115);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(115);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(117);
      if (lookahead == '\r') ADVANCE(116);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'a') ADVANCE(1);
      if (lookahead == 'c') ADVANCE(2);
      if (lookahead == 'd') ADVANCE(3);
      if (lookahead == 'e') ADVANCE(4);
      if (lookahead == 'f') ADVANCE(5);
      if (lookahead == 'g') ADVANCE(6);
      if (lookahead == 'h') ADVANCE(7);
      if (lookahead == 'i') ADVANCE(8);
      if (lookahead == 'm') ADVANCE(9);
      if (lookahead == 'n') ADVANCE(10);
      if (lookahead == 'p') ADVANCE(11);
      if (lookahead == 'q') ADVANCE(12);
      if (lookahead == 'r') ADVANCE(13);
      if (lookahead == 's') ADVANCE(14);
      if (lookahead == 't') ADVANCE(15);
      if (lookahead == 'u') ADVANCE(16);
      if (lookahead == 'w') ADVANCE(17);
      END_STATE();
    case 1:
      if (lookahead == 'b') ADVANCE(18);
      if (lookahead == 'c') ADVANCE(19);
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(21);
      if (lookahead == 'i') ADVANCE(22);
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(24);
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 4:
      if (lookahead == 'x') ADVANCE(26);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(27);
      if (lookahead == 'i') ADVANCE(28);
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 7:
      if (lookahead == '3') ADVANCE(31);
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 8:
      if (lookahead == 'm') ADVANCE(33);
      if (lookahead == 'n') ADVANCE(34);
      if (lookahead == 'p') ADVANCE(35);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(36);
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 10:
      if (lookahead == 'i') ADVANCE(38);
      if (lookahead == 'u') ADVANCE(39);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(40);
      if (lookahead == 'k') ADVANCE(41);
      if (lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 12:
      if (lookahead == 'u') ADVANCE(43);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(45);
      if (lookahead == 'm') ADVANCE(46);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(47);
      if (lookahead == 'e') ADVANCE(48);
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 16:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 17:
      if (lookahead == 's') ADVANCE(51);
      END_STATE();
    case 18:
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(53);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(54);
      END_STATE();
    case 21:
      if (lookahead == 'p') ADVANCE(33);
      END_STATE();
    case 22:
      if (lookahead == 'd') ADVANCE(33);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 24:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 25:
      if (lookahead == 's') ADVANCE(33);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(58);
      END_STATE();
    case 28:
      if (lookahead == 'l') ADVANCE(59);
      END_STATE();
    case 29:
      if (lookahead == 'p') ADVANCE(33);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 31:
      if (lookahead == '2') ADVANCE(60);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_scheme);
      END_STATE();
    case 34:
      if (lookahead == 'f') ADVANCE(62);
      END_STATE();
    case 35:
      if (lookahead == 'p') ADVANCE(33);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(33);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_scheme);
      if (lookahead == 'h') ADVANCE(33);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 40:
      if (lookahead == 'y') ADVANCE(65);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(66);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(70);
      if (lookahead == 's') ADVANCE(71);
      END_STATE();
    case 46:
      if (lookahead == 's') ADVANCE(33);
      END_STATE();
    case 47:
      if (lookahead == 'g') ADVANCE(33);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 49:
      if (lookahead == 'u') ADVANCE(73);
      END_STATE();
    case 50:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_scheme);
      if (lookahead == 's') ADVANCE(33);
      END_STATE();
    case 52:
      if (lookahead == 'u') ADVANCE(74);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 54:
      if (lookahead == 'p') ADVANCE(33);
      END_STATE();
    case 55:
      if (lookahead == 'p') ADVANCE(75);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(33);
      END_STATE();
    case 57:
      if (lookahead == 'm') ADVANCE(76);
      END_STATE();
    case 58:
      if (lookahead == 's') ADVANCE(77);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 60:
      if (lookahead == '3') ADVANCE(33);
      END_STATE();
    case 61:
      if (lookahead == 'p') ADVANCE(78);
      END_STATE();
    case 62:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 63:
      if (lookahead == 'l') ADVANCE(79);
      END_STATE();
    case 64:
      if (lookahead == 'l') ADVANCE(80);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 66:
      if (lookahead == 's') ADVANCE(82);
      END_STATE();
    case 67:
      if (lookahead == 's') ADVANCE(33);
      END_STATE();
    case 68:
      if (lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 69:
      if (lookahead == 'o') ADVANCE(84);
      END_STATE();
    case 70:
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 71:
      if (lookahead == 's') ADVANCE(86);
      END_STATE();
    case 72:
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 74:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 75:
      if (lookahead == 'p') ADVANCE(89);
      if (lookahead == 's') ADVANCE(90);
      if (lookahead == 't') ADVANCE(91);
      if (lookahead == 'w') ADVANCE(92);
      END_STATE();
    case 76:
      if (lookahead == 'p') ADVANCE(93);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_scheme);
      if (lookahead == 's') ADVANCE(33);
      END_STATE();
    case 79:
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 81:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 82:
      if (lookahead == '1') ADVANCE(96);
      END_STATE();
    case 83:
      if (lookahead == 'y') ADVANCE(97);
      END_STATE();
    case 84:
      if (lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(100);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 89:
      if (lookahead == 'p') ADVANCE(89);
      if (lookahead == 't') ADVANCE(91);
      if (lookahead == 'w') ADVANCE(92);
      END_STATE();
    case 90:
      if (lookahead == 's') ADVANCE(90);
      if (lookahead == 't') ADVANCE(102);
      if (lookahead == 'w') ADVANCE(103);
      END_STATE();
    case 91:
      if (lookahead == 'c') ADVANCE(104);
      END_STATE();
    case 92:
      if (lookahead == 's') ADVANCE(33);
      END_STATE();
    case 93:
      if (lookahead == 'l') ADVANCE(105);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 95:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 96:
      if (lookahead == '1') ADVANCE(33);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_query);
      END_STATE();
    case 98:
      if (lookahead == 'd') ADVANCE(33);
      END_STATE();
    case 99:
      if (lookahead == 't') ADVANCE(106);
      END_STATE();
    case 100:
      if (lookahead == 'o') ADVANCE(107);
      END_STATE();
    case 101:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 102:
      if (lookahead == 'c') ADVANCE(108);
      END_STATE();
    case 103:
      if (lookahead == 's') ADVANCE(33);
      END_STATE();
    case 104:
      if (lookahead == 'p') ADVANCE(33);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 106:
      if (lookahead == '-') ADVANCE(109);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 108:
      if (lookahead == 'p') ADVANCE(33);
      END_STATE();
    case 109:
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 110:
      if (lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 111:
      if (lookahead == 'k') ADVANCE(112);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 113:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 35},
  [2] = {.lex_state = 35},
  [3] = {.lex_state = 35},
  [4] = {.lex_state = 35},
  [5] = {.lex_state = 35},
  [6] = {.lex_state = 9},
  [7] = {.lex_state = 9},
  [8] = {.lex_state = 35},
  [9] = {.lex_state = 9},
  [10] = {.lex_state = 35},
  [11] = {.lex_state = 35},
  [12] = {.lex_state = 35},
  [13] = {.lex_state = 35},
  [14] = {.lex_state = 35},
  [15] = {.lex_state = 35},
  [16] = {.lex_state = 35},
  [17] = {.lex_state = 35},
  [18] = {.lex_state = 35},
  [19] = {.lex_state = 35},
  [20] = {.lex_state = 35},
  [21] = {.lex_state = 35},
  [22] = {.lex_state = 9},
  [23] = {.lex_state = 35},
  [24] = {.lex_state = 35},
  [25] = {.lex_state = 35},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 35},
  [29] = {.lex_state = 35},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 9},
  [32] = {.lex_state = 9},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 10},
  [35] = {.lex_state = 11},
  [36] = {.lex_state = 35},
  [37] = {.lex_state = 11},
  [38] = {.lex_state = 11},
  [39] = {.lex_state = 9},
  [40] = {.lex_state = 11},
  [41] = {.lex_state = 35},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 35},
  [45] = {.lex_state = 10},
  [46] = {.lex_state = 35},
  [47] = {.lex_state = 11},
  [48] = {.lex_state = 35},
  [49] = {.lex_state = 35},
  [50] = {.lex_state = 35},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 35},
  [53] = {.lex_state = 35},
  [54] = {.lex_state = 35},
  [55] = {.lex_state = 9},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 9},
  [60] = {.lex_state = 10},
  [61] = {.lex_state = 11},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 9},
  [68] = {.lex_state = 9},
  [69] = {.lex_state = 9},
  [70] = {.lex_state = 35},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 35},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 35},
  [75] = {.lex_state = 9},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 35},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 35},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 9},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 35},
  [84] = {.lex_state = 9},
  [85] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [aux_sym_method_token1] = ACTIONS(1),
    [sym_const_spec] = ACTIONS(1),
    [sym_scheme] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym_json_body_token1] = ACTIONS(1),
    [aux_sym_json_body_token2] = ACTIONS(1),
    [aux_sym_xml_body_token1] = ACTIONS(1),
    [aux_sym_xml_body_token2] = ACTIONS(1),
    [anon_sym_query] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(3),
    [aux_sym__whitespace_token1] = ACTIONS(1),
    [aux_sym__newline_token1] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(78),
    [sym_query] = STATE(48),
    [sym_request] = STATE(26),
    [sym_method] = STATE(63),
    [sym_comment] = STATE(1),
    [aux_sym_document_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_method_token1] = ACTIONS(7),
    [sym_const_spec] = ACTIONS(7),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      anon_sym_SLASH,
    STATE(2), 1,
      sym_comment,
    STATE(14), 1,
      aux_sym_target_url_repeat1,
    STATE(17), 1,
      aux_sym_path_repeat1,
    STATE(19), 1,
      sym_path,
    STATE(41), 1,
      sym_query_param,
    ACTIONS(9), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    ACTIONS(13), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
  [30] = 9,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      anon_sym_SLASH,
    STATE(3), 1,
      sym_comment,
    STATE(12), 1,
      sym_path,
    STATE(17), 1,
      aux_sym_path_repeat1,
    STATE(24), 1,
      aux_sym_target_url_repeat1,
    STATE(41), 1,
      sym_query_param,
    ACTIONS(13), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(15), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [60] = 9,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      anon_sym_SLASH,
    STATE(4), 1,
      sym_comment,
    STATE(17), 1,
      aux_sym_path_repeat1,
    STATE(18), 1,
      aux_sym_target_url_repeat1,
    STATE(20), 1,
      sym_path,
    STATE(41), 1,
      sym_query_param,
    ACTIONS(13), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(17), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [90] = 9,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      anon_sym_SLASH,
    STATE(5), 1,
      sym_comment,
    STATE(13), 1,
      aux_sym_target_url_repeat1,
    STATE(16), 1,
      sym_path,
    STATE(17), 1,
      aux_sym_path_repeat1,
    STATE(41), 1,
      sym_query_param,
    ACTIONS(13), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(19), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [120] = 11,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      sym_scheme,
    ACTIONS(25), 1,
      anon_sym_AT,
    ACTIONS(27), 1,
      aux_sym__whitespace_token1,
    STATE(3), 1,
      sym_host,
    STATE(6), 1,
      sym_comment,
    STATE(31), 1,
      aux_sym__whitespace,
    STATE(50), 1,
      sym_target_url,
    STATE(55), 1,
      sym_authority,
    STATE(76), 1,
      sym_pair,
  [154] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_COLON,
    STATE(7), 1,
      sym_comment,
    STATE(29), 1,
      sym_pair,
    ACTIONS(31), 5,
      aux_sym_request_token1,
      anon_sym_SLASH,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [177] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    STATE(26), 1,
      sym_request,
    STATE(48), 1,
      sym_query,
    STATE(63), 1,
      sym_method,
    ACTIONS(37), 2,
      aux_sym_method_token1,
      sym_const_spec,
    STATE(8), 2,
      sym_comment,
      aux_sym_document_repeat1,
  [201] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(29), 1,
      sym_identifier,
    STATE(9), 1,
      sym_comment,
    STATE(29), 1,
      sym_pair,
    ACTIONS(31), 5,
      aux_sym_request_token1,
      anon_sym_SLASH,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [221] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(40), 1,
      ts_builtin_sym_end,
    STATE(8), 1,
      aux_sym_document_repeat1,
    STATE(10), 1,
      sym_comment,
    STATE(26), 1,
      sym_request,
    STATE(48), 1,
      sym_query,
    STATE(63), 1,
      sym_method,
    ACTIONS(7), 2,
      aux_sym_method_token1,
      sym_const_spec,
  [247] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(11), 1,
      sym_comment,
    ACTIONS(42), 6,
      aux_sym_request_token1,
      anon_sym_AT,
      anon_sym_SLASH,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [262] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(12), 1,
      sym_comment,
    STATE(18), 1,
      aux_sym_target_url_repeat1,
    STATE(41), 1,
      sym_query_param,
    ACTIONS(13), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(17), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [283] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(13), 1,
      sym_comment,
    STATE(15), 1,
      aux_sym_target_url_repeat1,
    STATE(41), 1,
      sym_query_param,
    ACTIONS(9), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    ACTIONS(13), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
  [304] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(14), 1,
      sym_comment,
    STATE(15), 1,
      aux_sym_target_url_repeat1,
    STATE(41), 1,
      sym_query_param,
    ACTIONS(13), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(44), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [325] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(41), 1,
      sym_query_param,
    ACTIONS(46), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    ACTIONS(48), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    STATE(15), 2,
      sym_comment,
      aux_sym_target_url_repeat1,
  [344] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(14), 1,
      aux_sym_target_url_repeat1,
    STATE(16), 1,
      sym_comment,
    STATE(41), 1,
      sym_query_param,
    ACTIONS(9), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    ACTIONS(13), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
  [365] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      anon_sym_SLASH,
    STATE(17), 1,
      sym_comment,
    STATE(23), 1,
      aux_sym_path_repeat1,
    ACTIONS(51), 4,
      aux_sym_request_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [384] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(15), 1,
      aux_sym_target_url_repeat1,
    STATE(18), 1,
      sym_comment,
    STATE(41), 1,
      sym_query_param,
    ACTIONS(13), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(19), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [405] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(19), 1,
      sym_comment,
    STATE(21), 1,
      aux_sym_target_url_repeat1,
    STATE(41), 1,
      sym_query_param,
    ACTIONS(13), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(44), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [426] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(13), 1,
      aux_sym_target_url_repeat1,
    STATE(20), 1,
      sym_comment,
    STATE(41), 1,
      sym_query_param,
    ACTIONS(13), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(19), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [447] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(15), 1,
      aux_sym_target_url_repeat1,
    STATE(21), 1,
      sym_comment,
    STATE(41), 1,
      sym_query_param,
    ACTIONS(13), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(53), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [468] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(55), 1,
      sym_identifier,
    STATE(22), 1,
      sym_comment,
    ACTIONS(57), 5,
      aux_sym_request_token1,
      anon_sym_SLASH,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [485] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(61), 1,
      anon_sym_SLASH,
    STATE(23), 2,
      sym_comment,
      aux_sym_path_repeat1,
    ACTIONS(59), 4,
      aux_sym_request_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [502] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(15), 1,
      aux_sym_target_url_repeat1,
    STATE(24), 1,
      sym_comment,
    STATE(41), 1,
      sym_query_param,
    ACTIONS(13), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(17), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [523] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(64), 1,
      anon_sym_SLASH,
    STATE(25), 1,
      sym_comment,
    ACTIONS(59), 4,
      aux_sym_request_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [539] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      anon_sym_LF,
    STATE(26), 1,
      sym_comment,
    STATE(27), 1,
      aux_sym_query_repeat1,
    STATE(33), 1,
      aux_sym_query_repeat2,
    STATE(56), 1,
      sym_header,
  [561] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      anon_sym_LF,
    STATE(27), 1,
      sym_comment,
    STATE(30), 1,
      aux_sym_query_repeat2,
    STATE(42), 1,
      aux_sym_query_repeat1,
    STATE(56), 1,
      sym_header,
  [583] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(28), 1,
      sym_comment,
    ACTIONS(71), 5,
      aux_sym_request_token1,
      anon_sym_SLASH,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [597] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(29), 1,
      sym_comment,
    ACTIONS(73), 5,
      aux_sym_request_token1,
      anon_sym_SLASH,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [611] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(69), 1,
      anon_sym_LF,
    ACTIONS(75), 1,
      anon_sym_LT,
    STATE(30), 1,
      sym_comment,
    STATE(43), 1,
      aux_sym_query_repeat2,
    STATE(44), 1,
      sym_body,
    STATE(54), 1,
      sym_external_body,
  [633] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(79), 1,
      anon_sym_AT,
    ACTIONS(81), 1,
      aux_sym__whitespace_token1,
    ACTIONS(77), 2,
      sym_scheme,
      sym_identifier,
    STATE(31), 2,
      sym_comment,
      aux_sym__whitespace,
  [651] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(25), 1,
      anon_sym_AT,
    ACTIONS(84), 1,
      sym_identifier,
    STATE(5), 1,
      sym_host,
    STATE(32), 1,
      sym_comment,
    STATE(59), 1,
      sym_authority,
    STATE(76), 1,
      sym_pair,
  [673] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(69), 1,
      anon_sym_LF,
    ACTIONS(75), 1,
      anon_sym_LT,
    STATE(33), 1,
      sym_comment,
    STATE(43), 1,
      aux_sym_query_repeat2,
    STATE(52), 1,
      sym_body,
    STATE(54), 1,
      sym_external_body,
  [695] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(86), 1,
      aux_sym_http_version_token1,
    ACTIONS(88), 1,
      aux_sym__whitespace_token1,
    STATE(34), 1,
      sym_comment,
    STATE(45), 1,
      aux_sym__whitespace,
    STATE(83), 1,
      sym_http_version,
  [714] = 6,
    ACTIONS(90), 1,
      aux_sym_value_token1,
    ACTIONS(92), 1,
      aux_sym_comment_token1,
    ACTIONS(94), 1,
      aux_sym__whitespace_token1,
    STATE(35), 1,
      sym_comment,
    STATE(47), 1,
      aux_sym__whitespace,
    STATE(53), 1,
      sym__line,
  [733] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(36), 1,
      sym_comment,
    ACTIONS(96), 4,
      aux_sym_request_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [746] = 6,
    ACTIONS(92), 1,
      aux_sym_comment_token1,
    ACTIONS(94), 1,
      aux_sym__whitespace_token1,
    ACTIONS(98), 1,
      aux_sym_value_token1,
    STATE(37), 1,
      sym_comment,
    STATE(47), 1,
      aux_sym__whitespace,
    STATE(79), 1,
      sym__line,
  [765] = 6,
    ACTIONS(90), 1,
      aux_sym_value_token1,
    ACTIONS(92), 1,
      aux_sym_comment_token1,
    ACTIONS(94), 1,
      aux_sym__whitespace_token1,
    STATE(38), 1,
      sym_comment,
    STATE(47), 1,
      aux_sym__whitespace,
    STATE(49), 1,
      sym__line,
  [784] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(39), 1,
      sym_comment,
    ACTIONS(100), 2,
      sym_scheme,
      sym_identifier,
    ACTIONS(102), 2,
      anon_sym_AT,
      aux_sym__whitespace_token1,
  [799] = 6,
    ACTIONS(92), 1,
      aux_sym_comment_token1,
    ACTIONS(94), 1,
      aux_sym__whitespace_token1,
    ACTIONS(98), 1,
      aux_sym_value_token1,
    STATE(37), 1,
      aux_sym__whitespace,
    STATE(40), 1,
      sym_comment,
    STATE(70), 1,
      sym__line,
  [818] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(41), 1,
      sym_comment,
    ACTIONS(104), 4,
      aux_sym_request_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [831] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(106), 1,
      sym_identifier,
    ACTIONS(109), 1,
      anon_sym_LF,
    STATE(56), 1,
      sym_header,
    STATE(42), 2,
      sym_comment,
      aux_sym_query_repeat1,
  [848] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(111), 1,
      anon_sym_LF,
    ACTIONS(114), 1,
      anon_sym_LT,
    STATE(43), 2,
      sym_comment,
      aux_sym_query_repeat2,
  [862] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      ts_builtin_sym_end,
    STATE(44), 1,
      sym_comment,
    ACTIONS(118), 2,
      aux_sym_method_token1,
      sym_const_spec,
  [876] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(79), 1,
      aux_sym_http_version_token1,
    ACTIONS(120), 1,
      aux_sym__whitespace_token1,
    STATE(45), 2,
      sym_comment,
      aux_sym__whitespace,
  [890] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(123), 1,
      ts_builtin_sym_end,
    STATE(46), 1,
      sym_comment,
    ACTIONS(125), 2,
      aux_sym_method_token1,
      sym_const_spec,
  [904] = 4,
    ACTIONS(77), 1,
      aux_sym_value_token1,
    ACTIONS(92), 1,
      aux_sym_comment_token1,
    ACTIONS(127), 1,
      aux_sym__whitespace_token1,
    STATE(47), 2,
      sym_comment,
      aux_sym__whitespace,
  [918] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(130), 1,
      ts_builtin_sym_end,
    STATE(48), 1,
      sym_comment,
    ACTIONS(132), 2,
      aux_sym_method_token1,
      sym_const_spec,
  [932] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(134), 1,
      ts_builtin_sym_end,
    STATE(49), 1,
      sym_comment,
    ACTIONS(136), 2,
      aux_sym_method_token1,
      sym_const_spec,
  [946] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(88), 1,
      aux_sym__whitespace_token1,
    ACTIONS(138), 1,
      aux_sym_request_token1,
    STATE(34), 1,
      aux_sym__whitespace,
    STATE(50), 1,
      sym_comment,
  [962] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(140), 1,
      anon_sym_AT,
    ACTIONS(142), 1,
      aux_sym__whitespace_token1,
    STATE(35), 1,
      aux_sym__whitespace,
    STATE(51), 1,
      sym_comment,
  [978] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(144), 1,
      ts_builtin_sym_end,
    STATE(52), 1,
      sym_comment,
    ACTIONS(146), 2,
      aux_sym_method_token1,
      sym_const_spec,
  [992] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(148), 1,
      ts_builtin_sym_end,
    STATE(53), 1,
      sym_comment,
    ACTIONS(150), 2,
      aux_sym_method_token1,
      sym_const_spec,
  [1006] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(152), 1,
      ts_builtin_sym_end,
    STATE(54), 1,
      sym_comment,
    ACTIONS(154), 2,
      aux_sym_method_token1,
      sym_const_spec,
  [1020] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(156), 1,
      sym_identifier,
    STATE(4), 1,
      sym_host,
    STATE(55), 1,
      sym_comment,
  [1033] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(56), 1,
      sym_comment,
    ACTIONS(158), 2,
      anon_sym_LF,
      sym_identifier,
  [1044] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(57), 1,
      sym_comment,
    ACTIONS(160), 2,
      anon_sym_LF,
      sym_identifier,
  [1055] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(142), 1,
      aux_sym__whitespace_token1,
    STATE(38), 1,
      aux_sym__whitespace,
    STATE(58), 1,
      sym_comment,
  [1068] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(156), 1,
      sym_identifier,
    STATE(2), 1,
      sym_host,
    STATE(59), 1,
      sym_comment,
  [1081] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(60), 1,
      sym_comment,
    ACTIONS(102), 2,
      aux_sym_http_version_token1,
      aux_sym__whitespace_token1,
  [1092] = 3,
    ACTIONS(92), 1,
      aux_sym_comment_token1,
    STATE(61), 1,
      sym_comment,
    ACTIONS(100), 2,
      aux_sym_value_token1,
      aux_sym__whitespace_token1,
  [1103] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(62), 1,
      sym_comment,
    ACTIONS(162), 2,
      anon_sym_LF,
      sym_identifier,
  [1114] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(27), 1,
      aux_sym__whitespace_token1,
    STATE(6), 1,
      aux_sym__whitespace,
    STATE(63), 1,
      sym_comment,
  [1127] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(64), 1,
      sym_comment,
    ACTIONS(164), 2,
      anon_sym_LF,
      sym_identifier,
  [1138] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(65), 1,
      sym_comment,
    ACTIONS(166), 2,
      anon_sym_LF,
      anon_sym_LT,
  [1149] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(66), 1,
      sym_comment,
    ACTIONS(168), 2,
      anon_sym_LF,
      sym_identifier,
  [1160] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(170), 1,
      sym_identifier,
    STATE(67), 1,
      sym_comment,
  [1170] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(172), 1,
      sym_identifier,
    STATE(68), 1,
      sym_comment,
  [1180] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(174), 1,
      sym_identifier,
    STATE(69), 1,
      sym_comment,
  [1190] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(176), 1,
      aux_sym_request_token1,
    STATE(70), 1,
      sym_comment,
  [1200] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(178), 1,
      anon_sym_COLON,
    STATE(71), 1,
      sym_comment,
  [1210] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_request_token1,
    STATE(72), 1,
      sym_comment,
  [1220] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(182), 1,
      anon_sym_EQ,
    STATE(73), 1,
      sym_comment,
  [1230] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(184), 1,
      anon_sym_COLON_SLASH_SLASH,
    STATE(74), 1,
      sym_comment,
  [1240] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(186), 1,
      sym_identifier,
    STATE(75), 1,
      sym_comment,
  [1250] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(188), 1,
      anon_sym_AT,
    STATE(76), 1,
      sym_comment,
  [1260] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(123), 1,
      aux_sym_request_token1,
    STATE(77), 1,
      sym_comment,
  [1270] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(190), 1,
      ts_builtin_sym_end,
    STATE(78), 1,
      sym_comment,
  [1280] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(192), 1,
      aux_sym_request_token1,
    STATE(79), 1,
      sym_comment,
  [1290] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(194), 1,
      aux_sym__whitespace_token1,
    STATE(80), 1,
      sym_comment,
  [1300] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(196), 1,
      sym_identifier,
    STATE(81), 1,
      sym_comment,
  [1310] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(33), 1,
      anon_sym_COLON,
    STATE(82), 1,
      sym_comment,
  [1320] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(198), 1,
      aux_sym_request_token1,
    STATE(83), 1,
      sym_comment,
  [1330] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(200), 1,
      sym_identifier,
    STATE(84), 1,
      sym_comment,
  [1340] = 1,
    ACTIONS(202), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 30,
  [SMALL_STATE(4)] = 60,
  [SMALL_STATE(5)] = 90,
  [SMALL_STATE(6)] = 120,
  [SMALL_STATE(7)] = 154,
  [SMALL_STATE(8)] = 177,
  [SMALL_STATE(9)] = 201,
  [SMALL_STATE(10)] = 221,
  [SMALL_STATE(11)] = 247,
  [SMALL_STATE(12)] = 262,
  [SMALL_STATE(13)] = 283,
  [SMALL_STATE(14)] = 304,
  [SMALL_STATE(15)] = 325,
  [SMALL_STATE(16)] = 344,
  [SMALL_STATE(17)] = 365,
  [SMALL_STATE(18)] = 384,
  [SMALL_STATE(19)] = 405,
  [SMALL_STATE(20)] = 426,
  [SMALL_STATE(21)] = 447,
  [SMALL_STATE(22)] = 468,
  [SMALL_STATE(23)] = 485,
  [SMALL_STATE(24)] = 502,
  [SMALL_STATE(25)] = 523,
  [SMALL_STATE(26)] = 539,
  [SMALL_STATE(27)] = 561,
  [SMALL_STATE(28)] = 583,
  [SMALL_STATE(29)] = 597,
  [SMALL_STATE(30)] = 611,
  [SMALL_STATE(31)] = 633,
  [SMALL_STATE(32)] = 651,
  [SMALL_STATE(33)] = 673,
  [SMALL_STATE(34)] = 695,
  [SMALL_STATE(35)] = 714,
  [SMALL_STATE(36)] = 733,
  [SMALL_STATE(37)] = 746,
  [SMALL_STATE(38)] = 765,
  [SMALL_STATE(39)] = 784,
  [SMALL_STATE(40)] = 799,
  [SMALL_STATE(41)] = 818,
  [SMALL_STATE(42)] = 831,
  [SMALL_STATE(43)] = 848,
  [SMALL_STATE(44)] = 862,
  [SMALL_STATE(45)] = 876,
  [SMALL_STATE(46)] = 890,
  [SMALL_STATE(47)] = 904,
  [SMALL_STATE(48)] = 918,
  [SMALL_STATE(49)] = 932,
  [SMALL_STATE(50)] = 946,
  [SMALL_STATE(51)] = 962,
  [SMALL_STATE(52)] = 978,
  [SMALL_STATE(53)] = 992,
  [SMALL_STATE(54)] = 1006,
  [SMALL_STATE(55)] = 1020,
  [SMALL_STATE(56)] = 1033,
  [SMALL_STATE(57)] = 1044,
  [SMALL_STATE(58)] = 1055,
  [SMALL_STATE(59)] = 1068,
  [SMALL_STATE(60)] = 1081,
  [SMALL_STATE(61)] = 1092,
  [SMALL_STATE(62)] = 1103,
  [SMALL_STATE(63)] = 1114,
  [SMALL_STATE(64)] = 1127,
  [SMALL_STATE(65)] = 1138,
  [SMALL_STATE(66)] = 1149,
  [SMALL_STATE(67)] = 1160,
  [SMALL_STATE(68)] = 1170,
  [SMALL_STATE(69)] = 1180,
  [SMALL_STATE(70)] = 1190,
  [SMALL_STATE(71)] = 1200,
  [SMALL_STATE(72)] = 1210,
  [SMALL_STATE(73)] = 1220,
  [SMALL_STATE(74)] = 1230,
  [SMALL_STATE(75)] = 1240,
  [SMALL_STATE(76)] = 1250,
  [SMALL_STATE(77)] = 1260,
  [SMALL_STATE(78)] = 1270,
  [SMALL_STATE(79)] = 1280,
  [SMALL_STATE(80)] = 1290,
  [SMALL_STATE(81)] = 1300,
  [SMALL_STATE(82)] = 1310,
  [SMALL_STATE(83)] = 1320,
  [SMALL_STATE(84)] = 1330,
  [SMALL_STATE(85)] = 1340,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 4),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 2),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 3),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(80),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3, .production_id = 5),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 5),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_target_url_repeat1, 2),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_url_repeat1, 2), SHIFT_REPEAT(69),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 6),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(22),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(28),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 3),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host, 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__whitespace, 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__whitespace, 2),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(39),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 4, .production_id = 8),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__whitespace, 1),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__whitespace, 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_target_url_repeat1, 1),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_repeat1, 2), SHIFT_REPEAT(71),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_repeat1, 2),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_repeat2, 2), SHIFT_REPEAT(65),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_repeat2, 2),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 4, .production_id = 1),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query, 4, .production_id = 1),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(60),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 1),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line, 1),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(61),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 1),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 1),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_body, 5, .production_id = 7),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_body, 5, .production_id = 7),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 3, .production_id = 1),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query, 3, .production_id = 1),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_body, 3, .production_id = 4),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_body, 3, .production_id = 4),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 1),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_repeat1, 1),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4, .production_id = 3),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4, .production_id = 2),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, .production_id = 2),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_repeat2, 1),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 5, .production_id = 6),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authority, 2),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authority, 1),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_version, 1),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [190] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 1),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_http(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif

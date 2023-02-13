#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 33
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 34
#define ALIAS_COUNT 0
#define TOKEN_COUNT 24
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 4

enum {
  anon_sym_LBRACE = 1,
  anon_sym_COMMA = 2,
  anon_sym_RBRACE = 3,
  anon_sym_COLON = 4,
  anon_sym_LBRACK = 5,
  anon_sym_RBRACK = 6,
  anon_sym_DQUOTE = 7,
  sym_escape_sequence = 8,
  sym_number = 9,
  sym_true = 10,
  sym_false = 11,
  sym_null = 12,
  anon_sym_LF = 13,
  sym_http_version = 14,
  sym_method = 15,
  sym_url = 16,
  aux_sym_header_token1 = 17,
  anon_sym_COLON2 = 18,
  sym_value = 19,
  anon_sym_LT = 20,
  sym_payload_file = 21,
  sym_comment = 22,
  aux_sym__whitespace_token1 = 23,
  sym_document = 24,
  sym_query = 25,
  sym_request = 26,
  sym_header = 27,
  sym_body = 28,
  sym_external_body = 29,
  aux_sym__whitespace = 30,
  aux_sym_document_repeat1 = 31,
  aux_sym_query_repeat1 = 32,
  aux_sym_query_repeat2 = 33,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DQUOTE] = "\"",
  [sym_escape_sequence] = "escape_sequence",
  [sym_number] = "number",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_null] = "null",
  [anon_sym_LF] = "\n",
  [sym_http_version] = "http_version",
  [sym_method] = "method",
  [sym_url] = "url",
  [aux_sym_header_token1] = "header_token1",
  [anon_sym_COLON2] = ":",
  [sym_value] = "value",
  [anon_sym_LT] = "<",
  [sym_payload_file] = "payload_file",
  [sym_comment] = "comment",
  [aux_sym__whitespace_token1] = "_whitespace_token1",
  [sym_document] = "document",
  [sym_query] = "query",
  [sym_request] = "request",
  [sym_header] = "header",
  [sym_body] = "body",
  [sym_external_body] = "external_body",
  [aux_sym__whitespace] = "_whitespace",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_query_repeat1] = "query_repeat1",
  [aux_sym_query_repeat2] = "query_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_number] = sym_number,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_null] = sym_null,
  [anon_sym_LF] = anon_sym_LF,
  [sym_http_version] = sym_http_version,
  [sym_method] = sym_method,
  [sym_url] = sym_url,
  [aux_sym_header_token1] = aux_sym_header_token1,
  [anon_sym_COLON2] = anon_sym_COLON,
  [sym_value] = sym_value,
  [anon_sym_LT] = anon_sym_LT,
  [sym_payload_file] = sym_payload_file,
  [sym_comment] = sym_comment,
  [aux_sym__whitespace_token1] = aux_sym__whitespace_token1,
  [sym_document] = sym_document,
  [sym_query] = sym_query,
  [sym_request] = sym_request,
  [sym_header] = sym_header,
  [sym_body] = sym_body,
  [sym_external_body] = sym_external_body,
  [aux_sym__whitespace] = aux_sym__whitespace,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_query_repeat1] = aux_sym_query_repeat1,
  [aux_sym_query_repeat2] = aux_sym_query_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [sym_null] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [sym_http_version] = {
    .visible = true,
    .named = true,
  },
  [sym_method] = {
    .visible = true,
    .named = true,
  },
  [sym_url] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_header_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON2] = {
    .visible = true,
    .named = false,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [sym_payload_file] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__whitespace_token1] = {
    .visible = false,
    .named = false,
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
  [aux_sym__whitespace] = {
    .visible = false,
    .named = false,
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
};

enum {
  field_method = 1,
  field_name = 2,
  field_request = 3,
  field_url = 4,
  field_value = 5,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_method] = "method",
  [field_name] = "name",
  [field_request] = "request",
  [field_url] = "url",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_request, 0},
  [1] =
    {field_method, 0},
    {field_url, 2},
  [3] =
    {field_name, 0},
    {field_name, 1},
    {field_value, 3},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
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
  [13] = 9,
  [14] = 9,
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
};

static inline bool sym_url_character_set_1(int32_t c) {
  return (c < '?'
    ? (c < '+'
      ? (c < '%'
        ? c == '#'
        : c <= '&')
      : (c <= ';' || c == '='))
    : (c <= 'Z' || (c < '~'
      ? (c < 'a'
        ? (c >= '^' && c <= '_')
        : c <= 'z')
      : (c <= '~' || (c >= 192 && c <= 255)))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(43);
      if (lookahead == '\n') ADVANCE(65);
      if (lookahead == '"') ADVANCE(49);
      if (lookahead == '#') ADVANCE(117);
      if (lookahead == '+') ADVANCE(6);
      if (lookahead == ',') ADVANCE(45);
      if (lookahead == '-') ADVANCE(80);
      if (lookahead == '.') ADVANCE(115);
      if (lookahead == '/') ADVANCE(116);
      if (lookahead == '0') ADVANCE(51);
      if (lookahead == ':') ADVANCE(112);
      if (lookahead == '<') ADVANCE(114);
      if (lookahead == 'D') ADVANCE(83);
      if (lookahead == 'G') ADVANCE(85);
      if (lookahead == 'H') ADVANCE(95);
      if (lookahead == 'P') ADVANCE(81);
      if (lookahead == '[') ADVANCE(47);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == ']') ADVANCE(48);
      if (lookahead == 'f') ADVANCE(96);
      if (lookahead == 'n') ADVANCE(105);
      if (lookahead == 't') ADVANCE(102);
      if (lookahead == '{') ADVANCE(44);
      if (lookahead == '}') ADVANCE(46);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(118);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(111);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(65);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 2:
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == ',' ||
          lookahead == ':' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(74);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          lookahead == '~' ||
          (192 <= lookahead && lookahead <= 255)) ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(74);
      END_STATE();
    case 3:
      if (lookahead == '/') ADVANCE(66);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(28);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(4);
      END_STATE();
    case 6:
      if (lookahead == '0') ADVANCE(54);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 7:
      if (lookahead == ':') ADVANCE(5);
      END_STATE();
    case 8:
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == 's') ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == 'A') ADVANCE(21);
      if (lookahead == 'O') ADVANCE(18);
      if (lookahead == 'U') ADVANCE(19);
      END_STATE();
    case 10:
      if (lookahead == 'C') ADVANCE(15);
      END_STATE();
    case 11:
      if (lookahead == 'E') ADVANCE(16);
      END_STATE();
    case 12:
      if (lookahead == 'E') ADVANCE(67);
      END_STATE();
    case 13:
      if (lookahead == 'E') ADVANCE(19);
      END_STATE();
    case 14:
      if (lookahead == 'E') ADVANCE(22);
      END_STATE();
    case 15:
      if (lookahead == 'H') ADVANCE(67);
      END_STATE();
    case 16:
      if (lookahead == 'L') ADVANCE(14);
      END_STATE();
    case 17:
      if (lookahead == 'P') ADVANCE(3);
      END_STATE();
    case 18:
      if (lookahead == 'S') ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == 'T') ADVANCE(67);
      END_STATE();
    case 20:
      if (lookahead == 'T') ADVANCE(17);
      END_STATE();
    case 21:
      if (lookahead == 'T') ADVANCE(10);
      END_STATE();
    case 22:
      if (lookahead == 'T') ADVANCE(12);
      END_STATE();
    case 23:
      if (lookahead == 'T') ADVANCE(20);
      END_STATE();
    case 24:
      if (lookahead == 'p') ADVANCE(8);
      END_STATE();
    case 25:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 26:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 27:
      if (lookahead == 'w') ADVANCE(5);
      END_STATE();
    case 28:
      if (lookahead == 'w') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.') ADVANCE(74);
      END_STATE();
    case 29:
      if (lookahead == 'w') ADVANCE(27);
      END_STATE();
    case 30:
      if (lookahead == '{') ADVANCE(41);
      END_STATE();
    case 31:
      if (lookahead == '}') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead == '}') ADVANCE(77);
      END_STATE();
    case 33:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 34:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == ' ') ADVANCE(118);
      if (lookahead == '.' ||
          lookahead == '/' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 35:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == ' ') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(113);
      END_STATE();
    case 36:
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      if (sym_url_character_set_1(lookahead)) ADVANCE(77);
      END_STATE();
    case 37:
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(38);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          lookahead == '~' ||
          (192 <= lookahead && lookahead <= 255)) ADVANCE(77);
      END_STATE();
    case 38:
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(38);
      if (sym_url_character_set_1(lookahead)) ADVANCE(77);
      END_STATE();
    case 39:
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(50);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 42:
      if (eof) ADVANCE(43);
      if (lookahead == ':') ADVANCE(112);
      if (lookahead == 'D') ADVANCE(11);
      if (lookahead == 'G') ADVANCE(13);
      if (lookahead == 'H') ADVANCE(23);
      if (lookahead == 'P') ADVANCE(9);
      if (lookahead == 'h') ADVANCE(26);
      if (lookahead == 'w') ADVANCE(29);
      if (lookahead == '{') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == ' ') ADVANCE(118);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(56);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(107);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(78);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(108);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(110);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(56);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(56);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(78);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(56);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(56);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(57);
      if (lookahead == '-' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(58);
      if (lookahead == '-' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(61);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_true);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(116);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(111);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_false);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(116);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(111);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_null);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(116);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(111);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_http_version);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_method);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_method);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '.') ADVANCE(2);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'w') ADVANCE(70);
      if (lookahead == ',' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(74);
      if (sym_url_character_set_1(lookahead)) ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(74);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '.') ADVANCE(2);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'w') ADVANCE(71);
      if (lookahead == ',' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(74);
      if (sym_url_character_set_1(lookahead)) ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(74);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '.') ADVANCE(2);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == ',' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(74);
      if (sym_url_character_set_1(lookahead)) ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(74);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == ',' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      if (sym_url_character_set_1(lookahead)) ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(74);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == ',' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(74);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          lookahead == '~' ||
          (192 <= lookahead && lookahead <= 255)) ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(74);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == ',' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(74);
      if (sym_url_character_set_1(lookahead)) ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == ':') ADVANCE(36);
      if (lookahead == ',' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(38);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          lookahead == '~' ||
          (192 <= lookahead && lookahead <= 255)) ADVANCE(77);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      if (sym_url_character_set_1(lookahead)) ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(38);
      if (sym_url_character_set_1(lookahead)) ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_header_token1);
      if (lookahead == '+') ADVANCE(40);
      if (lookahead == '-') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_header_token1);
      if (lookahead == '/') ADVANCE(66);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_header_token1);
      if (lookahead == '0') ADVANCE(53);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_header_token1);
      if (lookahead == 'A') ADVANCE(93);
      if (lookahead == 'O') ADVANCE(90);
      if (lookahead == 'U') ADVANCE(91);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_header_token1);
      if (lookahead == 'C') ADVANCE(87);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_header_token1);
      if (lookahead == 'E') ADVANCE(88);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_header_token1);
      if (lookahead == 'E') ADVANCE(68);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_header_token1);
      if (lookahead == 'E') ADVANCE(91);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_header_token1);
      if (lookahead == 'E') ADVANCE(94);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_header_token1);
      if (lookahead == 'H') ADVANCE(68);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_header_token1);
      if (lookahead == 'L') ADVANCE(86);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_header_token1);
      if (lookahead == 'P') ADVANCE(79);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_header_token1);
      if (lookahead == 'S') ADVANCE(91);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_header_token1);
      if (lookahead == 'T') ADVANCE(68);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_header_token1);
      if (lookahead == 'T') ADVANCE(89);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_header_token1);
      if (lookahead == 'T') ADVANCE(82);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_header_token1);
      if (lookahead == 'T') ADVANCE(84);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_header_token1);
      if (lookahead == 'T') ADVANCE(92);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_header_token1);
      if (lookahead == 'a') ADVANCE(99);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(116);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(111);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_header_token1);
      if (lookahead == 'e') ADVANCE(62);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(116);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(111);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_header_token1);
      if (lookahead == 'e') ADVANCE(63);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(116);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(111);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_header_token1);
      if (lookahead == 'l') ADVANCE(103);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(116);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(111);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_header_token1);
      if (lookahead == 'l') ADVANCE(64);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(116);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(111);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_header_token1);
      if (lookahead == 'l') ADVANCE(100);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(116);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(111);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_header_token1);
      if (lookahead == 'r') ADVANCE(104);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(116);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(111);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_header_token1);
      if (lookahead == 's') ADVANCE(98);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(116);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(111);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_header_token1);
      if (lookahead == 'u') ADVANCE(97);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(116);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(111);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_header_token1);
      if (lookahead == 'u') ADVANCE(101);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(116);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(111);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_header_token1);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(116);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(111);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_header_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(57);
      if (lookahead == '-' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_header_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(58);
      if (lookahead == '-' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_header_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_header_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(61);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_header_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_COLON2);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_payload_file);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (lookahead == '.' ||
          lookahead == '/' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_payload_file);
      if (lookahead == '.' ||
          lookahead == '/' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 42},
  [2] = {.lex_state = 42},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 42},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 42},
  [10] = {.lex_state = 34},
  [11] = {.lex_state = 42},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 34},
  [14] = {.lex_state = 35},
  [15] = {.lex_state = 42},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 35},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 42},
  [20] = {.lex_state = 42},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 42},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 42},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 42},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [sym_http_version] = ACTIONS(1),
    [sym_method] = ACTIONS(1),
    [aux_sym_header_token1] = ACTIONS(1),
    [anon_sym_COLON2] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [sym_payload_file] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [aux_sym__whitespace_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(29),
    [sym_query] = STATE(5),
    [sym_request] = STATE(4),
    [aux_sym_document_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_method] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(7), 1,
      ts_builtin_sym_end,
    ACTIONS(9), 1,
      sym_method,
    STATE(4), 1,
      sym_request,
    STATE(2), 2,
      sym_query,
      aux_sym_document_repeat1,
  [14] = 5,
    ACTIONS(12), 1,
      anon_sym_LF,
    ACTIONS(14), 1,
      anon_sym_LT,
    STATE(16), 1,
      aux_sym_query_repeat2,
    STATE(20), 1,
      sym_external_body,
    STATE(22), 1,
      sym_body,
  [30] = 4,
    ACTIONS(16), 1,
      anon_sym_LF,
    ACTIONS(18), 1,
      aux_sym_header_token1,
    STATE(7), 1,
      aux_sym_query_repeat2,
    STATE(6), 2,
      sym_header,
      aux_sym_query_repeat1,
  [44] = 4,
    ACTIONS(5), 1,
      sym_method,
    ACTIONS(20), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym_request,
    STATE(2), 2,
      sym_query,
      aux_sym_document_repeat1,
  [58] = 4,
    ACTIONS(18), 1,
      aux_sym_header_token1,
    ACTIONS(22), 1,
      anon_sym_LF,
    STATE(3), 1,
      aux_sym_query_repeat2,
    STATE(8), 2,
      sym_header,
      aux_sym_query_repeat1,
  [72] = 5,
    ACTIONS(12), 1,
      anon_sym_LF,
    ACTIONS(14), 1,
      anon_sym_LT,
    STATE(16), 1,
      aux_sym_query_repeat2,
    STATE(19), 1,
      sym_body,
    STATE(20), 1,
      sym_external_body,
  [88] = 3,
    ACTIONS(24), 1,
      anon_sym_LF,
    ACTIONS(26), 1,
      aux_sym_header_token1,
    STATE(8), 2,
      sym_header,
      aux_sym_query_repeat1,
  [99] = 3,
    ACTIONS(31), 1,
      aux_sym__whitespace_token1,
    STATE(9), 1,
      aux_sym__whitespace,
    ACTIONS(29), 2,
      sym_http_version,
      sym_url,
  [110] = 3,
    ACTIONS(34), 1,
      sym_payload_file,
    ACTIONS(36), 1,
      aux_sym__whitespace_token1,
    STATE(13), 1,
      aux_sym__whitespace,
  [120] = 3,
    ACTIONS(38), 1,
      sym_http_version,
    ACTIONS(40), 1,
      aux_sym__whitespace_token1,
    STATE(9), 1,
      aux_sym__whitespace,
  [130] = 3,
    ACTIONS(42), 1,
      anon_sym_LF,
    ACTIONS(44), 1,
      aux_sym__whitespace_token1,
    STATE(11), 1,
      aux_sym__whitespace,
  [140] = 3,
    ACTIONS(29), 1,
      sym_payload_file,
    ACTIONS(46), 1,
      aux_sym__whitespace_token1,
    STATE(13), 1,
      aux_sym__whitespace,
  [150] = 3,
    ACTIONS(29), 1,
      sym_value,
    ACTIONS(49), 1,
      aux_sym__whitespace_token1,
    STATE(14), 1,
      aux_sym__whitespace,
  [160] = 3,
    ACTIONS(40), 1,
      aux_sym__whitespace_token1,
    ACTIONS(52), 1,
      sym_url,
    STATE(9), 1,
      aux_sym__whitespace,
  [170] = 3,
    ACTIONS(54), 1,
      anon_sym_LF,
    ACTIONS(57), 1,
      anon_sym_LT,
    STATE(16), 1,
      aux_sym_query_repeat2,
  [180] = 3,
    ACTIONS(59), 1,
      sym_value,
    ACTIONS(61), 1,
      aux_sym__whitespace_token1,
    STATE(14), 1,
      aux_sym__whitespace,
  [190] = 2,
    ACTIONS(63), 1,
      aux_sym__whitespace_token1,
    STATE(10), 1,
      aux_sym__whitespace,
  [197] = 1,
    ACTIONS(65), 2,
      ts_builtin_sym_end,
      sym_method,
  [202] = 1,
    ACTIONS(67), 2,
      ts_builtin_sym_end,
      sym_method,
  [207] = 1,
    ACTIONS(69), 2,
      anon_sym_LF,
      aux_sym_header_token1,
  [212] = 1,
    ACTIONS(71), 2,
      ts_builtin_sym_end,
      sym_method,
  [217] = 1,
    ACTIONS(73), 2,
      anon_sym_LF,
      aux_sym_header_token1,
  [222] = 1,
    ACTIONS(75), 2,
      anon_sym_LF,
      aux_sym_header_token1,
  [227] = 1,
    ACTIONS(77), 2,
      ts_builtin_sym_end,
      sym_method,
  [232] = 2,
    ACTIONS(79), 1,
      aux_sym__whitespace_token1,
    STATE(17), 1,
      aux_sym__whitespace,
  [239] = 2,
    ACTIONS(81), 1,
      aux_sym__whitespace_token1,
    STATE(15), 1,
      aux_sym__whitespace,
  [246] = 1,
    ACTIONS(83), 1,
      anon_sym_COLON2,
  [250] = 1,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
  [254] = 1,
    ACTIONS(87), 1,
      anon_sym_LF,
  [258] = 1,
    ACTIONS(89), 1,
      anon_sym_LF,
  [262] = 1,
    ACTIONS(91), 1,
      anon_sym_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 14,
  [SMALL_STATE(4)] = 30,
  [SMALL_STATE(5)] = 44,
  [SMALL_STATE(6)] = 58,
  [SMALL_STATE(7)] = 72,
  [SMALL_STATE(8)] = 88,
  [SMALL_STATE(9)] = 99,
  [SMALL_STATE(10)] = 110,
  [SMALL_STATE(11)] = 120,
  [SMALL_STATE(12)] = 130,
  [SMALL_STATE(13)] = 140,
  [SMALL_STATE(14)] = 150,
  [SMALL_STATE(15)] = 160,
  [SMALL_STATE(16)] = 170,
  [SMALL_STATE(17)] = 180,
  [SMALL_STATE(18)] = 190,
  [SMALL_STATE(19)] = 197,
  [SMALL_STATE(20)] = 202,
  [SMALL_STATE(21)] = 207,
  [SMALL_STATE(22)] = 212,
  [SMALL_STATE(23)] = 217,
  [SMALL_STATE(24)] = 222,
  [SMALL_STATE(25)] = 227,
  [SMALL_STATE(26)] = 232,
  [SMALL_STATE(27)] = 239,
  [SMALL_STATE(28)] = 246,
  [SMALL_STATE(29)] = 250,
  [SMALL_STATE(30)] = 254,
  [SMALL_STATE(31)] = 258,
  [SMALL_STATE(32)] = 262,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [9] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(27),
  [12] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [14] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [16] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [18] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [22] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_repeat1, 2),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_repeat1, 2), SHIFT_REPEAT(28),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__whitespace, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(9),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(13),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(14),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_repeat2, 2), SHIFT_REPEAT(16),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_repeat2, 2),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 3, .production_id = 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4, .production_id = 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 4, .production_id = 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, .production_id = 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 5, .production_id = 3),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_body, 4),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [85] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif

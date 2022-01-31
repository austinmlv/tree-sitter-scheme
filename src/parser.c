#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 22
#define LARGE_STATE_COUNT 14
#define SYMBOL_COUNT 28
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym_boolean_token1 = 1,
  aux_sym_boolean_token2 = 2,
  sym_number = 3,
  anon_sym_POUND = 4,
  aux_sym_character_token1 = 5,
  sym_string = 6,
  sym_bytevector = 7,
  aux_sym_symbol_token1 = 8,
  aux_sym_symbol_token2 = 9,
  anon_sym_LPAREN = 10,
  anon_sym_LBRACK = 11,
  anon_sym_LBRACE = 12,
  aux_sym_list_token1 = 13,
  anon_sym_RPAREN = 14,
  anon_sym_RBRACK = 15,
  anon_sym_RBRACE = 16,
  sym_comment = 17,
  sym_directive = 18,
  sym_source = 19,
  sym__sexp = 20,
  sym__atom = 21,
  sym_boolean = 22,
  sym_character = 23,
  sym_symbol = 24,
  sym_list = 25,
  aux_sym_source_repeat1 = 26,
  aux_sym_list_repeat1 = 27,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_boolean_token1] = "boolean_token1",
  [aux_sym_boolean_token2] = "boolean_token2",
  [sym_number] = "number",
  [anon_sym_POUND] = "#",
  [aux_sym_character_token1] = "character_token1",
  [sym_string] = "string",
  [sym_bytevector] = "bytevector",
  [aux_sym_symbol_token1] = "symbol_token1",
  [aux_sym_symbol_token2] = "symbol_token2",
  [anon_sym_LPAREN] = "(",
  [anon_sym_LBRACK] = "[",
  [anon_sym_LBRACE] = "{",
  [aux_sym_list_token1] = "list_token1",
  [anon_sym_RPAREN] = ")",
  [anon_sym_RBRACK] = "]",
  [anon_sym_RBRACE] = "}",
  [sym_comment] = "comment",
  [sym_directive] = "directive",
  [sym_source] = "source",
  [sym__sexp] = "_sexp",
  [sym__atom] = "_atom",
  [sym_boolean] = "boolean",
  [sym_character] = "character",
  [sym_symbol] = "symbol",
  [sym_list] = "list",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_boolean_token1] = aux_sym_boolean_token1,
  [aux_sym_boolean_token2] = aux_sym_boolean_token2,
  [sym_number] = sym_number,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_character_token1] = aux_sym_character_token1,
  [sym_string] = sym_string,
  [sym_bytevector] = sym_bytevector,
  [aux_sym_symbol_token1] = aux_sym_symbol_token1,
  [aux_sym_symbol_token2] = aux_sym_symbol_token2,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [aux_sym_list_token1] = aux_sym_list_token1,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_comment] = sym_comment,
  [sym_directive] = sym_directive,
  [sym_source] = sym_source,
  [sym__sexp] = sym__sexp,
  [sym__atom] = sym__atom,
  [sym_boolean] = sym_boolean,
  [sym_character] = sym_character,
  [sym_symbol] = sym_symbol,
  [sym_list] = sym_list,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym_list_repeat1] = aux_sym_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_boolean_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_boolean_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_character_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_bytevector] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_symbol_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_symbol_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_list_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym__sexp] = {
    .visible = false,
    .named = true,
  },
  [sym__atom] = {
    .visible = false,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_character] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_repeat1] = {
    .visible = false,
    .named = false,
  },
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
  [5] = 3,
  [6] = 2,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 10,
  [15] = 11,
  [16] = 12,
  [17] = 9,
  [18] = 13,
  [19] = 19,
  [20] = 20,
  [21] = 19,
};

static inline bool sym_bytevector_character_set_1(int32_t c) {
  return (c < 8192
    ? (c < ','
      ? (c < 28
        ? (c >= '\t' && c <= '\r')
        : c <= ' ')
      : (c <= ',' || c == 5760))
    : (c <= 8198 || (c < 8287
      ? (c < 8232
        ? (c >= 8200 && c <= 8202)
        : c <= 8233)
      : (c <= 8287 || c == 12288))));
}

static inline bool aux_sym_list_token1_character_set_1(int32_t c) {
  return (c < 8192
    ? (c < ','
      ? (c < 28
        ? (c >= 11 && c <= '\f')
        : c <= 31)
      : (c <= ',' || c == 5760))
    : (c <= 8198 || (c < 8287
      ? (c < 8232
        ? (c >= 8200 && c <= 8202)
        : c <= 8233)
      : (c <= 8287 || c == 12288))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(75);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '#') ADVANCE(131);
      if (lookahead == '(') ADVANCE(182);
      if (lookahead == ')') ADVANCE(187);
      if (lookahead == '+') ADVANCE(137);
      if (lookahead == '-') ADVANCE(137);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == ';') ADVANCE(190);
      if (lookahead == '[') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(69);
      if (lookahead == ']') ADVANCE(188);
      if (lookahead == '{') ADVANCE(184);
      if (lookahead == '|') ADVANCE(74);
      if (lookahead == '}') ADVANCE(189);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(98);
      if (('!' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('/' <= lookahead && lookahead <= '_') ||
          ('g' <= lookahead && lookahead <= '~')) ADVANCE(180);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(6);
      if (lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(7);
      if (lookahead == 'x') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(193);
      if (lookahead == '!') ADVANCE(3);
      if (lookahead == '#') ADVANCE(192);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(193);
      if (lookahead == '!') ADVANCE(3);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '#') ADVANCE(131);
      if (lookahead == '(') ADVANCE(182);
      if (lookahead == ')') ADVANCE(187);
      if (lookahead == '+') ADVANCE(137);
      if (lookahead == '-') ADVANCE(137);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == ';') ADVANCE(190);
      if (lookahead == '[') ADVANCE(183);
      if (lookahead == ']') ADVANCE(188);
      if (lookahead == '{') ADVANCE(184);
      if (lookahead == '|') ADVANCE(74);
      if (lookahead == '}') ADVANCE(189);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(98);
      if (('!' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('/' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= '~')) ADVANCE(180);
      if (aux_sym_list_token1_character_set_1(lookahead)) ADVANCE(186);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(133);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(6);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(133);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(55);
      if (lookahead == '+') ADVANCE(21);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == '.') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(54);
      if (lookahead == '+') ADVANCE(21);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == '.') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 10:
      if (lookahead == '(') ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == ')') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (sym_bytevector_character_set_1(lookahead)) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '+') ADVANCE(21);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == '.') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == '/') ADVANCE(66);
      if (lookahead == 'e') ADVANCE(22);
      if (lookahead == 'i') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(26);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == 'i') ADVANCE(123);
      if (lookahead == 'n') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == 'i') ADVANCE(123);
      if (lookahead == 'n') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(27);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(59);
      if (lookahead == 'i') ADVANCE(46);
      if (lookahead == 'n') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(116);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(59);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(116);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(25);
      END_STATE();
    case 21:
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == 'i') ADVANCE(125);
      if (lookahead == 'n') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(87);
      END_STATE();
    case 22:
      if (lookahead == '/') ADVANCE(66);
      if (lookahead == 'e') ADVANCE(22);
      if (lookahead == 'i') ADVANCE(80);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      END_STATE();
    case 23:
      if (lookahead == '/') ADVANCE(66);
      if (lookahead == 'e') ADVANCE(22);
      if (lookahead == 'i') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == '/') ADVANCE(66);
      if (lookahead == 'e') ADVANCE(22);
      if (lookahead == 'i') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == '0') ADVANCE(80);
      END_STATE();
    case 26:
      if (lookahead == '0') ADVANCE(39);
      END_STATE();
    case 27:
      if (lookahead == '0') ADVANCE(90);
      END_STATE();
    case 28:
      if (lookahead == '8') ADVANCE(10);
      END_STATE();
    case 29:
      if (lookahead == ';') ADVANCE(7);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(51);
      if (lookahead == 'i') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 36:
      if (lookahead == 'f') ADVANCE(14);
      END_STATE();
    case 37:
      if (lookahead == 'f') ADVANCE(17);
      END_STATE();
    case 38:
      if (lookahead == 'f') ADVANCE(20);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(80);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(47);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 47:
      if (lookahead == 's') ADVANCE(34);
      END_STATE();
    case 48:
      if (lookahead == 'u') ADVANCE(33);
      END_STATE();
    case 49:
      if (lookahead == '|') ADVANCE(181);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 50:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 51:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 52:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      END_STATE();
    case 53:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 54:
      if (lookahead == 'e' ||
          lookahead == 'i') ADVANCE(12);
      END_STATE();
    case 55:
      if (lookahead == 'b' ||
          lookahead == 'd' ||
          lookahead == 'o' ||
          lookahead == 'x') ADVANCE(12);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 59:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(94);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(29);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(128);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(92);
      END_STATE();
    case 69:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(132);
      END_STATE();
    case 70:
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '#') ADVANCE(72);
      if (lookahead == '!') ADVANCE(70);
      if (lookahead == '#') ADVANCE(193);
      END_STATE();
    case 71:
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '|') ADVANCE(73);
      if (lookahead == '#') ADVANCE(191);
      if (lookahead == '|') ADVANCE(71);
      END_STATE();
    case 72:
      if (lookahead != 0 &&
          lookahead != '!') ADVANCE(72);
      if (lookahead == '!') ADVANCE(70);
      END_STATE();
    case 73:
      if (lookahead != 0 &&
          lookahead != '|') ADVANCE(73);
      if (lookahead == '|') ADVANCE(71);
      END_STATE();
    case 74:
      if (lookahead != 0 &&
          lookahead != '|') ADVANCE(49);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_boolean_token1);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_boolean_token1);
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_boolean_token2);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_boolean_token2);
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(15);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '.') ADVANCE(88);
      if (lookahead == '/') ADVANCE(64);
      if (lookahead == '@') ADVANCE(19);
      if (lookahead == 'e') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(15);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == '/') ADVANCE(66);
      if (lookahead == '@') ADVANCE(19);
      if (lookahead == 'e') ADVANCE(22);
      if (lookahead == 'i') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(15);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == '@') ADVANCE(19);
      if (lookahead == 'e') ADVANCE(111);
      if (lookahead == 'i') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(87);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(15);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '/') ADVANCE(64);
      if (lookahead == '@') ADVANCE(19);
      if (lookahead == 'e') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(15);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '/') ADVANCE(64);
      if (lookahead == '@') ADVANCE(19);
      if (lookahead == 'e') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(15);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == '@') ADVANCE(19);
      if (lookahead == 'e') ADVANCE(111);
      if (lookahead == 'i') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(87);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(15);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == '@') ADVANCE(19);
      if (lookahead == 'e') ADVANCE(111);
      if (lookahead == 'i') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(15);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '@') ADVANCE(19);
      if (lookahead == 'e') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(15);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '@') ADVANCE(19);
      if (lookahead == 'e') ADVANCE(53);
      if (lookahead == 'i') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(15);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '@') ADVANCE(19);
      if (lookahead == 'i') ADVANCE(80);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(15);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '@') ADVANCE(19);
      if (lookahead == 'i') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(15);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '@') ADVANCE(19);
      if (lookahead == 'i') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(15);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '@') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(15);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '@') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(139);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == '.') ADVANCE(102);
      if (lookahead == '/') ADVANCE(177);
      if (lookahead == '@') ADVANCE(143);
      if (lookahead == 'e') ADVANCE(109);
      if (lookahead == 'i') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(100);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == ':' ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(180);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(139);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == '.') ADVANCE(153);
      if (lookahead == '/') ADVANCE(178);
      if (lookahead == '@') ADVANCE(143);
      if (lookahead == 'e') ADVANCE(144);
      if (lookahead == 'i') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(146);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == ':' ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(180);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(139);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == '/') ADVANCE(176);
      if (lookahead == '@') ADVANCE(143);
      if (lookahead == 'e') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(98);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('.' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(180);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(139);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == '/') ADVANCE(176);
      if (lookahead == '@') ADVANCE(143);
      if (lookahead == 'e') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(98);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('.' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(180);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(139);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == '/') ADVANCE(177);
      if (lookahead == '@') ADVANCE(143);
      if (lookahead == 'e') ADVANCE(109);
      if (lookahead == 'i') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(100);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('.' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(180);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(139);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == '/') ADVANCE(177);
      if (lookahead == '@') ADVANCE(143);
      if (lookahead == 'e') ADVANCE(109);
      if (lookahead == 'i') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(100);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('.' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(180);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(139);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == '@') ADVANCE(143);
      if (lookahead == 'e') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('.' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(180);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(139);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == '@') ADVANCE(143);
      if (lookahead == 'e') ADVANCE(165);
      if (lookahead == 'i') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('.' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(180);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(139);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == '@') ADVANCE(143);
      if (lookahead == 'i') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('.' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(180);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(139);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == '@') ADVANCE(143);
      if (lookahead == 'i') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(104);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('.' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(180);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(139);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == '@') ADVANCE(143);
      if (lookahead == 'i') ADVANCE(130);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('.' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(180);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(139);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == '@') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('.' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(180);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(139);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == '@') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(107);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('.' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(180);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(140);
      if (lookahead == '-') ADVANCE(140);
      if (lookahead == '/') ADVANCE(176);
      if (lookahead == '@') ADVANCE(143);
      if (lookahead == 'e') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(98);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('.' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(180);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(140);
      if (lookahead == '-') ADVANCE(140);
      if (lookahead == '/') ADVANCE(177);
      if (lookahead == '@') ADVANCE(143);
      if (lookahead == 'e') ADVANCE(109);
      if (lookahead == 'i') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(100);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('.' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(180);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(16);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '/') ADVANCE(64);
      if (lookahead == '@') ADVANCE(19);
      if (lookahead == 'e') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(16);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == '@') ADVANCE(19);
      if (lookahead == 'e') ADVANCE(111);
      if (lookahead == 'i') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(87);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(120);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == 'e') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(116);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'e') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(119);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(180);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == 'e') ADVANCE(114);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(116);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == 'e') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(116);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == 'e') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'e') ADVANCE(117);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(119);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('.' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(180);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'e') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(119);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(180);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == 'e') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(119);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(180);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'e') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'e') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(180);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'n') ADVANCE(154);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(180);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'n') ADVANCE(155);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(180);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(180);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(128);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(129);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(180);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(180);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '!') ADVANCE(4);
      if (lookahead == ';') ADVANCE(190);
      if (lookahead == 'f') ADVANCE(79);
      if (lookahead == 't') ADVANCE(77);
      if (lookahead == 'u') ADVANCE(28);
      if (lookahead == '|') ADVANCE(73);
      if (lookahead == 'e' ||
          lookahead == 'i') ADVANCE(8);
      if (lookahead == 'b' ||
          lookahead == 'd' ||
          lookahead == 'o' ||
          lookahead == 'x') ADVANCE(9);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_bytevector);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(153);
      if (lookahead == '/') ADVANCE(178);
      if (lookahead == 'e') ADVANCE(144);
      if (lookahead == 'i') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(146);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(180);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(180);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(169);
      if (lookahead == 'i') ADVANCE(122);
      if (lookahead == 'n') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(100);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(180);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(149);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(180);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(171);
      if (lookahead == 'i') ADVANCE(124);
      if (lookahead == 'n') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(146);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(180);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(171);
      if (lookahead == 'i') ADVANCE(124);
      if (lookahead == 'n') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(146);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(180);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(180);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(172);
      if (lookahead == 'i') ADVANCE(163);
      if (lookahead == 'n') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(119);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(180);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(172);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(119);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('/' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(180);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '/') ADVANCE(178);
      if (lookahead == 'e') ADVANCE(144);
      if (lookahead == 'i') ADVANCE(130);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(146);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('.' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(180);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '/') ADVANCE(178);
      if (lookahead == 'e') ADVANCE(144);
      if (lookahead == 'i') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(146);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(180);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '/') ADVANCE(178);
      if (lookahead == 'e') ADVANCE(144);
      if (lookahead == 'i') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(146);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(180);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '0') ADVANCE(130);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(180);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '0') ADVANCE(105);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(180);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '0') ADVANCE(159);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(180);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'a') ADVANCE(160);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(180);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'a') ADVANCE(161);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(180);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'a') ADVANCE(162);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(180);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'e') ADVANCE(166);
      if (lookahead == 'i') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(180);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'f') ADVANCE(136);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(180);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'f') ADVANCE(138);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(180);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'f') ADVANCE(141);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(180);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'i') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(180);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'i') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(158);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(180);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'i') ADVANCE(130);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(180);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'n') ADVANCE(136);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(180);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'n') ADVANCE(138);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(180);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'n') ADVANCE(141);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(180);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'n') ADVANCE(156);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(180);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('.' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(180);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('.' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(180);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('.' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(180);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('.' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(180);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(180);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(180);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(180);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(180);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(180);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(180);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(180);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(180);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(107);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(180);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(104);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(180);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(158);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(180);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(129);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(180);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(180);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_list_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(185);
      if (aux_sym_list_token1_character_set_1(lookahead)) ADVANCE(186);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_list_token1);
      if (sym_bytevector_character_set_1(lookahead)) ADVANCE(186);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(190);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '|') ADVANCE(73);
      if (lookahead == '|') ADVANCE(71);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_directive);
      if (lookahead == '\n') ADVANCE(193);
      if (lookahead == '!') ADVANCE(3);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_directive);
      if (lookahead != 0 &&
          lookahead != '!') ADVANCE(72);
      if (lookahead == '!') ADVANCE(70);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_boolean_token1] = ACTIONS(1),
    [aux_sym_boolean_token2] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [aux_sym_character_token1] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_bytevector] = ACTIONS(1),
    [aux_sym_symbol_token1] = ACTIONS(1),
    [aux_sym_symbol_token2] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_directive] = ACTIONS(3),
  },
  [1] = {
    [sym_source] = STATE(20),
    [sym__sexp] = STATE(7),
    [sym__atom] = STATE(7),
    [sym_boolean] = STATE(7),
    [sym_character] = STATE(7),
    [sym_symbol] = STATE(7),
    [sym_list] = STATE(7),
    [aux_sym_source_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_boolean_token1] = ACTIONS(7),
    [aux_sym_boolean_token2] = ACTIONS(7),
    [sym_number] = ACTIONS(9),
    [anon_sym_POUND] = ACTIONS(11),
    [sym_string] = ACTIONS(13),
    [sym_bytevector] = ACTIONS(13),
    [aux_sym_symbol_token1] = ACTIONS(15),
    [aux_sym_symbol_token2] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
    [sym_directive] = ACTIONS(3),
  },
  [2] = {
    [sym__sexp] = STATE(4),
    [sym__atom] = STATE(4),
    [sym_boolean] = STATE(4),
    [sym_character] = STATE(4),
    [sym_symbol] = STATE(4),
    [sym_list] = STATE(4),
    [aux_sym_list_repeat1] = STATE(4),
    [aux_sym_boolean_token1] = ACTIONS(21),
    [aux_sym_boolean_token2] = ACTIONS(21),
    [sym_number] = ACTIONS(23),
    [anon_sym_POUND] = ACTIONS(25),
    [sym_string] = ACTIONS(23),
    [sym_bytevector] = ACTIONS(23),
    [aux_sym_symbol_token1] = ACTIONS(27),
    [aux_sym_symbol_token2] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(29),
    [aux_sym_list_token1] = ACTIONS(31),
    [anon_sym_RPAREN] = ACTIONS(33),
    [anon_sym_RBRACK] = ACTIONS(33),
    [anon_sym_RBRACE] = ACTIONS(33),
    [sym_comment] = ACTIONS(35),
    [sym_directive] = ACTIONS(35),
  },
  [3] = {
    [sym__sexp] = STATE(2),
    [sym__atom] = STATE(2),
    [sym_boolean] = STATE(2),
    [sym_character] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym_list] = STATE(2),
    [aux_sym_list_repeat1] = STATE(2),
    [aux_sym_boolean_token1] = ACTIONS(21),
    [aux_sym_boolean_token2] = ACTIONS(21),
    [sym_number] = ACTIONS(37),
    [anon_sym_POUND] = ACTIONS(25),
    [sym_string] = ACTIONS(37),
    [sym_bytevector] = ACTIONS(37),
    [aux_sym_symbol_token1] = ACTIONS(27),
    [aux_sym_symbol_token2] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(29),
    [aux_sym_list_token1] = ACTIONS(39),
    [anon_sym_RPAREN] = ACTIONS(41),
    [anon_sym_RBRACK] = ACTIONS(41),
    [anon_sym_RBRACE] = ACTIONS(41),
    [sym_comment] = ACTIONS(35),
    [sym_directive] = ACTIONS(35),
  },
  [4] = {
    [sym__sexp] = STATE(4),
    [sym__atom] = STATE(4),
    [sym_boolean] = STATE(4),
    [sym_character] = STATE(4),
    [sym_symbol] = STATE(4),
    [sym_list] = STATE(4),
    [aux_sym_list_repeat1] = STATE(4),
    [aux_sym_boolean_token1] = ACTIONS(43),
    [aux_sym_boolean_token2] = ACTIONS(43),
    [sym_number] = ACTIONS(46),
    [anon_sym_POUND] = ACTIONS(49),
    [sym_string] = ACTIONS(46),
    [sym_bytevector] = ACTIONS(46),
    [aux_sym_symbol_token1] = ACTIONS(52),
    [aux_sym_symbol_token2] = ACTIONS(52),
    [anon_sym_LPAREN] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(55),
    [aux_sym_list_token1] = ACTIONS(58),
    [anon_sym_RPAREN] = ACTIONS(61),
    [anon_sym_RBRACK] = ACTIONS(61),
    [anon_sym_RBRACE] = ACTIONS(61),
    [sym_comment] = ACTIONS(35),
    [sym_directive] = ACTIONS(35),
  },
  [5] = {
    [sym__sexp] = STATE(6),
    [sym__atom] = STATE(6),
    [sym_boolean] = STATE(6),
    [sym_character] = STATE(6),
    [sym_symbol] = STATE(6),
    [sym_list] = STATE(6),
    [aux_sym_list_repeat1] = STATE(6),
    [aux_sym_boolean_token1] = ACTIONS(21),
    [aux_sym_boolean_token2] = ACTIONS(21),
    [sym_number] = ACTIONS(63),
    [anon_sym_POUND] = ACTIONS(25),
    [sym_string] = ACTIONS(63),
    [sym_bytevector] = ACTIONS(63),
    [aux_sym_symbol_token1] = ACTIONS(27),
    [aux_sym_symbol_token2] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(29),
    [aux_sym_list_token1] = ACTIONS(65),
    [anon_sym_RPAREN] = ACTIONS(67),
    [anon_sym_RBRACK] = ACTIONS(67),
    [anon_sym_RBRACE] = ACTIONS(67),
    [sym_comment] = ACTIONS(35),
    [sym_directive] = ACTIONS(35),
  },
  [6] = {
    [sym__sexp] = STATE(4),
    [sym__atom] = STATE(4),
    [sym_boolean] = STATE(4),
    [sym_character] = STATE(4),
    [sym_symbol] = STATE(4),
    [sym_list] = STATE(4),
    [aux_sym_list_repeat1] = STATE(4),
    [aux_sym_boolean_token1] = ACTIONS(21),
    [aux_sym_boolean_token2] = ACTIONS(21),
    [sym_number] = ACTIONS(23),
    [anon_sym_POUND] = ACTIONS(25),
    [sym_string] = ACTIONS(23),
    [sym_bytevector] = ACTIONS(23),
    [aux_sym_symbol_token1] = ACTIONS(27),
    [aux_sym_symbol_token2] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(29),
    [aux_sym_list_token1] = ACTIONS(31),
    [anon_sym_RPAREN] = ACTIONS(69),
    [anon_sym_RBRACK] = ACTIONS(69),
    [anon_sym_RBRACE] = ACTIONS(69),
    [sym_comment] = ACTIONS(35),
    [sym_directive] = ACTIONS(35),
  },
  [7] = {
    [sym__sexp] = STATE(8),
    [sym__atom] = STATE(8),
    [sym_boolean] = STATE(8),
    [sym_character] = STATE(8),
    [sym_symbol] = STATE(8),
    [sym_list] = STATE(8),
    [aux_sym_source_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(71),
    [aux_sym_boolean_token1] = ACTIONS(7),
    [aux_sym_boolean_token2] = ACTIONS(7),
    [sym_number] = ACTIONS(73),
    [anon_sym_POUND] = ACTIONS(11),
    [sym_string] = ACTIONS(75),
    [sym_bytevector] = ACTIONS(75),
    [aux_sym_symbol_token1] = ACTIONS(15),
    [aux_sym_symbol_token2] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
    [sym_directive] = ACTIONS(3),
  },
  [8] = {
    [sym__sexp] = STATE(8),
    [sym__atom] = STATE(8),
    [sym_boolean] = STATE(8),
    [sym_character] = STATE(8),
    [sym_symbol] = STATE(8),
    [sym_list] = STATE(8),
    [aux_sym_source_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(77),
    [aux_sym_boolean_token1] = ACTIONS(79),
    [aux_sym_boolean_token2] = ACTIONS(79),
    [sym_number] = ACTIONS(82),
    [anon_sym_POUND] = ACTIONS(85),
    [sym_string] = ACTIONS(88),
    [sym_bytevector] = ACTIONS(88),
    [aux_sym_symbol_token1] = ACTIONS(91),
    [aux_sym_symbol_token2] = ACTIONS(94),
    [anon_sym_LPAREN] = ACTIONS(97),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_LBRACE] = ACTIONS(97),
    [sym_comment] = ACTIONS(3),
    [sym_directive] = ACTIONS(3),
  },
  [9] = {
    [aux_sym_boolean_token1] = ACTIONS(100),
    [aux_sym_boolean_token2] = ACTIONS(100),
    [sym_number] = ACTIONS(100),
    [anon_sym_POUND] = ACTIONS(100),
    [sym_string] = ACTIONS(100),
    [sym_bytevector] = ACTIONS(100),
    [aux_sym_symbol_token1] = ACTIONS(100),
    [aux_sym_symbol_token2] = ACTIONS(100),
    [anon_sym_LPAREN] = ACTIONS(100),
    [anon_sym_LBRACK] = ACTIONS(100),
    [anon_sym_LBRACE] = ACTIONS(100),
    [aux_sym_list_token1] = ACTIONS(102),
    [anon_sym_RPAREN] = ACTIONS(100),
    [anon_sym_RBRACK] = ACTIONS(100),
    [anon_sym_RBRACE] = ACTIONS(100),
    [sym_comment] = ACTIONS(35),
    [sym_directive] = ACTIONS(35),
  },
  [10] = {
    [aux_sym_boolean_token1] = ACTIONS(104),
    [aux_sym_boolean_token2] = ACTIONS(104),
    [sym_number] = ACTIONS(104),
    [anon_sym_POUND] = ACTIONS(104),
    [sym_string] = ACTIONS(104),
    [sym_bytevector] = ACTIONS(104),
    [aux_sym_symbol_token1] = ACTIONS(104),
    [aux_sym_symbol_token2] = ACTIONS(104),
    [anon_sym_LPAREN] = ACTIONS(104),
    [anon_sym_LBRACK] = ACTIONS(104),
    [anon_sym_LBRACE] = ACTIONS(104),
    [aux_sym_list_token1] = ACTIONS(106),
    [anon_sym_RPAREN] = ACTIONS(104),
    [anon_sym_RBRACK] = ACTIONS(104),
    [anon_sym_RBRACE] = ACTIONS(104),
    [sym_comment] = ACTIONS(35),
    [sym_directive] = ACTIONS(35),
  },
  [11] = {
    [aux_sym_boolean_token1] = ACTIONS(108),
    [aux_sym_boolean_token2] = ACTIONS(108),
    [sym_number] = ACTIONS(108),
    [anon_sym_POUND] = ACTIONS(108),
    [sym_string] = ACTIONS(108),
    [sym_bytevector] = ACTIONS(108),
    [aux_sym_symbol_token1] = ACTIONS(108),
    [aux_sym_symbol_token2] = ACTIONS(108),
    [anon_sym_LPAREN] = ACTIONS(108),
    [anon_sym_LBRACK] = ACTIONS(108),
    [anon_sym_LBRACE] = ACTIONS(108),
    [aux_sym_list_token1] = ACTIONS(110),
    [anon_sym_RPAREN] = ACTIONS(108),
    [anon_sym_RBRACK] = ACTIONS(108),
    [anon_sym_RBRACE] = ACTIONS(108),
    [sym_comment] = ACTIONS(35),
    [sym_directive] = ACTIONS(35),
  },
  [12] = {
    [aux_sym_boolean_token1] = ACTIONS(112),
    [aux_sym_boolean_token2] = ACTIONS(112),
    [sym_number] = ACTIONS(112),
    [anon_sym_POUND] = ACTIONS(112),
    [sym_string] = ACTIONS(112),
    [sym_bytevector] = ACTIONS(112),
    [aux_sym_symbol_token1] = ACTIONS(112),
    [aux_sym_symbol_token2] = ACTIONS(112),
    [anon_sym_LPAREN] = ACTIONS(112),
    [anon_sym_LBRACK] = ACTIONS(112),
    [anon_sym_LBRACE] = ACTIONS(112),
    [aux_sym_list_token1] = ACTIONS(114),
    [anon_sym_RPAREN] = ACTIONS(112),
    [anon_sym_RBRACK] = ACTIONS(112),
    [anon_sym_RBRACE] = ACTIONS(112),
    [sym_comment] = ACTIONS(35),
    [sym_directive] = ACTIONS(35),
  },
  [13] = {
    [aux_sym_boolean_token1] = ACTIONS(116),
    [aux_sym_boolean_token2] = ACTIONS(116),
    [sym_number] = ACTIONS(116),
    [anon_sym_POUND] = ACTIONS(116),
    [sym_string] = ACTIONS(116),
    [sym_bytevector] = ACTIONS(116),
    [aux_sym_symbol_token1] = ACTIONS(116),
    [aux_sym_symbol_token2] = ACTIONS(116),
    [anon_sym_LPAREN] = ACTIONS(116),
    [anon_sym_LBRACK] = ACTIONS(116),
    [anon_sym_LBRACE] = ACTIONS(116),
    [aux_sym_list_token1] = ACTIONS(118),
    [anon_sym_RPAREN] = ACTIONS(116),
    [anon_sym_RBRACK] = ACTIONS(116),
    [anon_sym_RBRACE] = ACTIONS(116),
    [sym_comment] = ACTIONS(35),
    [sym_directive] = ACTIONS(35),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_directive,
    ACTIONS(104), 3,
      sym_number,
      anon_sym_POUND,
      aux_sym_symbol_token1,
    ACTIONS(106), 9,
      ts_builtin_sym_end,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      sym_string,
      sym_bytevector,
      aux_sym_symbol_token2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
  [21] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_directive,
    ACTIONS(108), 3,
      sym_number,
      anon_sym_POUND,
      aux_sym_symbol_token1,
    ACTIONS(110), 9,
      ts_builtin_sym_end,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      sym_string,
      sym_bytevector,
      aux_sym_symbol_token2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
  [42] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_directive,
    ACTIONS(112), 3,
      sym_number,
      anon_sym_POUND,
      aux_sym_symbol_token1,
    ACTIONS(114), 9,
      ts_builtin_sym_end,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      sym_string,
      sym_bytevector,
      aux_sym_symbol_token2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
  [63] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_directive,
    ACTIONS(100), 3,
      sym_number,
      anon_sym_POUND,
      aux_sym_symbol_token1,
    ACTIONS(102), 9,
      ts_builtin_sym_end,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      sym_string,
      sym_bytevector,
      aux_sym_symbol_token2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
  [84] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_directive,
    ACTIONS(116), 3,
      sym_number,
      anon_sym_POUND,
      aux_sym_symbol_token1,
    ACTIONS(118), 9,
      ts_builtin_sym_end,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      sym_string,
      sym_bytevector,
      aux_sym_symbol_token2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
  [105] = 2,
    ACTIONS(120), 1,
      aux_sym_character_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym_directive,
  [113] = 2,
    ACTIONS(122), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_directive,
  [121] = 2,
    ACTIONS(124), 1,
      aux_sym_character_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym_directive,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(14)] = 0,
  [SMALL_STATE(15)] = 21,
  [SMALL_STATE(16)] = 42,
  [SMALL_STATE(17)] = 63,
  [SMALL_STATE(18)] = 84,
  [SMALL_STATE(19)] = 105,
  [SMALL_STATE(20)] = 113,
  [SMALL_STATE(21)] = 121,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(9),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(4),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(21),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(10),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(5),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(4),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(17),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(8),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(19),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(8),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(14),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(14),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(3),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 1),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character, 2),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character, 2),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [122] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_scheme(void) {
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
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif

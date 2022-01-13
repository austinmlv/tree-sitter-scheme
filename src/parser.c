#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 13
#define LARGE_STATE_COUNT 11
#define SYMBOL_COUNT 25
#define ALIAS_COUNT 0
#define TOKEN_COUNT 17
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  sym_string = 1,
  sym_number = 2,
  anon_sym_POUND = 3,
  aux_sym_character_token1 = 4,
  aux_sym_boolean_token1 = 5,
  aux_sym_boolean_token2 = 6,
  aux_sym_symbol_token1 = 7,
  aux_sym_symbol_token2 = 8,
  anon_sym_LPAREN = 9,
  anon_sym_LBRACK = 10,
  anon_sym_LBRACE = 11,
  anon_sym_RPAREN = 12,
  anon_sym_RBRACK = 13,
  anon_sym_RBRACE = 14,
  sym_comment = 15,
  sym_directive = 16,
  sym_source = 17,
  sym__sexp = 18,
  sym__atom = 19,
  sym_character = 20,
  sym_boolean = 21,
  sym_symbol = 22,
  sym_list = 23,
  aux_sym_source_repeat1 = 24,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_string] = "string",
  [sym_number] = "number",
  [anon_sym_POUND] = "#",
  [aux_sym_character_token1] = "character_token1",
  [aux_sym_boolean_token1] = "boolean_token1",
  [aux_sym_boolean_token2] = "boolean_token2",
  [aux_sym_symbol_token1] = "symbol_token1",
  [aux_sym_symbol_token2] = "symbol_token2",
  [anon_sym_LPAREN] = "(",
  [anon_sym_LBRACK] = "[",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RPAREN] = ")",
  [anon_sym_RBRACK] = "]",
  [anon_sym_RBRACE] = "}",
  [sym_comment] = "comment",
  [sym_directive] = "directive",
  [sym_source] = "source",
  [sym__sexp] = "_sexp",
  [sym__atom] = "_atom",
  [sym_character] = "character",
  [sym_boolean] = "boolean",
  [sym_symbol] = "symbol",
  [sym_list] = "list",
  [aux_sym_source_repeat1] = "source_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_string] = sym_string,
  [sym_number] = sym_number,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_character_token1] = aux_sym_character_token1,
  [aux_sym_boolean_token1] = aux_sym_boolean_token1,
  [aux_sym_boolean_token2] = aux_sym_boolean_token2,
  [aux_sym_symbol_token1] = aux_sym_symbol_token1,
  [aux_sym_symbol_token2] = aux_sym_symbol_token2,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_comment] = sym_comment,
  [sym_directive] = sym_directive,
  [sym_source] = sym_source,
  [sym__sexp] = sym__sexp,
  [sym__atom] = sym__atom,
  [sym_character] = sym_character,
  [sym_boolean] = sym_boolean,
  [sym_symbol] = sym_symbol,
  [sym_list] = sym_list,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
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
  [aux_sym_boolean_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_boolean_token2] = {
    .visible = false,
    .named = false,
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
  [sym_character] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
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
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(67);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(120);
      if (lookahead == '(') ADVANCE(173);
      if (lookahead == ')') ADVANCE(176);
      if (lookahead == '+') ADVANCE(128);
      if (lookahead == '-') ADVANCE(128);
      if (lookahead == '.') ADVANCE(159);
      if (lookahead == ';') ADVANCE(179);
      if (lookahead == '[') ADVANCE(174);
      if (lookahead == '\\') ADVANCE(60);
      if (lookahead == ']') ADVANCE(177);
      if (lookahead == '{') ADVANCE(175);
      if (lookahead == '|') ADVANCE(66);
      if (lookahead == '}') ADVANCE(178);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(87);
      if (('!' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('/' <= lookahead && lookahead <= '_') ||
          ('g' <= lookahead && lookahead <= '~')) ADVANCE(171);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(182);
      if (lookahead == '!') ADVANCE(1);
      if (lookahead == '#') ADVANCE(181);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(182);
      if (lookahead == '!') ADVANCE(1);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(68);
      if (lookahead == '\\') ADVANCE(63);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(47);
      if (lookahead == '+') ADVANCE(15);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '.') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(46);
      if (lookahead == '+') ADVANCE(15);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '.') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      END_STATE();
    case 6:
      if (lookahead == '+') ADVANCE(15);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '.') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == '/') ADVANCE(57);
      if (lookahead == 'e') ADVANCE(16);
      if (lookahead == 'i') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(18);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(20);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(49);
      if (lookahead == 'i') ADVANCE(112);
      if (lookahead == 'n') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(18);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(49);
      if (lookahead == 'i') ADVANCE(112);
      if (lookahead == 'n') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(18);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(21);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == 'i') ADVANCE(38);
      if (lookahead == 'n') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(105);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(105);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(19);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(52);
      if (lookahead == 'i') ADVANCE(114);
      if (lookahead == 'n') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(57);
      if (lookahead == 'e') ADVANCE(16);
      if (lookahead == 'i') ADVANCE(69);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(18);
      END_STATE();
    case 17:
      if (lookahead == '/') ADVANCE(57);
      if (lookahead == 'e') ADVANCE(16);
      if (lookahead == 'i') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == '/') ADVANCE(57);
      if (lookahead == 'e') ADVANCE(16);
      if (lookahead == 'i') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '0') ADVANCE(69);
      END_STATE();
    case 20:
      if (lookahead == '0') ADVANCE(31);
      END_STATE();
    case 21:
      if (lookahead == '0') ADVANCE(79);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(35);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(43);
      if (lookahead == 'i') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == 'f') ADVANCE(8);
      END_STATE();
    case 29:
      if (lookahead == 'f') ADVANCE(11);
      END_STATE();
    case 30:
      if (lookahead == 'f') ADVANCE(14);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 35:
      if (lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 39:
      if (lookahead == 's') ADVANCE(26);
      END_STATE();
    case 40:
      if (lookahead == 'u') ADVANCE(25);
      END_STATE();
    case 41:
      if (lookahead == '|') ADVANCE(172);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 42:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      END_STATE();
    case 43:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 44:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      END_STATE();
    case 45:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 46:
      if (lookahead == 'e' ||
          lookahead == 'i') ADVANCE(6);
      END_STATE();
    case 47:
      if (lookahead == 'b' ||
          lookahead == 'd' ||
          lookahead == 'o' ||
          lookahead == 'x') ADVANCE(6);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(33);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(117);
      END_STATE();
    case 59:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      END_STATE();
    case 60:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(121);
      END_STATE();
    case 61:
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '#') ADVANCE(64);
      if (lookahead == '!') ADVANCE(61);
      if (lookahead == '#') ADVANCE(182);
      END_STATE();
    case 62:
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '|') ADVANCE(65);
      if (lookahead == '#') ADVANCE(180);
      if (lookahead == '|') ADVANCE(62);
      END_STATE();
    case 63:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 64:
      if (lookahead != 0 &&
          lookahead != '!') ADVANCE(64);
      if (lookahead == '!') ADVANCE(61);
      END_STATE();
    case 65:
      if (lookahead != 0 &&
          lookahead != '|') ADVANCE(65);
      if (lookahead == '|') ADVANCE(62);
      END_STATE();
    case 66:
      if (lookahead != 0 &&
          lookahead != '|') ADVANCE(41);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(9);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == '/') ADVANCE(56);
      if (lookahead == '@') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(9);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == '/') ADVANCE(57);
      if (lookahead == '@') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(16);
      if (lookahead == 'i') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(18);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(9);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '.') ADVANCE(78);
      if (lookahead == '/') ADVANCE(59);
      if (lookahead == '@') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(100);
      if (lookahead == 'i') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(9);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '/') ADVANCE(56);
      if (lookahead == '@') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(9);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '/') ADVANCE(56);
      if (lookahead == '@') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(9);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '/') ADVANCE(59);
      if (lookahead == '@') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(100);
      if (lookahead == 'i') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(9);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '/') ADVANCE(59);
      if (lookahead == '@') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(100);
      if (lookahead == 'i') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(9);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '@') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(9);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '@') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(45);
      if (lookahead == 'i') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(9);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '@') ADVANCE(13);
      if (lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(9);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '@') ADVANCE(13);
      if (lookahead == 'i') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(9);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '@') ADVANCE(13);
      if (lookahead == 'i') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(9);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '@') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(9);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '@') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(130);
      if (lookahead == '-') ADVANCE(130);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == '/') ADVANCE(168);
      if (lookahead == '@') ADVANCE(134);
      if (lookahead == 'e') ADVANCE(98);
      if (lookahead == 'i') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(89);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == ':' ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(171);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(130);
      if (lookahead == '-') ADVANCE(130);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == '/') ADVANCE(169);
      if (lookahead == '@') ADVANCE(134);
      if (lookahead == 'e') ADVANCE(135);
      if (lookahead == 'i') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(137);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == ':' ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(171);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(130);
      if (lookahead == '-') ADVANCE(130);
      if (lookahead == '/') ADVANCE(167);
      if (lookahead == '@') ADVANCE(134);
      if (lookahead == 'e') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(87);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('.' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(171);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(130);
      if (lookahead == '-') ADVANCE(130);
      if (lookahead == '/') ADVANCE(167);
      if (lookahead == '@') ADVANCE(134);
      if (lookahead == 'e') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(87);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('.' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(171);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(130);
      if (lookahead == '-') ADVANCE(130);
      if (lookahead == '/') ADVANCE(168);
      if (lookahead == '@') ADVANCE(134);
      if (lookahead == 'e') ADVANCE(98);
      if (lookahead == 'i') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(89);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('.' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(171);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(130);
      if (lookahead == '-') ADVANCE(130);
      if (lookahead == '/') ADVANCE(168);
      if (lookahead == '@') ADVANCE(134);
      if (lookahead == 'e') ADVANCE(98);
      if (lookahead == 'i') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(89);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('.' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(171);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(130);
      if (lookahead == '-') ADVANCE(130);
      if (lookahead == '@') ADVANCE(134);
      if (lookahead == 'e') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('.' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(171);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(130);
      if (lookahead == '-') ADVANCE(130);
      if (lookahead == '@') ADVANCE(134);
      if (lookahead == 'e') ADVANCE(156);
      if (lookahead == 'i') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('.' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(171);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(130);
      if (lookahead == '-') ADVANCE(130);
      if (lookahead == '@') ADVANCE(134);
      if (lookahead == 'i') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('.' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(171);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(130);
      if (lookahead == '-') ADVANCE(130);
      if (lookahead == '@') ADVANCE(134);
      if (lookahead == 'i') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(93);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('.' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(171);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(130);
      if (lookahead == '-') ADVANCE(130);
      if (lookahead == '@') ADVANCE(134);
      if (lookahead == 'i') ADVANCE(119);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('.' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(171);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(130);
      if (lookahead == '-') ADVANCE(130);
      if (lookahead == '@') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('.' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(171);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(130);
      if (lookahead == '-') ADVANCE(130);
      if (lookahead == '@') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(96);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('.' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(171);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(131);
      if (lookahead == '-') ADVANCE(131);
      if (lookahead == '/') ADVANCE(167);
      if (lookahead == '@') ADVANCE(134);
      if (lookahead == 'e') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(87);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('.' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(171);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(131);
      if (lookahead == '-') ADVANCE(131);
      if (lookahead == '/') ADVANCE(168);
      if (lookahead == '@') ADVANCE(134);
      if (lookahead == 'e') ADVANCE(98);
      if (lookahead == 'i') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(89);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('.' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(171);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(10);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '/') ADVANCE(56);
      if (lookahead == '@') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(10);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '/') ADVANCE(59);
      if (lookahead == '@') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(100);
      if (lookahead == 'i') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(109);
      if (lookahead == '/') ADVANCE(58);
      if (lookahead == 'e') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(105);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(110);
      if (lookahead == '/') ADVANCE(170);
      if (lookahead == 'e') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(108);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(171);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '/') ADVANCE(58);
      if (lookahead == 'e') ADVANCE(103);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(105);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '/') ADVANCE(58);
      if (lookahead == 'e') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(105);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '/') ADVANCE(58);
      if (lookahead == 'e') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '/') ADVANCE(170);
      if (lookahead == 'e') ADVANCE(106);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(108);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('.' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(171);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '/') ADVANCE(170);
      if (lookahead == 'e') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(108);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(171);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '/') ADVANCE(170);
      if (lookahead == 'e') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(108);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(171);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'e') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'e') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(171);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'n') ADVANCE(145);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(171);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'n') ADVANCE(146);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(171);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(171);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(118);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(171);
      END_STATE();
    case 119:
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
          lookahead == '~') ADVANCE(171);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '!') ADVANCE(2);
      if (lookahead == ';') ADVANCE(179);
      if (lookahead == 'f') ADVANCE(125);
      if (lookahead == 't') ADVANCE(123);
      if (lookahead == '|') ADVANCE(65);
      if (lookahead == 'e' ||
          lookahead == 'i') ADVANCE(4);
      if (lookahead == 'b' ||
          lookahead == 'd' ||
          lookahead == 'o' ||
          lookahead == 'x') ADVANCE(5);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_boolean_token1);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_boolean_token1);
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_boolean_token2);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_boolean_token2);
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == '/') ADVANCE(169);
      if (lookahead == 'e') ADVANCE(135);
      if (lookahead == 'i') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(137);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(171);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(139);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(171);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(160);
      if (lookahead == 'i') ADVANCE(111);
      if (lookahead == 'n') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(89);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(171);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(140);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(171);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(162);
      if (lookahead == 'i') ADVANCE(113);
      if (lookahead == 'n') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(137);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(171);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(162);
      if (lookahead == 'i') ADVANCE(113);
      if (lookahead == 'n') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(137);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(171);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(171);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(163);
      if (lookahead == 'i') ADVANCE(154);
      if (lookahead == 'n') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(108);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(171);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(163);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(108);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('/' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(171);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '/') ADVANCE(169);
      if (lookahead == 'e') ADVANCE(135);
      if (lookahead == 'i') ADVANCE(119);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(137);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('.' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(171);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '/') ADVANCE(169);
      if (lookahead == 'e') ADVANCE(135);
      if (lookahead == 'i') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(137);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(171);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '/') ADVANCE(169);
      if (lookahead == 'e') ADVANCE(135);
      if (lookahead == 'i') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(137);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(171);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '0') ADVANCE(119);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(171);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '0') ADVANCE(94);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(171);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '0') ADVANCE(150);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(171);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'a') ADVANCE(151);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(171);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'a') ADVANCE(152);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(171);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'a') ADVANCE(153);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(171);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'e') ADVANCE(157);
      if (lookahead == 'i') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(171);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'f') ADVANCE(127);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(171);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'f') ADVANCE(129);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(171);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'f') ADVANCE(132);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(171);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'i') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(171);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'i') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(149);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(171);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'i') ADVANCE(119);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(171);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'n') ADVANCE(127);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(171);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'n') ADVANCE(129);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(171);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'n') ADVANCE(132);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(171);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'n') ADVANCE(147);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(171);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('.' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(171);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('.' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(171);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('.' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(171);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('.' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(171);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(171);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(171);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(171);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(171);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(171);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(171);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(171);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(171);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(96);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(171);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(93);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(171);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(149);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(171);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(118);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(171);
      END_STATE();
    case 171:
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
          lookahead == '~') ADVANCE(171);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(179);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '|') ADVANCE(65);
      if (lookahead == '|') ADVANCE(62);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_directive);
      if (lookahead == '\n') ADVANCE(182);
      if (lookahead == '!') ADVANCE(1);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_directive);
      if (lookahead != 0 &&
          lookahead != '!') ADVANCE(64);
      if (lookahead == '!') ADVANCE(61);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [aux_sym_character_token1] = ACTIONS(1),
    [aux_sym_boolean_token1] = ACTIONS(1),
    [aux_sym_boolean_token2] = ACTIONS(1),
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
    [sym_source] = STATE(12),
    [sym__sexp] = STATE(5),
    [sym__atom] = STATE(5),
    [sym_character] = STATE(5),
    [sym_boolean] = STATE(5),
    [sym_symbol] = STATE(5),
    [sym_list] = STATE(5),
    [aux_sym_source_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_string] = ACTIONS(7),
    [sym_number] = ACTIONS(9),
    [anon_sym_POUND] = ACTIONS(11),
    [aux_sym_boolean_token1] = ACTIONS(13),
    [aux_sym_boolean_token2] = ACTIONS(13),
    [aux_sym_symbol_token1] = ACTIONS(15),
    [aux_sym_symbol_token2] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
    [sym_directive] = ACTIONS(3),
  },
  [2] = {
    [sym__sexp] = STATE(2),
    [sym__atom] = STATE(2),
    [sym_character] = STATE(2),
    [sym_boolean] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym_list] = STATE(2),
    [aux_sym_source_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(21),
    [sym_string] = ACTIONS(23),
    [sym_number] = ACTIONS(26),
    [anon_sym_POUND] = ACTIONS(29),
    [aux_sym_boolean_token1] = ACTIONS(32),
    [aux_sym_boolean_token2] = ACTIONS(32),
    [aux_sym_symbol_token1] = ACTIONS(35),
    [aux_sym_symbol_token2] = ACTIONS(38),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_RPAREN] = ACTIONS(21),
    [anon_sym_RBRACK] = ACTIONS(21),
    [anon_sym_RBRACE] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
    [sym_directive] = ACTIONS(3),
  },
  [3] = {
    [sym__sexp] = STATE(4),
    [sym__atom] = STATE(4),
    [sym_character] = STATE(4),
    [sym_boolean] = STATE(4),
    [sym_symbol] = STATE(4),
    [sym_list] = STATE(4),
    [aux_sym_source_repeat1] = STATE(4),
    [sym_string] = ACTIONS(44),
    [sym_number] = ACTIONS(46),
    [anon_sym_POUND] = ACTIONS(11),
    [aux_sym_boolean_token1] = ACTIONS(13),
    [aux_sym_boolean_token2] = ACTIONS(13),
    [aux_sym_symbol_token1] = ACTIONS(15),
    [aux_sym_symbol_token2] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(48),
    [anon_sym_RBRACK] = ACTIONS(48),
    [anon_sym_RBRACE] = ACTIONS(48),
    [sym_comment] = ACTIONS(3),
    [sym_directive] = ACTIONS(3),
  },
  [4] = {
    [sym__sexp] = STATE(2),
    [sym__atom] = STATE(2),
    [sym_character] = STATE(2),
    [sym_boolean] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym_list] = STATE(2),
    [aux_sym_source_repeat1] = STATE(2),
    [sym_string] = ACTIONS(50),
    [sym_number] = ACTIONS(52),
    [anon_sym_POUND] = ACTIONS(11),
    [aux_sym_boolean_token1] = ACTIONS(13),
    [aux_sym_boolean_token2] = ACTIONS(13),
    [aux_sym_symbol_token1] = ACTIONS(15),
    [aux_sym_symbol_token2] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(54),
    [anon_sym_RBRACK] = ACTIONS(54),
    [anon_sym_RBRACE] = ACTIONS(54),
    [sym_comment] = ACTIONS(3),
    [sym_directive] = ACTIONS(3),
  },
  [5] = {
    [sym__sexp] = STATE(2),
    [sym__atom] = STATE(2),
    [sym_character] = STATE(2),
    [sym_boolean] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym_list] = STATE(2),
    [aux_sym_source_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(56),
    [sym_string] = ACTIONS(50),
    [sym_number] = ACTIONS(52),
    [anon_sym_POUND] = ACTIONS(11),
    [aux_sym_boolean_token1] = ACTIONS(13),
    [aux_sym_boolean_token2] = ACTIONS(13),
    [aux_sym_symbol_token1] = ACTIONS(15),
    [aux_sym_symbol_token2] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
    [sym_directive] = ACTIONS(3),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(58),
    [sym_string] = ACTIONS(58),
    [sym_number] = ACTIONS(60),
    [anon_sym_POUND] = ACTIONS(60),
    [aux_sym_boolean_token1] = ACTIONS(58),
    [aux_sym_boolean_token2] = ACTIONS(58),
    [aux_sym_symbol_token1] = ACTIONS(60),
    [aux_sym_symbol_token2] = ACTIONS(58),
    [anon_sym_LPAREN] = ACTIONS(58),
    [anon_sym_LBRACK] = ACTIONS(58),
    [anon_sym_LBRACE] = ACTIONS(58),
    [anon_sym_RPAREN] = ACTIONS(58),
    [anon_sym_RBRACK] = ACTIONS(58),
    [anon_sym_RBRACE] = ACTIONS(58),
    [sym_comment] = ACTIONS(3),
    [sym_directive] = ACTIONS(3),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(62),
    [sym_string] = ACTIONS(62),
    [sym_number] = ACTIONS(64),
    [anon_sym_POUND] = ACTIONS(64),
    [aux_sym_boolean_token1] = ACTIONS(62),
    [aux_sym_boolean_token2] = ACTIONS(62),
    [aux_sym_symbol_token1] = ACTIONS(64),
    [aux_sym_symbol_token2] = ACTIONS(62),
    [anon_sym_LPAREN] = ACTIONS(62),
    [anon_sym_LBRACK] = ACTIONS(62),
    [anon_sym_LBRACE] = ACTIONS(62),
    [anon_sym_RPAREN] = ACTIONS(62),
    [anon_sym_RBRACK] = ACTIONS(62),
    [anon_sym_RBRACE] = ACTIONS(62),
    [sym_comment] = ACTIONS(3),
    [sym_directive] = ACTIONS(3),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(66),
    [sym_string] = ACTIONS(66),
    [sym_number] = ACTIONS(68),
    [anon_sym_POUND] = ACTIONS(68),
    [aux_sym_boolean_token1] = ACTIONS(66),
    [aux_sym_boolean_token2] = ACTIONS(66),
    [aux_sym_symbol_token1] = ACTIONS(68),
    [aux_sym_symbol_token2] = ACTIONS(66),
    [anon_sym_LPAREN] = ACTIONS(66),
    [anon_sym_LBRACK] = ACTIONS(66),
    [anon_sym_LBRACE] = ACTIONS(66),
    [anon_sym_RPAREN] = ACTIONS(66),
    [anon_sym_RBRACK] = ACTIONS(66),
    [anon_sym_RBRACE] = ACTIONS(66),
    [sym_comment] = ACTIONS(3),
    [sym_directive] = ACTIONS(3),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(70),
    [sym_string] = ACTIONS(70),
    [sym_number] = ACTIONS(72),
    [anon_sym_POUND] = ACTIONS(72),
    [aux_sym_boolean_token1] = ACTIONS(70),
    [aux_sym_boolean_token2] = ACTIONS(70),
    [aux_sym_symbol_token1] = ACTIONS(72),
    [aux_sym_symbol_token2] = ACTIONS(70),
    [anon_sym_LPAREN] = ACTIONS(70),
    [anon_sym_LBRACK] = ACTIONS(70),
    [anon_sym_LBRACE] = ACTIONS(70),
    [anon_sym_RPAREN] = ACTIONS(70),
    [anon_sym_RBRACK] = ACTIONS(70),
    [anon_sym_RBRACE] = ACTIONS(70),
    [sym_comment] = ACTIONS(3),
    [sym_directive] = ACTIONS(3),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(74),
    [sym_string] = ACTIONS(74),
    [sym_number] = ACTIONS(76),
    [anon_sym_POUND] = ACTIONS(76),
    [aux_sym_boolean_token1] = ACTIONS(74),
    [aux_sym_boolean_token2] = ACTIONS(74),
    [aux_sym_symbol_token1] = ACTIONS(76),
    [aux_sym_symbol_token2] = ACTIONS(74),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_LBRACK] = ACTIONS(74),
    [anon_sym_LBRACE] = ACTIONS(74),
    [anon_sym_RPAREN] = ACTIONS(74),
    [anon_sym_RBRACK] = ACTIONS(74),
    [anon_sym_RBRACE] = ACTIONS(74),
    [sym_comment] = ACTIONS(3),
    [sym_directive] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(78), 1,
      aux_sym_character_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym_directive,
  [8] = 2,
    ACTIONS(80), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_directive,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(11)] = 0,
  [SMALL_STATE(12)] = 8,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(2),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(2),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(11),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(6),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(7),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(7),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(3),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character, 2),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character, 2),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [80] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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

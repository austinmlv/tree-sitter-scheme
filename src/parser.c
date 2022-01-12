#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 12
#define LARGE_STATE_COUNT 10
#define SYMBOL_COUNT 17
#define ALIAS_COUNT 0
#define TOKEN_COUNT 10
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
  anon_sym_LPAREN = 7,
  anon_sym_RPAREN = 8,
  sym_comment = 9,
  sym_source = 10,
  sym__sexp = 11,
  sym__atom = 12,
  sym_character = 13,
  sym_boolean = 14,
  sym_list = 15,
  aux_sym_source_repeat1 = 16,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_string] = "string",
  [sym_number] = "number",
  [anon_sym_POUND] = "#",
  [aux_sym_character_token1] = "character_token1",
  [aux_sym_boolean_token1] = "boolean_token1",
  [aux_sym_boolean_token2] = "boolean_token2",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_comment] = "comment",
  [sym_source] = "source",
  [sym__sexp] = "_sexp",
  [sym__atom] = "_atom",
  [sym_character] = "character",
  [sym_boolean] = "boolean",
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
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_comment] = sym_comment,
  [sym_source] = sym_source,
  [sym__sexp] = sym__sexp,
  [sym__atom] = sym__atom,
  [sym_character] = sym_character,
  [sym_boolean] = sym_boolean,
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
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
      if (eof) ADVANCE(61);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '(') ADVANCE(95);
      if (lookahead == ')') ADVANCE(96);
      if (lookahead == '+') ADVANCE(7);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == ';') ADVANCE(97);
      if (lookahead == '\\') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(62);
      if (lookahead == '\\') ADVANCE(59);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(44);
      if (lookahead == '+') ADVANCE(7);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '.') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(43);
      if (lookahead == '+') ADVANCE(7);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '.') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      END_STATE();
    case 4:
      if (lookahead == '+') ADVANCE(7);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '.') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '/') ADVANCE(55);
      if (lookahead == 'e') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(18);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(46);
      if (lookahead == 'i') ADVANCE(85);
      if (lookahead == 'n') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(70);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(19);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'i') ADVANCE(86);
      if (lookahead == 'n') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'i') ADVANCE(86);
      if (lookahead == 'n') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(17);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(49);
      if (lookahead == 'i') ADVANCE(36);
      if (lookahead == 'n') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(49);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(55);
      if (lookahead == 'e') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(63);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(55);
      if (lookahead == 'e') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(55);
      if (lookahead == 'e') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '0') ADVANCE(63);
      END_STATE();
    case 18:
      if (lookahead == '0') ADVANCE(73);
      END_STATE();
    case 19:
      if (lookahead == '0') ADVANCE(29);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(33);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(35);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(41);
      if (lookahead == 'i') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == 'f') ADVANCE(6);
      END_STATE();
    case 27:
      if (lookahead == 'f') ADVANCE(8);
      END_STATE();
    case 28:
      if (lookahead == 'f') ADVANCE(11);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 33:
      if (lookahead == 'n') ADVANCE(6);
      END_STATE();
    case 34:
      if (lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 35:
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 37:
      if (lookahead == 's') ADVANCE(24);
      END_STATE();
    case 38:
      if (lookahead == 'u') ADVANCE(23);
      END_STATE();
    case 39:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 40:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 41:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 42:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      END_STATE();
    case 43:
      if (lookahead == 'e' ||
          lookahead == 'i') ADVANCE(4);
      END_STATE();
    case 44:
      if (lookahead == 'b' ||
          lookahead == 'd' ||
          lookahead == 'o' ||
          lookahead == 'x') ADVANCE(4);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(77);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(75);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(31);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(88);
      END_STATE();
    case 57:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(90);
      END_STATE();
    case 58:
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '|') ADVANCE(60);
      if (lookahead == '#') ADVANCE(98);
      if (lookahead == '|') ADVANCE(58);
      END_STATE();
    case 59:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 60:
      if (lookahead != 0 &&
          lookahead != '|') ADVANCE(60);
      if (lookahead == '|') ADVANCE(58);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(9);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '.') ADVANCE(71);
      if (lookahead == '/') ADVANCE(53);
      if (lookahead == '@') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(9);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == '/') ADVANCE(54);
      if (lookahead == '@') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(79);
      if (lookahead == 'i') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(70);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(9);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '/') ADVANCE(55);
      if (lookahead == '@') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(9);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '/') ADVANCE(53);
      if (lookahead == '@') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(9);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '/') ADVANCE(53);
      if (lookahead == '@') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(9);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '/') ADVANCE(54);
      if (lookahead == '@') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(79);
      if (lookahead == 'i') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(70);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(9);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '/') ADVANCE(54);
      if (lookahead == '@') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(79);
      if (lookahead == 'i') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(9);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '@') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(9);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '@') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(40);
      if (lookahead == 'i') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(9);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '@') ADVANCE(13);
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(9);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '@') ADVANCE(13);
      if (lookahead == 'i') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(9);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '@') ADVANCE(13);
      if (lookahead == 'i') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(9);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '@') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(9);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '@') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(10);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '/') ADVANCE(53);
      if (lookahead == '@') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(10);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '/') ADVANCE(54);
      if (lookahead == '@') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(79);
      if (lookahead == 'i') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(70);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(84);
      if (lookahead == '/') ADVANCE(56);
      if (lookahead == 'e') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '/') ADVANCE(56);
      if (lookahead == 'e') ADVANCE(81);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '/') ADVANCE(56);
      if (lookahead == 'e') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '/') ADVANCE(56);
      if (lookahead == 'e') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'e') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == ';') ADVANCE(97);
      if (lookahead == 'f') ADVANCE(94);
      if (lookahead == 't') ADVANCE(92);
      if (lookahead == '|') ADVANCE(60);
      if (lookahead == 'e' ||
          lookahead == 'i') ADVANCE(2);
      if (lookahead == 'b' ||
          lookahead == 'd' ||
          lookahead == 'o' ||
          lookahead == 'x') ADVANCE(3);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_boolean_token1);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_boolean_token1);
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_boolean_token2);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_boolean_token2);
      if (lookahead == 'a') ADVANCE(32);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '|') ADVANCE(60);
      if (lookahead == '|') ADVANCE(58);
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
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source] = STATE(11),
    [sym__sexp] = STATE(4),
    [sym__atom] = STATE(4),
    [sym_character] = STATE(4),
    [sym_boolean] = STATE(4),
    [sym_list] = STATE(4),
    [aux_sym_source_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_string] = ACTIONS(7),
    [sym_number] = ACTIONS(7),
    [anon_sym_POUND] = ACTIONS(9),
    [aux_sym_boolean_token1] = ACTIONS(11),
    [aux_sym_boolean_token2] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym__sexp] = STATE(2),
    [sym__atom] = STATE(2),
    [sym_character] = STATE(2),
    [sym_boolean] = STATE(2),
    [sym_list] = STATE(2),
    [aux_sym_source_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(15),
    [sym_string] = ACTIONS(17),
    [sym_number] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(20),
    [aux_sym_boolean_token1] = ACTIONS(23),
    [aux_sym_boolean_token2] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_RPAREN] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym__sexp] = STATE(5),
    [sym__atom] = STATE(5),
    [sym_character] = STATE(5),
    [sym_boolean] = STATE(5),
    [sym_list] = STATE(5),
    [aux_sym_source_repeat1] = STATE(5),
    [sym_string] = ACTIONS(29),
    [sym_number] = ACTIONS(29),
    [anon_sym_POUND] = ACTIONS(9),
    [aux_sym_boolean_token1] = ACTIONS(11),
    [aux_sym_boolean_token2] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_RPAREN] = ACTIONS(31),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym__sexp] = STATE(2),
    [sym__atom] = STATE(2),
    [sym_character] = STATE(2),
    [sym_boolean] = STATE(2),
    [sym_list] = STATE(2),
    [aux_sym_source_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(33),
    [sym_string] = ACTIONS(35),
    [sym_number] = ACTIONS(35),
    [anon_sym_POUND] = ACTIONS(9),
    [aux_sym_boolean_token1] = ACTIONS(11),
    [aux_sym_boolean_token2] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym__sexp] = STATE(2),
    [sym__atom] = STATE(2),
    [sym_character] = STATE(2),
    [sym_boolean] = STATE(2),
    [sym_list] = STATE(2),
    [aux_sym_source_repeat1] = STATE(2),
    [sym_string] = ACTIONS(35),
    [sym_number] = ACTIONS(35),
    [anon_sym_POUND] = ACTIONS(9),
    [aux_sym_boolean_token1] = ACTIONS(11),
    [aux_sym_boolean_token2] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_RPAREN] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(39),
    [sym_string] = ACTIONS(39),
    [sym_number] = ACTIONS(39),
    [anon_sym_POUND] = ACTIONS(41),
    [aux_sym_boolean_token1] = ACTIONS(39),
    [aux_sym_boolean_token2] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_RPAREN] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(43),
    [sym_string] = ACTIONS(43),
    [sym_number] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [aux_sym_boolean_token1] = ACTIONS(43),
    [aux_sym_boolean_token2] = ACTIONS(43),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_RPAREN] = ACTIONS(43),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(47),
    [sym_string] = ACTIONS(47),
    [sym_number] = ACTIONS(47),
    [anon_sym_POUND] = ACTIONS(49),
    [aux_sym_boolean_token1] = ACTIONS(47),
    [aux_sym_boolean_token2] = ACTIONS(47),
    [anon_sym_LPAREN] = ACTIONS(47),
    [anon_sym_RPAREN] = ACTIONS(47),
    [sym_comment] = ACTIONS(3),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(51),
    [sym_string] = ACTIONS(51),
    [sym_number] = ACTIONS(51),
    [anon_sym_POUND] = ACTIONS(53),
    [aux_sym_boolean_token1] = ACTIONS(51),
    [aux_sym_boolean_token2] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_RPAREN] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      aux_sym_character_token1,
  [7] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(10)] = 0,
  [SMALL_STATE(11)] = 7,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(2),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(10),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(6),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(3),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character, 2),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character, 2),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [57] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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

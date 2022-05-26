#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 36
#define LARGE_STATE_COUNT 33
#define SYMBOL_COUNT 39
#define ALIAS_COUNT 0
#define TOKEN_COUNT 27
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 3

enum {
  aux_sym_boolean_token1 = 1,
  aux_sym_boolean_token2 = 2,
  aux_sym_number_token1 = 3,
  aux_sym_number_token2 = 4,
  aux_sym_number_token3 = 5,
  aux_sym_number_token4 = 6,
  anon_sym_POUND = 7,
  aux_sym_character_token1 = 8,
  sym_string = 9,
  sym_bytevector = 10,
  aux_sym_symbol_token1 = 11,
  aux_sym_symbol_token2 = 12,
  anon_sym_POUND_LPAREN = 13,
  aux_sym_vector_token1 = 14,
  anon_sym_RPAREN = 15,
  anon_sym_LPAREN = 16,
  anon_sym_LBRACK = 17,
  anon_sym_LBRACE = 18,
  anon_sym_RBRACK = 19,
  anon_sym_RBRACE = 20,
  anon_sym_SQUOTE = 21,
  anon_sym_BQUOTE = 22,
  anon_sym_COMMA = 23,
  anon_sym_COMMA_AT = 24,
  sym_comment = 25,
  sym_directive = 26,
  sym_source = 27,
  sym__sexp = 28,
  sym__atom = 29,
  sym_boolean = 30,
  sym_number = 31,
  sym_character = 32,
  sym_symbol = 33,
  sym_vector = 34,
  sym_list = 35,
  sym_abbreviation = 36,
  aux_sym_source_repeat1 = 37,
  aux_sym_vector_repeat1 = 38,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_boolean_token1] = "boolean_token1",
  [aux_sym_boolean_token2] = "boolean_token2",
  [aux_sym_number_token1] = "number_token1",
  [aux_sym_number_token2] = "number_token2",
  [aux_sym_number_token3] = "number_token3",
  [aux_sym_number_token4] = "number_token4",
  [anon_sym_POUND] = "#",
  [aux_sym_character_token1] = "character_token1",
  [sym_string] = "string",
  [sym_bytevector] = "bytevector",
  [aux_sym_symbol_token1] = "symbol_token1",
  [aux_sym_symbol_token2] = "symbol_token2",
  [anon_sym_POUND_LPAREN] = "#(",
  [aux_sym_vector_token1] = "vector_token1",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LPAREN] = "(",
  [anon_sym_LBRACK] = "[",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACK] = "]",
  [anon_sym_RBRACE] = "}",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_BQUOTE] = "`",
  [anon_sym_COMMA] = ",",
  [anon_sym_COMMA_AT] = ",@",
  [sym_comment] = "comment",
  [sym_directive] = "directive",
  [sym_source] = "source",
  [sym__sexp] = "_sexp",
  [sym__atom] = "_atom",
  [sym_boolean] = "boolean",
  [sym_number] = "number",
  [sym_character] = "character",
  [sym_symbol] = "symbol",
  [sym_vector] = "vector",
  [sym_list] = "list",
  [sym_abbreviation] = "abbreviation",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym_vector_repeat1] = "vector_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_boolean_token1] = aux_sym_boolean_token1,
  [aux_sym_boolean_token2] = aux_sym_boolean_token2,
  [aux_sym_number_token1] = aux_sym_number_token1,
  [aux_sym_number_token2] = aux_sym_number_token2,
  [aux_sym_number_token3] = aux_sym_number_token3,
  [aux_sym_number_token4] = aux_sym_number_token4,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_character_token1] = aux_sym_character_token1,
  [sym_string] = sym_string,
  [sym_bytevector] = sym_bytevector,
  [aux_sym_symbol_token1] = aux_sym_symbol_token1,
  [aux_sym_symbol_token2] = aux_sym_symbol_token2,
  [anon_sym_POUND_LPAREN] = anon_sym_POUND_LPAREN,
  [aux_sym_vector_token1] = aux_sym_vector_token1,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_COMMA_AT] = anon_sym_COMMA_AT,
  [sym_comment] = sym_comment,
  [sym_directive] = sym_directive,
  [sym_source] = sym_source,
  [sym__sexp] = sym__sexp,
  [sym__atom] = sym__atom,
  [sym_boolean] = sym_boolean,
  [sym_number] = sym_number,
  [sym_character] = sym_character,
  [sym_symbol] = sym_symbol,
  [sym_vector] = sym_vector,
  [sym_list] = sym_list,
  [sym_abbreviation] = sym_abbreviation,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym_vector_repeat1] = aux_sym_vector_repeat1,
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
  [aux_sym_number_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_token4] = {
    .visible = false,
    .named = false,
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
  [anon_sym_POUND_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_vector_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
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
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA_AT] = {
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
  [sym_number] = {
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
  [sym_vector] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym_abbreviation] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_vector_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_close = 1,
  field_open = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_close] = "close",
  [field_open] = "open",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_close, 1},
    {field_open, 0},
  [2] =
    {field_close, 2},
    {field_open, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(204);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '#') ADVANCE(298);
      if (lookahead == '\'') ADVANCE(349);
      if (lookahead == '(') ADVANCE(344);
      if (lookahead == ')') ADVANCE(343);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(304);
      if (lookahead == ',') ADVANCE(351);
      if (lookahead == '.') ADVANCE(330);
      if (lookahead == ';') ADVANCE(354);
      if (lookahead == '[') ADVANCE(345);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == ']') ADVANCE(347);
      if (lookahead == '`') ADVANCE(350);
      if (lookahead == '{') ADVANCE(346);
      if (lookahead == '|') ADVANCE(203);
      if (lookahead == '}') ADVANCE(348);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(248);
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(338);
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
      if (lookahead == 'x') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(357);
      if (lookahead == '!') ADVANCE(3);
      if (lookahead == '#') ADVANCE(356);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(357);
      if (lookahead == '!') ADVANCE(3);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '#') ADVANCE(298);
      if (lookahead == '\'') ADVANCE(349);
      if (lookahead == '(') ADVANCE(344);
      if (lookahead == ')') ADVANCE(343);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(304);
      if (lookahead == ',') ADVANCE(352);
      if (lookahead == '.') ADVANCE(330);
      if (lookahead == ';') ADVANCE(354);
      if (lookahead == '[') ADVANCE(345);
      if (lookahead == ']') ADVANCE(347);
      if (lookahead == '`') ADVANCE(350);
      if (lookahead == '{') ADVANCE(346);
      if (lookahead == '|') ADVANCE(203);
      if (lookahead == '}') ADVANCE(348);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(248);
      if (('!' <= lookahead && lookahead <= 'Z') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(338);
      if (lookahead == 11 ||
          lookahead == '\f' ||
          (28 <= lookahead && lookahead <= 31) ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8198) ||
          (8200 <= lookahead && lookahead <= 8202) ||
          lookahead == 8232 ||
          lookahead == 8233 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(342);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(300);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(6);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(300);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(149);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(31);
      if (lookahead == '.') ADVANCE(163);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(210);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(211);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(79);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(33);
      if (lookahead == '.') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(248);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(150);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(33);
      if (lookahead == '.') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(248);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(151);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(35);
      if (lookahead == '.') ADVANCE(164);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(229);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(152);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(36);
      if (lookahead == '.') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(277);
      END_STATE();
    case 13:
      if (lookahead == '(') ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == ')') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (sym_bytevector_character_set_1(lookahead)) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(82);
      if (lookahead == '/') ADVANCE(174);
      if (lookahead == 'e') ADVANCE(134);
      if (lookahead == 'i') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(57);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(83);
      if (lookahead == '/') ADVANCE(155);
      if (lookahead == 'e') ADVANCE(142);
      if (lookahead == 'i') ADVANCE(209);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(17);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(83);
      if (lookahead == 'e') ADVANCE(142);
      if (lookahead == 'i') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(58);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(84);
      if (lookahead == '/') ADVANCE(159);
      if (lookahead == 'e') ADVANCE(144);
      if (lookahead == 'i') ADVANCE(228);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '.') ADVANCE(84);
      if (lookahead == 'e') ADVANCE(144);
      if (lookahead == 'i') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '.') ADVANCE(59);
      END_STATE();
    case 23:
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead == 'e') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 24:
      if (lookahead == '.') ADVANCE(60);
      END_STATE();
    case 25:
      if (lookahead == '.') ADVANCE(61);
      END_STATE();
    case 26:
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 'i') ADVANCE(266);
      if (lookahead == 'n') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 27:
      if (lookahead == '.') ADVANCE(53);
      END_STATE();
    case 28:
      if (lookahead == '.') ADVANCE(167);
      if (lookahead == 'i') ADVANCE(122);
      if (lookahead == 'n') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      END_STATE();
    case 29:
      if (lookahead == '.') ADVANCE(167);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      END_STATE();
    case 30:
      if (lookahead == '.') ADVANCE(54);
      END_STATE();
    case 31:
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == 'i') ADVANCE(224);
      if (lookahead == 'n') ADVANCE(68);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(212);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(213);
      END_STATE();
    case 32:
      if (lookahead == '.') ADVANCE(55);
      END_STATE();
    case 33:
      if (lookahead == '.') ADVANCE(170);
      if (lookahead == 'i') ADVANCE(268);
      if (lookahead == 'n') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(249);
      END_STATE();
    case 34:
      if (lookahead == '.') ADVANCE(56);
      END_STATE();
    case 35:
      if (lookahead == '.') ADVANCE(171);
      if (lookahead == 'i') ADVANCE(243);
      if (lookahead == 'n') ADVANCE(70);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(231);
      END_STATE();
    case 36:
      if (lookahead == '.') ADVANCE(173);
      if (lookahead == 'i') ADVANCE(294);
      if (lookahead == 'n') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(274);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(279);
      END_STATE();
    case 37:
      if (lookahead == '.') ADVANCE(187);
      if (lookahead == 'i') ADVANCE(225);
      if (lookahead == 'n') ADVANCE(76);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(17);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 38:
      if (lookahead == '.') ADVANCE(177);
      if (lookahead == 'i') ADVANCE(123);
      if (lookahead == 'n') ADVANCE(73);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(221);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(222);
      END_STATE();
    case 39:
      if (lookahead == '.') ADVANCE(177);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(38);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(221);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(222);
      END_STATE();
    case 40:
      if (lookahead == '.') ADVANCE(189);
      if (lookahead == 'i') ADVANCE(244);
      if (lookahead == 'n') ADVANCE(77);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(20);
      END_STATE();
    case 41:
      if (lookahead == '.') ADVANCE(180);
      if (lookahead == 'i') ADVANCE(124);
      if (lookahead == 'n') ADVANCE(74);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(240);
      END_STATE();
    case 42:
      if (lookahead == '.') ADVANCE(180);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(41);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(240);
      END_STATE();
    case 43:
      if (lookahead == '.') ADVANCE(191);
      if (lookahead == 'i') ADVANCE(295);
      if (lookahead == 'n') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 44:
      if (lookahead == '.') ADVANCE(191);
      if (lookahead == 'i') ADVANCE(295);
      if (lookahead == 'n') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 45:
      if (lookahead == '.') ADVANCE(182);
      if (lookahead == 'i') ADVANCE(125);
      if (lookahead == 'n') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(289);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(292);
      END_STATE();
    case 46:
      if (lookahead == '.') ADVANCE(182);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(289);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(292);
      END_STATE();
    case 47:
      if (lookahead == '.') ADVANCE(62);
      END_STATE();
    case 48:
      if (lookahead == '.') ADVANCE(63);
      END_STATE();
    case 49:
      if (lookahead == '.') ADVANCE(64);
      END_STATE();
    case 50:
      if (lookahead == '/') ADVANCE(196);
      if (lookahead == 'i') ADVANCE(272);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 51:
      if (lookahead == '/') ADVANCE(196);
      if (lookahead == 'i') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 52:
      if (lookahead == '/') ADVANCE(196);
      if (lookahead == 'i') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 53:
      if (lookahead == '0') ADVANCE(247);
      END_STATE();
    case 54:
      if (lookahead == '0') ADVANCE(209);
      END_STATE();
    case 55:
      if (lookahead == '0') ADVANCE(228);
      END_STATE();
    case 56:
      if (lookahead == '0') ADVANCE(272);
      END_STATE();
    case 57:
      if (lookahead == '0') ADVANCE(98);
      END_STATE();
    case 58:
      if (lookahead == '0') ADVANCE(216);
      END_STATE();
    case 59:
      if (lookahead == '0') ADVANCE(252);
      END_STATE();
    case 60:
      if (lookahead == '0') ADVANCE(235);
      END_STATE();
    case 61:
      if (lookahead == '0') ADVANCE(282);
      END_STATE();
    case 62:
      if (lookahead == '0') ADVANCE(100);
      END_STATE();
    case 63:
      if (lookahead == '0') ADVANCE(103);
      END_STATE();
    case 64:
      if (lookahead == '0') ADVANCE(106);
      END_STATE();
    case 65:
      if (lookahead == '8') ADVANCE(13);
      END_STATE();
    case 66:
      if (lookahead == ';') ADVANCE(7);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(110);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(111);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(112);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(113);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(114);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(115);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(116);
      END_STATE();
    case 74:
      if (lookahead == 'a') ADVANCE(117);
      END_STATE();
    case 75:
      if (lookahead == 'a') ADVANCE(118);
      END_STATE();
    case 76:
      if (lookahead == 'a') ADVANCE(119);
      END_STATE();
    case 77:
      if (lookahead == 'a') ADVANCE(120);
      END_STATE();
    case 78:
      if (lookahead == 'a') ADVANCE(121);
      END_STATE();
    case 79:
      if (lookahead == 'b') ADVANCE(130);
      if (lookahead == 'd') ADVANCE(133);
      if (lookahead == 'o') ADVANCE(131);
      if (lookahead == 'x') ADVANCE(132);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(207);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(134);
      if (lookahead == 'i') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(142);
      if (lookahead == 'i') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(144);
      if (lookahead == 'i') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(147);
      if (lookahead == 'i') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      END_STATE();
    case 86:
      if (lookahead == 'f') ADVANCE(16);
      END_STATE();
    case 87:
      if (lookahead == 'f') ADVANCE(19);
      END_STATE();
    case 88:
      if (lookahead == 'f') ADVANCE(22);
      END_STATE();
    case 89:
      if (lookahead == 'f') ADVANCE(24);
      END_STATE();
    case 90:
      if (lookahead == 'f') ADVANCE(25);
      END_STATE();
    case 91:
      if (lookahead == 'f') ADVANCE(27);
      END_STATE();
    case 92:
      if (lookahead == 'f') ADVANCE(30);
      END_STATE();
    case 93:
      if (lookahead == 'f') ADVANCE(32);
      END_STATE();
    case 94:
      if (lookahead == 'f') ADVANCE(34);
      END_STATE();
    case 95:
      if (lookahead == 'f') ADVANCE(47);
      END_STATE();
    case 96:
      if (lookahead == 'f') ADVANCE(48);
      END_STATE();
    case 97:
      if (lookahead == 'f') ADVANCE(49);
      END_STATE();
    case 98:
      if (lookahead == 'i') ADVANCE(247);
      END_STATE();
    case 99:
      if (lookahead == 'i') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      END_STATE();
    case 100:
      if (lookahead == 'i') ADVANCE(209);
      END_STATE();
    case 101:
      if (lookahead == 'i') ADVANCE(209);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(101);
      END_STATE();
    case 102:
      if (lookahead == 'i') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      END_STATE();
    case 103:
      if (lookahead == 'i') ADVANCE(228);
      END_STATE();
    case 104:
      if (lookahead == 'i') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(104);
      END_STATE();
    case 105:
      if (lookahead == 'i') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      END_STATE();
    case 106:
      if (lookahead == 'i') ADVANCE(272);
      END_STATE();
    case 107:
      if (lookahead == 'i') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      END_STATE();
    case 108:
      if (lookahead == 'i') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(108);
      END_STATE();
    case 109:
      if (lookahead == 'l') ADVANCE(126);
      END_STATE();
    case 110:
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 111:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 112:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 113:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 114:
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 115:
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 116:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 117:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 118:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 119:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 120:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 121:
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 122:
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 123:
      if (lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 124:
      if (lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 125:
      if (lookahead == 'n') ADVANCE(94);
      END_STATE();
    case 126:
      if (lookahead == 's') ADVANCE(81);
      END_STATE();
    case 127:
      if (lookahead == 'u') ADVANCE(80);
      END_STATE();
    case 128:
      if (lookahead == '|') ADVANCE(339);
      if (lookahead != 0) ADVANCE(128);
      END_STATE();
    case 129:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(254);
      END_STATE();
    case 130:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(31);
      if (lookahead == '.') ADVANCE(163);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(210);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(211);
      END_STATE();
    case 131:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(35);
      if (lookahead == '.') ADVANCE(164);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(229);
      END_STATE();
    case 132:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(36);
      if (lookahead == '.') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(277);
      END_STATE();
    case 133:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(33);
      if (lookahead == '.') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(248);
      END_STATE();
    case 134:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      END_STATE();
    case 135:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      END_STATE();
    case 136:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(220);
      END_STATE();
    case 137:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(253);
      END_STATE();
    case 138:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(239);
      END_STATE();
    case 139:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      END_STATE();
    case 140:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      END_STATE();
    case 141:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(285);
      END_STATE();
    case 142:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      END_STATE();
    case 143:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(227);
      END_STATE();
    case 144:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      END_STATE();
    case 145:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(246);
      END_STATE();
    case 146:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      END_STATE();
    case 147:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      END_STATE();
    case 148:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(296);
      END_STATE();
    case 149:
      if (lookahead == 'e' ||
          lookahead == 'i') ADVANCE(130);
      END_STATE();
    case 150:
      if (lookahead == 'e' ||
          lookahead == 'i') ADVANCE(133);
      END_STATE();
    case 151:
      if (lookahead == 'e' ||
          lookahead == 'i') ADVANCE(131);
      END_STATE();
    case 152:
      if (lookahead == 'e' ||
          lookahead == 'i') ADVANCE(132);
      END_STATE();
    case 153:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(219);
      END_STATE();
    case 154:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(217);
      END_STATE();
    case 155:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(101);
      END_STATE();
    case 156:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(226);
      END_STATE();
    case 157:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(238);
      END_STATE();
    case 158:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(236);
      END_STATE();
    case 159:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(104);
      END_STATE();
    case 160:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(245);
      END_STATE();
    case 161:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(250);
      END_STATE();
    case 162:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(254);
      END_STATE();
    case 163:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(214);
      END_STATE();
    case 164:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(233);
      END_STATE();
    case 165:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(280);
      END_STATE();
    case 166:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      END_STATE();
    case 167:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(264);
      END_STATE();
    case 168:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(215);
      END_STATE();
    case 169:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(220);
      END_STATE();
    case 170:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(251);
      END_STATE();
    case 171:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(234);
      END_STATE();
    case 172:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(239);
      END_STATE();
    case 173:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      END_STATE();
    case 174:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      END_STATE();
    case 175:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      END_STATE();
    case 176:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      END_STATE();
    case 177:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(223);
      END_STATE();
    case 178:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(253);
      END_STATE();
    case 179:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      END_STATE();
    case 180:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(242);
      END_STATE();
    case 181:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(285);
      END_STATE();
    case 182:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(293);
      END_STATE();
    case 183:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(227);
      END_STATE();
    case 184:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(246);
      END_STATE();
    case 185:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      END_STATE();
    case 186:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(296);
      END_STATE();
    case 187:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 188:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      END_STATE();
    case 189:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    case 190:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      END_STATE();
    case 191:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      END_STATE();
    case 192:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      END_STATE();
    case 193:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      END_STATE();
    case 194:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(286);
      END_STATE();
    case 195:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(284);
      END_STATE();
    case 196:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(108);
      END_STATE();
    case 197:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(297);
      END_STATE();
    case 198:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(299);
      END_STATE();
    case 199:
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '#') ADVANCE(201);
      if (lookahead == '!') ADVANCE(199);
      if (lookahead == '#') ADVANCE(357);
      END_STATE();
    case 200:
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '|') ADVANCE(202);
      if (lookahead == '#') ADVANCE(355);
      if (lookahead == '|') ADVANCE(200);
      END_STATE();
    case 201:
      if (lookahead != 0 &&
          lookahead != '!') ADVANCE(201);
      if (lookahead == '!') ADVANCE(199);
      END_STATE();
    case 202:
      if (lookahead != 0 &&
          lookahead != '|') ADVANCE(202);
      if (lookahead == '|') ADVANCE(200);
      END_STATE();
    case 203:
      if (lookahead != 0 &&
          lookahead != '|') ADVANCE(128);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_boolean_token1);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_boolean_token1);
      if (lookahead == 'r') ADVANCE(127);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_boolean_token2);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_boolean_token2);
      if (lookahead == 'a') ADVANCE(109);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_number_token1);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '+') ADVANCE(37);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '.') ADVANCE(214);
      if (lookahead == '/') ADVANCE(153);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == 'e') ADVANCE(136);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(210);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(211);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '+') ADVANCE(37);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '.') ADVANCE(214);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == 'e') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(211);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '+') ADVANCE(37);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '.') ADVANCE(215);
      if (lookahead == '/') ADVANCE(154);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == 'e') ADVANCE(139);
      if (lookahead == 'i') ADVANCE(209);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(212);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(213);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '+') ADVANCE(37);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '.') ADVANCE(215);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == 'e') ADVANCE(139);
      if (lookahead == 'i') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(213);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '+') ADVANCE(37);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == 'e') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(214);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '+') ADVANCE(37);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == 'e') ADVANCE(139);
      if (lookahead == 'i') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(215);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '+') ADVANCE(37);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == 'i') ADVANCE(209);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '+') ADVANCE(37);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == 'i') ADVANCE(209);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(217);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '+') ADVANCE(37);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == 'i') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '+') ADVANCE(37);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(219);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '+') ADVANCE(37);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '@') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(220);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(223);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == 'e') ADVANCE(143);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(221);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(222);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(223);
      if (lookahead == 'e') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(222);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == 'e') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(223);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(226);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(227);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_number_token2);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '+') ADVANCE(40);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '.') ADVANCE(233);
      if (lookahead == '/') ADVANCE(157);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == 'e') ADVANCE(138);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(229);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '+') ADVANCE(40);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '.') ADVANCE(233);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == 'e') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(230);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '+') ADVANCE(40);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == '/') ADVANCE(158);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == 'e') ADVANCE(140);
      if (lookahead == 'i') ADVANCE(228);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(231);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '+') ADVANCE(40);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == 'e') ADVANCE(140);
      if (lookahead == 'i') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(232);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '+') ADVANCE(40);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == 'e') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(233);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '+') ADVANCE(40);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == 'e') ADVANCE(140);
      if (lookahead == 'i') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(234);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '+') ADVANCE(40);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == 'i') ADVANCE(228);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '+') ADVANCE(40);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == 'i') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(236);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '+') ADVANCE(40);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == 'i') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '+') ADVANCE(40);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '@') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(238);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '+') ADVANCE(40);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '@') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(239);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '.') ADVANCE(242);
      if (lookahead == '/') ADVANCE(160);
      if (lookahead == 'e') ADVANCE(145);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(240);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '.') ADVANCE(242);
      if (lookahead == 'e') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(241);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == 'e') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(242);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == 'n') ADVANCE(89);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(245);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(246);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_number_token3);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (lookahead == '+') ADVANCE(26);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == '.') ADVANCE(250);
      if (lookahead == '/') ADVANCE(162);
      if (lookahead == '@') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(248);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (lookahead == '+') ADVANCE(26);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == '.') ADVANCE(251);
      if (lookahead == '/') ADVANCE(178);
      if (lookahead == '@') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(137);
      if (lookahead == 'i') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(249);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (lookahead == '+') ADVANCE(26);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == '@') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(250);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (lookahead == '+') ADVANCE(26);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == '@') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(137);
      if (lookahead == 'i') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(251);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (lookahead == '+') ADVANCE(26);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == '@') ADVANCE(29);
      if (lookahead == 'i') ADVANCE(247);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (lookahead == '+') ADVANCE(26);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == '@') ADVANCE(29);
      if (lookahead == 'i') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(253);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (lookahead == '+') ADVANCE(26);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == '@') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(254);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (lookahead == '+') ADVANCE(307);
      if (lookahead == '-') ADVANCE(307);
      if (lookahead == '.') ADVANCE(256);
      if (lookahead == '/') ADVANCE(332);
      if (lookahead == '@') ADVANCE(309);
      if (lookahead == 'e') ADVANCE(326);
      if (lookahead == 'i') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(255);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == ':' ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(338);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (lookahead == '+') ADVANCE(307);
      if (lookahead == '-') ADVANCE(307);
      if (lookahead == '@') ADVANCE(309);
      if (lookahead == 'e') ADVANCE(326);
      if (lookahead == 'i') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(256);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('.' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(338);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (lookahead == '+') ADVANCE(307);
      if (lookahead == '-') ADVANCE(307);
      if (lookahead == '@') ADVANCE(309);
      if (lookahead == 'e') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(257);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('.' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(338);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (lookahead == '+') ADVANCE(307);
      if (lookahead == '-') ADVANCE(307);
      if (lookahead == '@') ADVANCE(309);
      if (lookahead == 'i') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(258);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('.' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(338);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (lookahead == '+') ADVANCE(307);
      if (lookahead == '-') ADVANCE(307);
      if (lookahead == '@') ADVANCE(309);
      if (lookahead == 'i') ADVANCE(271);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('.' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(338);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (lookahead == '+') ADVANCE(307);
      if (lookahead == '-') ADVANCE(307);
      if (lookahead == '@') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('.' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(338);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (lookahead == '.') ADVANCE(264);
      if (lookahead == '/') ADVANCE(175);
      if (lookahead == 'e') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (lookahead == '.') ADVANCE(263);
      if (lookahead == '/') ADVANCE(337);
      if (lookahead == 'e') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(338);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (lookahead == 'e') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(338);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (lookahead == 'e') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(264);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (lookahead == 'n') ADVANCE(317);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(338);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (lookahead == 'n') ADVANCE(318);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(338);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(338);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(338);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_number_token4);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (lookahead == '+') ADVANCE(43);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '.') ADVANCE(280);
      if (lookahead == '/') ADVANCE(194);
      if (lookahead == '@') ADVANCE(46);
      if (lookahead == 'e') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(277);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (lookahead == '+') ADVANCE(43);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '.') ADVANCE(281);
      if (lookahead == '/') ADVANCE(195);
      if (lookahead == '@') ADVANCE(46);
      if (lookahead == 'e') ADVANCE(288);
      if (lookahead == 'i') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(274);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(279);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (lookahead == '+') ADVANCE(43);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead == '@') ADVANCE(46);
      if (lookahead == 'e') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (lookahead == '+') ADVANCE(43);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '/') ADVANCE(194);
      if (lookahead == '@') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(277);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (lookahead == '+') ADVANCE(43);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '/') ADVANCE(194);
      if (lookahead == '@') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(277);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (lookahead == '+') ADVANCE(43);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '/') ADVANCE(195);
      if (lookahead == '@') ADVANCE(46);
      if (lookahead == 'i') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(279);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (lookahead == '+') ADVANCE(43);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '/') ADVANCE(195);
      if (lookahead == '@') ADVANCE(46);
      if (lookahead == 'i') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(279);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (lookahead == '+') ADVANCE(43);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '@') ADVANCE(46);
      if (lookahead == 'e') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(280);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (lookahead == '+') ADVANCE(43);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '@') ADVANCE(46);
      if (lookahead == 'e') ADVANCE(146);
      if (lookahead == 'i') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (lookahead == '+') ADVANCE(43);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '@') ADVANCE(46);
      if (lookahead == 'i') ADVANCE(272);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (lookahead == '+') ADVANCE(43);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '@') ADVANCE(46);
      if (lookahead == 'i') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (lookahead == '+') ADVANCE(43);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '@') ADVANCE(46);
      if (lookahead == 'i') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(284);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (lookahead == '+') ADVANCE(43);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '@') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(285);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (lookahead == '+') ADVANCE(43);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '@') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(286);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (lookahead == '+') ADVANCE(44);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == '/') ADVANCE(194);
      if (lookahead == '@') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(277);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (lookahead == '+') ADVANCE(44);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == '/') ADVANCE(195);
      if (lookahead == '@') ADVANCE(46);
      if (lookahead == 'i') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(279);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == '/') ADVANCE(197);
      if (lookahead == 'e') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(289);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(292);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (lookahead == '/') ADVANCE(197);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(291);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(292);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (lookahead == '/') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(291);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(292);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (lookahead == '/') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(292);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (lookahead == 'e') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(293);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (lookahead == 'n') ADVANCE(90);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (lookahead == 'n') ADVANCE(97);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(296);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(297);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '!') ADVANCE(4);
      if (lookahead == '(') ADVANCE(340);
      if (lookahead == ';') ADVANCE(354);
      if (lookahead == 'b') ADVANCE(8);
      if (lookahead == 'd') ADVANCE(10);
      if (lookahead == 'f') ADVANCE(208);
      if (lookahead == 'o') ADVANCE(11);
      if (lookahead == 't') ADVANCE(206);
      if (lookahead == 'u') ADVANCE(65);
      if (lookahead == 'x') ADVANCE(12);
      if (lookahead == '|') ADVANCE(202);
      if (lookahead == 'e' ||
          lookahead == 'i') ADVANCE(9);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(299);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_bytevector);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(311);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(338);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(316);
      if (lookahead == '/') ADVANCE(336);
      if (lookahead == 'e') ADVANCE(328);
      if (lookahead == 'i') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(303);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(338);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(331);
      if (lookahead == 'i') ADVANCE(265);
      if (lookahead == 'n') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(255);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(338);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(312);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(338);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(310);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(338);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(334);
      if (lookahead == 'i') ADVANCE(267);
      if (lookahead == 'n') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(303);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(338);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(335);
      if (lookahead == 'i') ADVANCE(325);
      if (lookahead == 'n') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(338);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(335);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('/' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(338);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '0') ADVANCE(271);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(338);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '0') ADVANCE(259);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(338);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '0') ADVANCE(321);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(338);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'a') ADVANCE(322);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(338);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'a') ADVANCE(323);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(338);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'a') ADVANCE(324);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(338);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'e') ADVANCE(328);
      if (lookahead == 'i') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(316);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(338);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'f') ADVANCE(302);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(338);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'f') ADVANCE(305);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(338);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'f') ADVANCE(306);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(338);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'i') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(320);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(338);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'i') ADVANCE(271);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(338);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'n') ADVANCE(302);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(338);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'n') ADVANCE(305);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(338);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'n') ADVANCE(306);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(338);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'n') ADVANCE(319);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(338);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(258);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('.' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(338);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('.' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(338);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(320);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('.' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(338);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('.' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(338);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(257);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(338);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(256);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(338);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(258);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(338);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(338);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(316);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(338);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(338);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(320);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(338);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(338);
      END_STATE();
    case 338:
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
          lookahead == '~') ADVANCE(338);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_POUND_LPAREN);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_vector_token1);
      if (lookahead == ',') ADVANCE(352);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(341);
      if (lookahead == 11 ||
          lookahead == '\f' ||
          (28 <= lookahead && lookahead <= 31) ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8198) ||
          (8200 <= lookahead && lookahead <= 8202) ||
          lookahead == 8232 ||
          lookahead == 8233 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(342);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_vector_token1);
      if (sym_bytevector_character_set_1(lookahead)) ADVANCE(342);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '@') ADVANCE(353);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '@') ADVANCE(353);
      if (sym_bytevector_character_set_1(lookahead)) ADVANCE(342);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_COMMA_AT);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(354);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '|') ADVANCE(202);
      if (lookahead == '|') ADVANCE(200);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_directive);
      if (lookahead == '\n') ADVANCE(357);
      if (lookahead == '!') ADVANCE(3);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_directive);
      if (lookahead != 0 &&
          lookahead != '!') ADVANCE(201);
      if (lookahead == '!') ADVANCE(199);
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
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_boolean_token1] = ACTIONS(1),
    [aux_sym_boolean_token2] = ACTIONS(1),
    [aux_sym_number_token1] = ACTIONS(1),
    [aux_sym_number_token2] = ACTIONS(1),
    [aux_sym_number_token3] = ACTIONS(1),
    [aux_sym_number_token4] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [aux_sym_character_token1] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_bytevector] = ACTIONS(1),
    [aux_sym_symbol_token1] = ACTIONS(1),
    [aux_sym_symbol_token2] = ACTIONS(1),
    [anon_sym_POUND_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_COMMA_AT] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_directive] = ACTIONS(3),
  },
  [1] = {
    [sym_source] = STATE(34),
    [sym__sexp] = STATE(11),
    [sym__atom] = STATE(11),
    [sym_boolean] = STATE(11),
    [sym_number] = STATE(11),
    [sym_character] = STATE(11),
    [sym_symbol] = STATE(11),
    [sym_vector] = STATE(11),
    [sym_list] = STATE(11),
    [sym_abbreviation] = STATE(11),
    [aux_sym_source_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_boolean_token1] = ACTIONS(7),
    [aux_sym_boolean_token2] = ACTIONS(7),
    [aux_sym_number_token1] = ACTIONS(9),
    [aux_sym_number_token2] = ACTIONS(9),
    [aux_sym_number_token3] = ACTIONS(11),
    [aux_sym_number_token4] = ACTIONS(9),
    [anon_sym_POUND] = ACTIONS(13),
    [sym_string] = ACTIONS(15),
    [sym_bytevector] = ACTIONS(15),
    [aux_sym_symbol_token1] = ACTIONS(17),
    [aux_sym_symbol_token2] = ACTIONS(19),
    [anon_sym_POUND_LPAREN] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_COMMA_AT] = ACTIONS(25),
    [sym_comment] = ACTIONS(3),
    [sym_directive] = ACTIONS(3),
  },
  [2] = {
    [sym__sexp] = STATE(6),
    [sym__atom] = STATE(6),
    [sym_boolean] = STATE(6),
    [sym_number] = STATE(6),
    [sym_character] = STATE(6),
    [sym_symbol] = STATE(6),
    [sym_vector] = STATE(6),
    [sym_list] = STATE(6),
    [sym_abbreviation] = STATE(6),
    [aux_sym_vector_repeat1] = STATE(6),
    [aux_sym_boolean_token1] = ACTIONS(29),
    [aux_sym_boolean_token2] = ACTIONS(29),
    [aux_sym_number_token1] = ACTIONS(31),
    [aux_sym_number_token2] = ACTIONS(31),
    [aux_sym_number_token3] = ACTIONS(31),
    [aux_sym_number_token4] = ACTIONS(31),
    [anon_sym_POUND] = ACTIONS(33),
    [sym_string] = ACTIONS(35),
    [sym_bytevector] = ACTIONS(35),
    [aux_sym_symbol_token1] = ACTIONS(37),
    [aux_sym_symbol_token2] = ACTIONS(37),
    [anon_sym_POUND_LPAREN] = ACTIONS(39),
    [aux_sym_vector_token1] = ACTIONS(35),
    [anon_sym_RPAREN] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_RBRACK] = ACTIONS(41),
    [anon_sym_RBRACE] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(45),
    [anon_sym_COMMA_AT] = ACTIONS(45),
    [sym_comment] = ACTIONS(47),
    [sym_directive] = ACTIONS(47),
  },
  [3] = {
    [sym__sexp] = STATE(4),
    [sym__atom] = STATE(4),
    [sym_boolean] = STATE(4),
    [sym_number] = STATE(4),
    [sym_character] = STATE(4),
    [sym_symbol] = STATE(4),
    [sym_vector] = STATE(4),
    [sym_list] = STATE(4),
    [sym_abbreviation] = STATE(4),
    [aux_sym_vector_repeat1] = STATE(4),
    [aux_sym_boolean_token1] = ACTIONS(29),
    [aux_sym_boolean_token2] = ACTIONS(29),
    [aux_sym_number_token1] = ACTIONS(31),
    [aux_sym_number_token2] = ACTIONS(31),
    [aux_sym_number_token3] = ACTIONS(31),
    [aux_sym_number_token4] = ACTIONS(31),
    [anon_sym_POUND] = ACTIONS(33),
    [sym_string] = ACTIONS(49),
    [sym_bytevector] = ACTIONS(49),
    [aux_sym_symbol_token1] = ACTIONS(37),
    [aux_sym_symbol_token2] = ACTIONS(37),
    [anon_sym_POUND_LPAREN] = ACTIONS(39),
    [aux_sym_vector_token1] = ACTIONS(49),
    [anon_sym_RPAREN] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_RBRACK] = ACTIONS(51),
    [anon_sym_RBRACE] = ACTIONS(51),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(45),
    [anon_sym_COMMA_AT] = ACTIONS(45),
    [sym_comment] = ACTIONS(47),
    [sym_directive] = ACTIONS(47),
  },
  [4] = {
    [sym__sexp] = STATE(4),
    [sym__atom] = STATE(4),
    [sym_boolean] = STATE(4),
    [sym_number] = STATE(4),
    [sym_character] = STATE(4),
    [sym_symbol] = STATE(4),
    [sym_vector] = STATE(4),
    [sym_list] = STATE(4),
    [sym_abbreviation] = STATE(4),
    [aux_sym_vector_repeat1] = STATE(4),
    [aux_sym_boolean_token1] = ACTIONS(53),
    [aux_sym_boolean_token2] = ACTIONS(53),
    [aux_sym_number_token1] = ACTIONS(56),
    [aux_sym_number_token2] = ACTIONS(56),
    [aux_sym_number_token3] = ACTIONS(56),
    [aux_sym_number_token4] = ACTIONS(56),
    [anon_sym_POUND] = ACTIONS(59),
    [sym_string] = ACTIONS(62),
    [sym_bytevector] = ACTIONS(62),
    [aux_sym_symbol_token1] = ACTIONS(65),
    [aux_sym_symbol_token2] = ACTIONS(65),
    [anon_sym_POUND_LPAREN] = ACTIONS(68),
    [aux_sym_vector_token1] = ACTIONS(62),
    [anon_sym_RPAREN] = ACTIONS(71),
    [anon_sym_LPAREN] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(73),
    [anon_sym_RBRACK] = ACTIONS(71),
    [anon_sym_RBRACE] = ACTIONS(71),
    [anon_sym_SQUOTE] = ACTIONS(76),
    [anon_sym_BQUOTE] = ACTIONS(76),
    [anon_sym_COMMA] = ACTIONS(76),
    [anon_sym_COMMA_AT] = ACTIONS(76),
    [sym_comment] = ACTIONS(47),
    [sym_directive] = ACTIONS(47),
  },
  [5] = {
    [sym__sexp] = STATE(3),
    [sym__atom] = STATE(3),
    [sym_boolean] = STATE(3),
    [sym_number] = STATE(3),
    [sym_character] = STATE(3),
    [sym_symbol] = STATE(3),
    [sym_vector] = STATE(3),
    [sym_list] = STATE(3),
    [sym_abbreviation] = STATE(3),
    [aux_sym_vector_repeat1] = STATE(3),
    [aux_sym_boolean_token1] = ACTIONS(29),
    [aux_sym_boolean_token2] = ACTIONS(29),
    [aux_sym_number_token1] = ACTIONS(31),
    [aux_sym_number_token2] = ACTIONS(31),
    [aux_sym_number_token3] = ACTIONS(31),
    [aux_sym_number_token4] = ACTIONS(31),
    [anon_sym_POUND] = ACTIONS(33),
    [sym_string] = ACTIONS(79),
    [sym_bytevector] = ACTIONS(79),
    [aux_sym_symbol_token1] = ACTIONS(37),
    [aux_sym_symbol_token2] = ACTIONS(37),
    [anon_sym_POUND_LPAREN] = ACTIONS(39),
    [aux_sym_vector_token1] = ACTIONS(79),
    [anon_sym_RPAREN] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_RBRACK] = ACTIONS(81),
    [anon_sym_RBRACE] = ACTIONS(81),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(45),
    [anon_sym_COMMA_AT] = ACTIONS(45),
    [sym_comment] = ACTIONS(47),
    [sym_directive] = ACTIONS(47),
  },
  [6] = {
    [sym__sexp] = STATE(4),
    [sym__atom] = STATE(4),
    [sym_boolean] = STATE(4),
    [sym_number] = STATE(4),
    [sym_character] = STATE(4),
    [sym_symbol] = STATE(4),
    [sym_vector] = STATE(4),
    [sym_list] = STATE(4),
    [sym_abbreviation] = STATE(4),
    [aux_sym_vector_repeat1] = STATE(4),
    [aux_sym_boolean_token1] = ACTIONS(29),
    [aux_sym_boolean_token2] = ACTIONS(29),
    [aux_sym_number_token1] = ACTIONS(31),
    [aux_sym_number_token2] = ACTIONS(31),
    [aux_sym_number_token3] = ACTIONS(31),
    [aux_sym_number_token4] = ACTIONS(31),
    [anon_sym_POUND] = ACTIONS(33),
    [sym_string] = ACTIONS(49),
    [sym_bytevector] = ACTIONS(49),
    [aux_sym_symbol_token1] = ACTIONS(37),
    [aux_sym_symbol_token2] = ACTIONS(37),
    [anon_sym_POUND_LPAREN] = ACTIONS(39),
    [aux_sym_vector_token1] = ACTIONS(49),
    [anon_sym_RPAREN] = ACTIONS(83),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_RBRACK] = ACTIONS(83),
    [anon_sym_RBRACE] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(45),
    [anon_sym_COMMA_AT] = ACTIONS(45),
    [sym_comment] = ACTIONS(47),
    [sym_directive] = ACTIONS(47),
  },
  [7] = {
    [sym__sexp] = STATE(8),
    [sym__atom] = STATE(8),
    [sym_boolean] = STATE(8),
    [sym_number] = STATE(8),
    [sym_character] = STATE(8),
    [sym_symbol] = STATE(8),
    [sym_vector] = STATE(8),
    [sym_list] = STATE(8),
    [sym_abbreviation] = STATE(8),
    [aux_sym_vector_repeat1] = STATE(8),
    [aux_sym_boolean_token1] = ACTIONS(29),
    [aux_sym_boolean_token2] = ACTIONS(29),
    [aux_sym_number_token1] = ACTIONS(31),
    [aux_sym_number_token2] = ACTIONS(31),
    [aux_sym_number_token3] = ACTIONS(31),
    [aux_sym_number_token4] = ACTIONS(31),
    [anon_sym_POUND] = ACTIONS(33),
    [sym_string] = ACTIONS(85),
    [sym_bytevector] = ACTIONS(85),
    [aux_sym_symbol_token1] = ACTIONS(37),
    [aux_sym_symbol_token2] = ACTIONS(37),
    [anon_sym_POUND_LPAREN] = ACTIONS(39),
    [aux_sym_vector_token1] = ACTIONS(85),
    [anon_sym_RPAREN] = ACTIONS(87),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(45),
    [anon_sym_COMMA_AT] = ACTIONS(45),
    [sym_comment] = ACTIONS(47),
    [sym_directive] = ACTIONS(47),
  },
  [8] = {
    [sym__sexp] = STATE(4),
    [sym__atom] = STATE(4),
    [sym_boolean] = STATE(4),
    [sym_number] = STATE(4),
    [sym_character] = STATE(4),
    [sym_symbol] = STATE(4),
    [sym_vector] = STATE(4),
    [sym_list] = STATE(4),
    [sym_abbreviation] = STATE(4),
    [aux_sym_vector_repeat1] = STATE(4),
    [aux_sym_boolean_token1] = ACTIONS(29),
    [aux_sym_boolean_token2] = ACTIONS(29),
    [aux_sym_number_token1] = ACTIONS(31),
    [aux_sym_number_token2] = ACTIONS(31),
    [aux_sym_number_token3] = ACTIONS(31),
    [aux_sym_number_token4] = ACTIONS(31),
    [anon_sym_POUND] = ACTIONS(33),
    [sym_string] = ACTIONS(49),
    [sym_bytevector] = ACTIONS(49),
    [aux_sym_symbol_token1] = ACTIONS(37),
    [aux_sym_symbol_token2] = ACTIONS(37),
    [anon_sym_POUND_LPAREN] = ACTIONS(39),
    [aux_sym_vector_token1] = ACTIONS(49),
    [anon_sym_RPAREN] = ACTIONS(89),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(45),
    [anon_sym_COMMA_AT] = ACTIONS(45),
    [sym_comment] = ACTIONS(47),
    [sym_directive] = ACTIONS(47),
  },
  [9] = {
    [sym__sexp] = STATE(4),
    [sym__atom] = STATE(4),
    [sym_boolean] = STATE(4),
    [sym_number] = STATE(4),
    [sym_character] = STATE(4),
    [sym_symbol] = STATE(4),
    [sym_vector] = STATE(4),
    [sym_list] = STATE(4),
    [sym_abbreviation] = STATE(4),
    [aux_sym_vector_repeat1] = STATE(4),
    [aux_sym_boolean_token1] = ACTIONS(29),
    [aux_sym_boolean_token2] = ACTIONS(29),
    [aux_sym_number_token1] = ACTIONS(31),
    [aux_sym_number_token2] = ACTIONS(31),
    [aux_sym_number_token3] = ACTIONS(31),
    [aux_sym_number_token4] = ACTIONS(31),
    [anon_sym_POUND] = ACTIONS(33),
    [sym_string] = ACTIONS(49),
    [sym_bytevector] = ACTIONS(49),
    [aux_sym_symbol_token1] = ACTIONS(37),
    [aux_sym_symbol_token2] = ACTIONS(37),
    [anon_sym_POUND_LPAREN] = ACTIONS(39),
    [aux_sym_vector_token1] = ACTIONS(49),
    [anon_sym_RPAREN] = ACTIONS(91),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(45),
    [anon_sym_COMMA_AT] = ACTIONS(45),
    [sym_comment] = ACTIONS(47),
    [sym_directive] = ACTIONS(47),
  },
  [10] = {
    [sym__sexp] = STATE(9),
    [sym__atom] = STATE(9),
    [sym_boolean] = STATE(9),
    [sym_number] = STATE(9),
    [sym_character] = STATE(9),
    [sym_symbol] = STATE(9),
    [sym_vector] = STATE(9),
    [sym_list] = STATE(9),
    [sym_abbreviation] = STATE(9),
    [aux_sym_vector_repeat1] = STATE(9),
    [aux_sym_boolean_token1] = ACTIONS(29),
    [aux_sym_boolean_token2] = ACTIONS(29),
    [aux_sym_number_token1] = ACTIONS(31),
    [aux_sym_number_token2] = ACTIONS(31),
    [aux_sym_number_token3] = ACTIONS(31),
    [aux_sym_number_token4] = ACTIONS(31),
    [anon_sym_POUND] = ACTIONS(33),
    [sym_string] = ACTIONS(93),
    [sym_bytevector] = ACTIONS(93),
    [aux_sym_symbol_token1] = ACTIONS(37),
    [aux_sym_symbol_token2] = ACTIONS(37),
    [anon_sym_POUND_LPAREN] = ACTIONS(39),
    [aux_sym_vector_token1] = ACTIONS(93),
    [anon_sym_RPAREN] = ACTIONS(95),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(45),
    [anon_sym_COMMA_AT] = ACTIONS(45),
    [sym_comment] = ACTIONS(47),
    [sym_directive] = ACTIONS(47),
  },
  [11] = {
    [sym__sexp] = STATE(12),
    [sym__atom] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_number] = STATE(12),
    [sym_character] = STATE(12),
    [sym_symbol] = STATE(12),
    [sym_vector] = STATE(12),
    [sym_list] = STATE(12),
    [sym_abbreviation] = STATE(12),
    [aux_sym_source_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(97),
    [aux_sym_boolean_token1] = ACTIONS(7),
    [aux_sym_boolean_token2] = ACTIONS(7),
    [aux_sym_number_token1] = ACTIONS(9),
    [aux_sym_number_token2] = ACTIONS(9),
    [aux_sym_number_token3] = ACTIONS(11),
    [aux_sym_number_token4] = ACTIONS(9),
    [anon_sym_POUND] = ACTIONS(13),
    [sym_string] = ACTIONS(99),
    [sym_bytevector] = ACTIONS(99),
    [aux_sym_symbol_token1] = ACTIONS(17),
    [aux_sym_symbol_token2] = ACTIONS(19),
    [anon_sym_POUND_LPAREN] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_COMMA_AT] = ACTIONS(25),
    [sym_comment] = ACTIONS(3),
    [sym_directive] = ACTIONS(3),
  },
  [12] = {
    [sym__sexp] = STATE(12),
    [sym__atom] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_number] = STATE(12),
    [sym_character] = STATE(12),
    [sym_symbol] = STATE(12),
    [sym_vector] = STATE(12),
    [sym_list] = STATE(12),
    [sym_abbreviation] = STATE(12),
    [aux_sym_source_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(101),
    [aux_sym_boolean_token1] = ACTIONS(103),
    [aux_sym_boolean_token2] = ACTIONS(103),
    [aux_sym_number_token1] = ACTIONS(106),
    [aux_sym_number_token2] = ACTIONS(106),
    [aux_sym_number_token3] = ACTIONS(109),
    [aux_sym_number_token4] = ACTIONS(106),
    [anon_sym_POUND] = ACTIONS(112),
    [sym_string] = ACTIONS(115),
    [sym_bytevector] = ACTIONS(115),
    [aux_sym_symbol_token1] = ACTIONS(118),
    [aux_sym_symbol_token2] = ACTIONS(121),
    [anon_sym_POUND_LPAREN] = ACTIONS(124),
    [anon_sym_LPAREN] = ACTIONS(127),
    [anon_sym_LBRACK] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(127),
    [anon_sym_SQUOTE] = ACTIONS(130),
    [anon_sym_BQUOTE] = ACTIONS(130),
    [anon_sym_COMMA] = ACTIONS(133),
    [anon_sym_COMMA_AT] = ACTIONS(130),
    [sym_comment] = ACTIONS(3),
    [sym_directive] = ACTIONS(3),
  },
  [13] = {
    [sym__sexp] = STATE(27),
    [sym__atom] = STATE(27),
    [sym_boolean] = STATE(27),
    [sym_number] = STATE(27),
    [sym_character] = STATE(27),
    [sym_symbol] = STATE(27),
    [sym_vector] = STATE(27),
    [sym_list] = STATE(27),
    [sym_abbreviation] = STATE(27),
    [aux_sym_boolean_token1] = ACTIONS(7),
    [aux_sym_boolean_token2] = ACTIONS(7),
    [aux_sym_number_token1] = ACTIONS(9),
    [aux_sym_number_token2] = ACTIONS(9),
    [aux_sym_number_token3] = ACTIONS(11),
    [aux_sym_number_token4] = ACTIONS(9),
    [anon_sym_POUND] = ACTIONS(13),
    [sym_string] = ACTIONS(136),
    [sym_bytevector] = ACTIONS(136),
    [aux_sym_symbol_token1] = ACTIONS(17),
    [aux_sym_symbol_token2] = ACTIONS(19),
    [anon_sym_POUND_LPAREN] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_COMMA_AT] = ACTIONS(25),
    [sym_comment] = ACTIONS(3),
    [sym_directive] = ACTIONS(3),
  },
  [14] = {
    [sym__sexp] = STATE(17),
    [sym__atom] = STATE(17),
    [sym_boolean] = STATE(17),
    [sym_number] = STATE(17),
    [sym_character] = STATE(17),
    [sym_symbol] = STATE(17),
    [sym_vector] = STATE(17),
    [sym_list] = STATE(17),
    [sym_abbreviation] = STATE(17),
    [aux_sym_boolean_token1] = ACTIONS(138),
    [aux_sym_boolean_token2] = ACTIONS(138),
    [aux_sym_number_token1] = ACTIONS(140),
    [aux_sym_number_token2] = ACTIONS(140),
    [aux_sym_number_token3] = ACTIONS(31),
    [aux_sym_number_token4] = ACTIONS(140),
    [anon_sym_POUND] = ACTIONS(33),
    [sym_string] = ACTIONS(142),
    [sym_bytevector] = ACTIONS(142),
    [aux_sym_symbol_token1] = ACTIONS(37),
    [aux_sym_symbol_token2] = ACTIONS(144),
    [anon_sym_POUND_LPAREN] = ACTIONS(146),
    [anon_sym_LPAREN] = ACTIONS(148),
    [anon_sym_LBRACK] = ACTIONS(148),
    [anon_sym_LBRACE] = ACTIONS(148),
    [anon_sym_SQUOTE] = ACTIONS(150),
    [anon_sym_BQUOTE] = ACTIONS(150),
    [anon_sym_COMMA] = ACTIONS(45),
    [anon_sym_COMMA_AT] = ACTIONS(150),
    [sym_comment] = ACTIONS(3),
    [sym_directive] = ACTIONS(3),
  },
  [15] = {
    [aux_sym_boolean_token1] = ACTIONS(152),
    [aux_sym_boolean_token2] = ACTIONS(152),
    [aux_sym_number_token1] = ACTIONS(152),
    [aux_sym_number_token2] = ACTIONS(152),
    [aux_sym_number_token3] = ACTIONS(152),
    [aux_sym_number_token4] = ACTIONS(152),
    [anon_sym_POUND] = ACTIONS(152),
    [sym_string] = ACTIONS(152),
    [sym_bytevector] = ACTIONS(152),
    [aux_sym_symbol_token1] = ACTIONS(152),
    [aux_sym_symbol_token2] = ACTIONS(152),
    [anon_sym_POUND_LPAREN] = ACTIONS(152),
    [aux_sym_vector_token1] = ACTIONS(152),
    [anon_sym_RPAREN] = ACTIONS(152),
    [anon_sym_LPAREN] = ACTIONS(152),
    [anon_sym_LBRACK] = ACTIONS(152),
    [anon_sym_LBRACE] = ACTIONS(152),
    [anon_sym_RBRACK] = ACTIONS(152),
    [anon_sym_RBRACE] = ACTIONS(152),
    [anon_sym_SQUOTE] = ACTIONS(152),
    [anon_sym_BQUOTE] = ACTIONS(152),
    [anon_sym_COMMA] = ACTIONS(152),
    [anon_sym_COMMA_AT] = ACTIONS(152),
    [sym_comment] = ACTIONS(47),
    [sym_directive] = ACTIONS(47),
  },
  [16] = {
    [aux_sym_boolean_token1] = ACTIONS(154),
    [aux_sym_boolean_token2] = ACTIONS(154),
    [aux_sym_number_token1] = ACTIONS(154),
    [aux_sym_number_token2] = ACTIONS(154),
    [aux_sym_number_token3] = ACTIONS(154),
    [aux_sym_number_token4] = ACTIONS(154),
    [anon_sym_POUND] = ACTIONS(154),
    [sym_string] = ACTIONS(154),
    [sym_bytevector] = ACTIONS(154),
    [aux_sym_symbol_token1] = ACTIONS(154),
    [aux_sym_symbol_token2] = ACTIONS(154),
    [anon_sym_POUND_LPAREN] = ACTIONS(154),
    [aux_sym_vector_token1] = ACTIONS(154),
    [anon_sym_RPAREN] = ACTIONS(154),
    [anon_sym_LPAREN] = ACTIONS(154),
    [anon_sym_LBRACK] = ACTIONS(154),
    [anon_sym_LBRACE] = ACTIONS(154),
    [anon_sym_RBRACK] = ACTIONS(154),
    [anon_sym_RBRACE] = ACTIONS(154),
    [anon_sym_SQUOTE] = ACTIONS(154),
    [anon_sym_BQUOTE] = ACTIONS(154),
    [anon_sym_COMMA] = ACTIONS(154),
    [anon_sym_COMMA_AT] = ACTIONS(154),
    [sym_comment] = ACTIONS(47),
    [sym_directive] = ACTIONS(47),
  },
  [17] = {
    [aux_sym_boolean_token1] = ACTIONS(156),
    [aux_sym_boolean_token2] = ACTIONS(156),
    [aux_sym_number_token1] = ACTIONS(156),
    [aux_sym_number_token2] = ACTIONS(156),
    [aux_sym_number_token3] = ACTIONS(156),
    [aux_sym_number_token4] = ACTIONS(156),
    [anon_sym_POUND] = ACTIONS(156),
    [sym_string] = ACTIONS(156),
    [sym_bytevector] = ACTIONS(156),
    [aux_sym_symbol_token1] = ACTIONS(156),
    [aux_sym_symbol_token2] = ACTIONS(156),
    [anon_sym_POUND_LPAREN] = ACTIONS(156),
    [aux_sym_vector_token1] = ACTIONS(156),
    [anon_sym_RPAREN] = ACTIONS(156),
    [anon_sym_LPAREN] = ACTIONS(156),
    [anon_sym_LBRACK] = ACTIONS(156),
    [anon_sym_LBRACE] = ACTIONS(156),
    [anon_sym_RBRACK] = ACTIONS(156),
    [anon_sym_RBRACE] = ACTIONS(156),
    [anon_sym_SQUOTE] = ACTIONS(156),
    [anon_sym_BQUOTE] = ACTIONS(156),
    [anon_sym_COMMA] = ACTIONS(156),
    [anon_sym_COMMA_AT] = ACTIONS(156),
    [sym_comment] = ACTIONS(47),
    [sym_directive] = ACTIONS(47),
  },
  [18] = {
    [aux_sym_boolean_token1] = ACTIONS(158),
    [aux_sym_boolean_token2] = ACTIONS(158),
    [aux_sym_number_token1] = ACTIONS(158),
    [aux_sym_number_token2] = ACTIONS(158),
    [aux_sym_number_token3] = ACTIONS(158),
    [aux_sym_number_token4] = ACTIONS(158),
    [anon_sym_POUND] = ACTIONS(158),
    [sym_string] = ACTIONS(158),
    [sym_bytevector] = ACTIONS(158),
    [aux_sym_symbol_token1] = ACTIONS(158),
    [aux_sym_symbol_token2] = ACTIONS(158),
    [anon_sym_POUND_LPAREN] = ACTIONS(158),
    [aux_sym_vector_token1] = ACTIONS(158),
    [anon_sym_RPAREN] = ACTIONS(158),
    [anon_sym_LPAREN] = ACTIONS(158),
    [anon_sym_LBRACK] = ACTIONS(158),
    [anon_sym_LBRACE] = ACTIONS(158),
    [anon_sym_RBRACK] = ACTIONS(158),
    [anon_sym_RBRACE] = ACTIONS(158),
    [anon_sym_SQUOTE] = ACTIONS(158),
    [anon_sym_BQUOTE] = ACTIONS(158),
    [anon_sym_COMMA] = ACTIONS(158),
    [anon_sym_COMMA_AT] = ACTIONS(158),
    [sym_comment] = ACTIONS(47),
    [sym_directive] = ACTIONS(47),
  },
  [19] = {
    [aux_sym_boolean_token1] = ACTIONS(160),
    [aux_sym_boolean_token2] = ACTIONS(160),
    [aux_sym_number_token1] = ACTIONS(160),
    [aux_sym_number_token2] = ACTIONS(160),
    [aux_sym_number_token3] = ACTIONS(160),
    [aux_sym_number_token4] = ACTIONS(160),
    [anon_sym_POUND] = ACTIONS(160),
    [sym_string] = ACTIONS(160),
    [sym_bytevector] = ACTIONS(160),
    [aux_sym_symbol_token1] = ACTIONS(160),
    [aux_sym_symbol_token2] = ACTIONS(160),
    [anon_sym_POUND_LPAREN] = ACTIONS(160),
    [aux_sym_vector_token1] = ACTIONS(160),
    [anon_sym_RPAREN] = ACTIONS(160),
    [anon_sym_LPAREN] = ACTIONS(160),
    [anon_sym_LBRACK] = ACTIONS(160),
    [anon_sym_LBRACE] = ACTIONS(160),
    [anon_sym_RBRACK] = ACTIONS(160),
    [anon_sym_RBRACE] = ACTIONS(160),
    [anon_sym_SQUOTE] = ACTIONS(160),
    [anon_sym_BQUOTE] = ACTIONS(160),
    [anon_sym_COMMA] = ACTIONS(160),
    [anon_sym_COMMA_AT] = ACTIONS(160),
    [sym_comment] = ACTIONS(47),
    [sym_directive] = ACTIONS(47),
  },
  [20] = {
    [aux_sym_boolean_token1] = ACTIONS(162),
    [aux_sym_boolean_token2] = ACTIONS(162),
    [aux_sym_number_token1] = ACTIONS(162),
    [aux_sym_number_token2] = ACTIONS(162),
    [aux_sym_number_token3] = ACTIONS(162),
    [aux_sym_number_token4] = ACTIONS(162),
    [anon_sym_POUND] = ACTIONS(162),
    [sym_string] = ACTIONS(162),
    [sym_bytevector] = ACTIONS(162),
    [aux_sym_symbol_token1] = ACTIONS(162),
    [aux_sym_symbol_token2] = ACTIONS(162),
    [anon_sym_POUND_LPAREN] = ACTIONS(162),
    [aux_sym_vector_token1] = ACTIONS(162),
    [anon_sym_RPAREN] = ACTIONS(162),
    [anon_sym_LPAREN] = ACTIONS(162),
    [anon_sym_LBRACK] = ACTIONS(162),
    [anon_sym_LBRACE] = ACTIONS(162),
    [anon_sym_RBRACK] = ACTIONS(162),
    [anon_sym_RBRACE] = ACTIONS(162),
    [anon_sym_SQUOTE] = ACTIONS(162),
    [anon_sym_BQUOTE] = ACTIONS(162),
    [anon_sym_COMMA] = ACTIONS(162),
    [anon_sym_COMMA_AT] = ACTIONS(162),
    [sym_comment] = ACTIONS(47),
    [sym_directive] = ACTIONS(47),
  },
  [21] = {
    [aux_sym_boolean_token1] = ACTIONS(164),
    [aux_sym_boolean_token2] = ACTIONS(164),
    [aux_sym_number_token1] = ACTIONS(164),
    [aux_sym_number_token2] = ACTIONS(164),
    [aux_sym_number_token3] = ACTIONS(164),
    [aux_sym_number_token4] = ACTIONS(164),
    [anon_sym_POUND] = ACTIONS(164),
    [sym_string] = ACTIONS(164),
    [sym_bytevector] = ACTIONS(164),
    [aux_sym_symbol_token1] = ACTIONS(164),
    [aux_sym_symbol_token2] = ACTIONS(164),
    [anon_sym_POUND_LPAREN] = ACTIONS(164),
    [aux_sym_vector_token1] = ACTIONS(164),
    [anon_sym_RPAREN] = ACTIONS(164),
    [anon_sym_LPAREN] = ACTIONS(164),
    [anon_sym_LBRACK] = ACTIONS(164),
    [anon_sym_LBRACE] = ACTIONS(164),
    [anon_sym_RBRACK] = ACTIONS(164),
    [anon_sym_RBRACE] = ACTIONS(164),
    [anon_sym_SQUOTE] = ACTIONS(164),
    [anon_sym_BQUOTE] = ACTIONS(164),
    [anon_sym_COMMA] = ACTIONS(164),
    [anon_sym_COMMA_AT] = ACTIONS(164),
    [sym_comment] = ACTIONS(47),
    [sym_directive] = ACTIONS(47),
  },
  [22] = {
    [aux_sym_boolean_token1] = ACTIONS(166),
    [aux_sym_boolean_token2] = ACTIONS(166),
    [aux_sym_number_token1] = ACTIONS(166),
    [aux_sym_number_token2] = ACTIONS(166),
    [aux_sym_number_token3] = ACTIONS(166),
    [aux_sym_number_token4] = ACTIONS(166),
    [anon_sym_POUND] = ACTIONS(166),
    [sym_string] = ACTIONS(166),
    [sym_bytevector] = ACTIONS(166),
    [aux_sym_symbol_token1] = ACTIONS(166),
    [aux_sym_symbol_token2] = ACTIONS(166),
    [anon_sym_POUND_LPAREN] = ACTIONS(166),
    [aux_sym_vector_token1] = ACTIONS(166),
    [anon_sym_RPAREN] = ACTIONS(166),
    [anon_sym_LPAREN] = ACTIONS(166),
    [anon_sym_LBRACK] = ACTIONS(166),
    [anon_sym_LBRACE] = ACTIONS(166),
    [anon_sym_RBRACK] = ACTIONS(166),
    [anon_sym_RBRACE] = ACTIONS(166),
    [anon_sym_SQUOTE] = ACTIONS(166),
    [anon_sym_BQUOTE] = ACTIONS(166),
    [anon_sym_COMMA] = ACTIONS(166),
    [anon_sym_COMMA_AT] = ACTIONS(166),
    [sym_comment] = ACTIONS(47),
    [sym_directive] = ACTIONS(47),
  },
  [23] = {
    [aux_sym_boolean_token1] = ACTIONS(168),
    [aux_sym_boolean_token2] = ACTIONS(168),
    [aux_sym_number_token1] = ACTIONS(168),
    [aux_sym_number_token2] = ACTIONS(168),
    [aux_sym_number_token3] = ACTIONS(168),
    [aux_sym_number_token4] = ACTIONS(168),
    [anon_sym_POUND] = ACTIONS(168),
    [sym_string] = ACTIONS(168),
    [sym_bytevector] = ACTIONS(168),
    [aux_sym_symbol_token1] = ACTIONS(168),
    [aux_sym_symbol_token2] = ACTIONS(168),
    [anon_sym_POUND_LPAREN] = ACTIONS(168),
    [aux_sym_vector_token1] = ACTIONS(168),
    [anon_sym_RPAREN] = ACTIONS(168),
    [anon_sym_LPAREN] = ACTIONS(168),
    [anon_sym_LBRACK] = ACTIONS(168),
    [anon_sym_LBRACE] = ACTIONS(168),
    [anon_sym_RBRACK] = ACTIONS(168),
    [anon_sym_RBRACE] = ACTIONS(168),
    [anon_sym_SQUOTE] = ACTIONS(168),
    [anon_sym_BQUOTE] = ACTIONS(168),
    [anon_sym_COMMA] = ACTIONS(168),
    [anon_sym_COMMA_AT] = ACTIONS(168),
    [sym_comment] = ACTIONS(47),
    [sym_directive] = ACTIONS(47),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(170),
    [aux_sym_boolean_token1] = ACTIONS(170),
    [aux_sym_boolean_token2] = ACTIONS(170),
    [aux_sym_number_token1] = ACTIONS(170),
    [aux_sym_number_token2] = ACTIONS(170),
    [aux_sym_number_token3] = ACTIONS(154),
    [aux_sym_number_token4] = ACTIONS(170),
    [anon_sym_POUND] = ACTIONS(154),
    [sym_string] = ACTIONS(170),
    [sym_bytevector] = ACTIONS(170),
    [aux_sym_symbol_token1] = ACTIONS(154),
    [aux_sym_symbol_token2] = ACTIONS(170),
    [anon_sym_POUND_LPAREN] = ACTIONS(170),
    [anon_sym_LPAREN] = ACTIONS(170),
    [anon_sym_LBRACK] = ACTIONS(170),
    [anon_sym_LBRACE] = ACTIONS(170),
    [anon_sym_SQUOTE] = ACTIONS(170),
    [anon_sym_BQUOTE] = ACTIONS(170),
    [anon_sym_COMMA] = ACTIONS(154),
    [anon_sym_COMMA_AT] = ACTIONS(170),
    [sym_comment] = ACTIONS(3),
    [sym_directive] = ACTIONS(3),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(172),
    [aux_sym_boolean_token1] = ACTIONS(172),
    [aux_sym_boolean_token2] = ACTIONS(172),
    [aux_sym_number_token1] = ACTIONS(172),
    [aux_sym_number_token2] = ACTIONS(172),
    [aux_sym_number_token3] = ACTIONS(152),
    [aux_sym_number_token4] = ACTIONS(172),
    [anon_sym_POUND] = ACTIONS(152),
    [sym_string] = ACTIONS(172),
    [sym_bytevector] = ACTIONS(172),
    [aux_sym_symbol_token1] = ACTIONS(152),
    [aux_sym_symbol_token2] = ACTIONS(172),
    [anon_sym_POUND_LPAREN] = ACTIONS(172),
    [anon_sym_LPAREN] = ACTIONS(172),
    [anon_sym_LBRACK] = ACTIONS(172),
    [anon_sym_LBRACE] = ACTIONS(172),
    [anon_sym_SQUOTE] = ACTIONS(172),
    [anon_sym_BQUOTE] = ACTIONS(172),
    [anon_sym_COMMA] = ACTIONS(152),
    [anon_sym_COMMA_AT] = ACTIONS(172),
    [sym_comment] = ACTIONS(3),
    [sym_directive] = ACTIONS(3),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(174),
    [aux_sym_boolean_token1] = ACTIONS(174),
    [aux_sym_boolean_token2] = ACTIONS(174),
    [aux_sym_number_token1] = ACTIONS(174),
    [aux_sym_number_token2] = ACTIONS(174),
    [aux_sym_number_token3] = ACTIONS(164),
    [aux_sym_number_token4] = ACTIONS(174),
    [anon_sym_POUND] = ACTIONS(164),
    [sym_string] = ACTIONS(174),
    [sym_bytevector] = ACTIONS(174),
    [aux_sym_symbol_token1] = ACTIONS(164),
    [aux_sym_symbol_token2] = ACTIONS(174),
    [anon_sym_POUND_LPAREN] = ACTIONS(174),
    [anon_sym_LPAREN] = ACTIONS(174),
    [anon_sym_LBRACK] = ACTIONS(174),
    [anon_sym_LBRACE] = ACTIONS(174),
    [anon_sym_SQUOTE] = ACTIONS(174),
    [anon_sym_BQUOTE] = ACTIONS(174),
    [anon_sym_COMMA] = ACTIONS(164),
    [anon_sym_COMMA_AT] = ACTIONS(174),
    [sym_comment] = ACTIONS(3),
    [sym_directive] = ACTIONS(3),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(176),
    [aux_sym_boolean_token1] = ACTIONS(176),
    [aux_sym_boolean_token2] = ACTIONS(176),
    [aux_sym_number_token1] = ACTIONS(176),
    [aux_sym_number_token2] = ACTIONS(176),
    [aux_sym_number_token3] = ACTIONS(156),
    [aux_sym_number_token4] = ACTIONS(176),
    [anon_sym_POUND] = ACTIONS(156),
    [sym_string] = ACTIONS(176),
    [sym_bytevector] = ACTIONS(176),
    [aux_sym_symbol_token1] = ACTIONS(156),
    [aux_sym_symbol_token2] = ACTIONS(176),
    [anon_sym_POUND_LPAREN] = ACTIONS(176),
    [anon_sym_LPAREN] = ACTIONS(176),
    [anon_sym_LBRACK] = ACTIONS(176),
    [anon_sym_LBRACE] = ACTIONS(176),
    [anon_sym_SQUOTE] = ACTIONS(176),
    [anon_sym_BQUOTE] = ACTIONS(176),
    [anon_sym_COMMA] = ACTIONS(156),
    [anon_sym_COMMA_AT] = ACTIONS(176),
    [sym_comment] = ACTIONS(3),
    [sym_directive] = ACTIONS(3),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(178),
    [aux_sym_boolean_token1] = ACTIONS(178),
    [aux_sym_boolean_token2] = ACTIONS(178),
    [aux_sym_number_token1] = ACTIONS(178),
    [aux_sym_number_token2] = ACTIONS(178),
    [aux_sym_number_token3] = ACTIONS(158),
    [aux_sym_number_token4] = ACTIONS(178),
    [anon_sym_POUND] = ACTIONS(158),
    [sym_string] = ACTIONS(178),
    [sym_bytevector] = ACTIONS(178),
    [aux_sym_symbol_token1] = ACTIONS(158),
    [aux_sym_symbol_token2] = ACTIONS(178),
    [anon_sym_POUND_LPAREN] = ACTIONS(178),
    [anon_sym_LPAREN] = ACTIONS(178),
    [anon_sym_LBRACK] = ACTIONS(178),
    [anon_sym_LBRACE] = ACTIONS(178),
    [anon_sym_SQUOTE] = ACTIONS(178),
    [anon_sym_BQUOTE] = ACTIONS(178),
    [anon_sym_COMMA] = ACTIONS(158),
    [anon_sym_COMMA_AT] = ACTIONS(178),
    [sym_comment] = ACTIONS(3),
    [sym_directive] = ACTIONS(3),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(180),
    [aux_sym_boolean_token1] = ACTIONS(180),
    [aux_sym_boolean_token2] = ACTIONS(180),
    [aux_sym_number_token1] = ACTIONS(180),
    [aux_sym_number_token2] = ACTIONS(180),
    [aux_sym_number_token3] = ACTIONS(160),
    [aux_sym_number_token4] = ACTIONS(180),
    [anon_sym_POUND] = ACTIONS(160),
    [sym_string] = ACTIONS(180),
    [sym_bytevector] = ACTIONS(180),
    [aux_sym_symbol_token1] = ACTIONS(160),
    [aux_sym_symbol_token2] = ACTIONS(180),
    [anon_sym_POUND_LPAREN] = ACTIONS(180),
    [anon_sym_LPAREN] = ACTIONS(180),
    [anon_sym_LBRACK] = ACTIONS(180),
    [anon_sym_LBRACE] = ACTIONS(180),
    [anon_sym_SQUOTE] = ACTIONS(180),
    [anon_sym_BQUOTE] = ACTIONS(180),
    [anon_sym_COMMA] = ACTIONS(160),
    [anon_sym_COMMA_AT] = ACTIONS(180),
    [sym_comment] = ACTIONS(3),
    [sym_directive] = ACTIONS(3),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(182),
    [aux_sym_boolean_token1] = ACTIONS(182),
    [aux_sym_boolean_token2] = ACTIONS(182),
    [aux_sym_number_token1] = ACTIONS(182),
    [aux_sym_number_token2] = ACTIONS(182),
    [aux_sym_number_token3] = ACTIONS(162),
    [aux_sym_number_token4] = ACTIONS(182),
    [anon_sym_POUND] = ACTIONS(162),
    [sym_string] = ACTIONS(182),
    [sym_bytevector] = ACTIONS(182),
    [aux_sym_symbol_token1] = ACTIONS(162),
    [aux_sym_symbol_token2] = ACTIONS(182),
    [anon_sym_POUND_LPAREN] = ACTIONS(182),
    [anon_sym_LPAREN] = ACTIONS(182),
    [anon_sym_LBRACK] = ACTIONS(182),
    [anon_sym_LBRACE] = ACTIONS(182),
    [anon_sym_SQUOTE] = ACTIONS(182),
    [anon_sym_BQUOTE] = ACTIONS(182),
    [anon_sym_COMMA] = ACTIONS(162),
    [anon_sym_COMMA_AT] = ACTIONS(182),
    [sym_comment] = ACTIONS(3),
    [sym_directive] = ACTIONS(3),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(184),
    [aux_sym_boolean_token1] = ACTIONS(184),
    [aux_sym_boolean_token2] = ACTIONS(184),
    [aux_sym_number_token1] = ACTIONS(184),
    [aux_sym_number_token2] = ACTIONS(184),
    [aux_sym_number_token3] = ACTIONS(168),
    [aux_sym_number_token4] = ACTIONS(184),
    [anon_sym_POUND] = ACTIONS(168),
    [sym_string] = ACTIONS(184),
    [sym_bytevector] = ACTIONS(184),
    [aux_sym_symbol_token1] = ACTIONS(168),
    [aux_sym_symbol_token2] = ACTIONS(184),
    [anon_sym_POUND_LPAREN] = ACTIONS(184),
    [anon_sym_LPAREN] = ACTIONS(184),
    [anon_sym_LBRACK] = ACTIONS(184),
    [anon_sym_LBRACE] = ACTIONS(184),
    [anon_sym_SQUOTE] = ACTIONS(184),
    [anon_sym_BQUOTE] = ACTIONS(184),
    [anon_sym_COMMA] = ACTIONS(168),
    [anon_sym_COMMA_AT] = ACTIONS(184),
    [sym_comment] = ACTIONS(3),
    [sym_directive] = ACTIONS(3),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(186),
    [aux_sym_boolean_token1] = ACTIONS(186),
    [aux_sym_boolean_token2] = ACTIONS(186),
    [aux_sym_number_token1] = ACTIONS(186),
    [aux_sym_number_token2] = ACTIONS(186),
    [aux_sym_number_token3] = ACTIONS(166),
    [aux_sym_number_token4] = ACTIONS(186),
    [anon_sym_POUND] = ACTIONS(166),
    [sym_string] = ACTIONS(186),
    [sym_bytevector] = ACTIONS(186),
    [aux_sym_symbol_token1] = ACTIONS(166),
    [aux_sym_symbol_token2] = ACTIONS(186),
    [anon_sym_POUND_LPAREN] = ACTIONS(186),
    [anon_sym_LPAREN] = ACTIONS(186),
    [anon_sym_LBRACK] = ACTIONS(186),
    [anon_sym_LBRACE] = ACTIONS(186),
    [anon_sym_SQUOTE] = ACTIONS(186),
    [anon_sym_BQUOTE] = ACTIONS(186),
    [anon_sym_COMMA] = ACTIONS(166),
    [anon_sym_COMMA_AT] = ACTIONS(186),
    [sym_comment] = ACTIONS(3),
    [sym_directive] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(188), 1,
      aux_sym_character_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym_directive,
  [8] = 2,
    ACTIONS(190), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_directive,
  [16] = 2,
    ACTIONS(192), 1,
      aux_sym_character_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym_directive,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(33)] = 0,
  [SMALL_STATE(34)] = 8,
  [SMALL_STATE(35)] = 16,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vector_repeat1, 2), SHIFT_REPEAT(21),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vector_repeat1, 2), SHIFT_REPEAT(22),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vector_repeat1, 2), SHIFT_REPEAT(33),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vector_repeat1, 2), SHIFT_REPEAT(4),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vector_repeat1, 2), SHIFT_REPEAT(23),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vector_repeat1, 2), SHIFT_REPEAT(10),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_vector_repeat1, 2),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vector_repeat1, 2), SHIFT_REPEAT(5),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vector_repeat1, 2), SHIFT_REPEAT(14),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(26),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(32),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(32),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(35),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(12),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(31),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(31),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(7),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(2),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(13),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(13),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3, .production_id = 2),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 3, .production_id = 2),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_abbreviation, 2),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2, .production_id = 1),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 2, .production_id = 1),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character, 2),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 1),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 3, .production_id = 2),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3, .production_id = 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_abbreviation, 2),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2, .production_id = 1),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 2, .production_id = 1),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character, 2),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [190] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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

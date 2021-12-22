#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 7
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 18
#define ALIAS_COUNT 0
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 2
#define PRODUCTION_ID_COUNT 1

enum {
  sym__ws = 1,
  sym_comment = 2,
  sym_nested_comment = 3,
  sym_directive = 4,
  sym_character = 5,
  sym_string = 6,
  anon_sym_LPAREN = 7,
  anon_sym_LBRACK = 8,
  anon_sym_LBRACE = 9,
  anon_sym_RPAREN = 10,
  anon_sym_RBRACK = 11,
  anon_sym_RBRACE = 12,
  sym_source = 13,
  sym__gap = 14,
  sym__form = 15,
  sym_list = 16,
  aux_sym_source_repeat1 = 17,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__ws] = "_ws",
  [sym_comment] = "comment",
  [sym_nested_comment] = "nested_comment",
  [sym_directive] = "directive",
  [sym_character] = "character",
  [sym_string] = "string",
  [anon_sym_LPAREN] = "(",
  [anon_sym_LBRACK] = "[",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RPAREN] = ")",
  [anon_sym_RBRACK] = "]",
  [anon_sym_RBRACE] = "}",
  [sym_source] = "source",
  [sym__gap] = "_gap",
  [sym__form] = "_form",
  [sym_list] = "list",
  [aux_sym_source_repeat1] = "source_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__ws] = sym__ws,
  [sym_comment] = sym_comment,
  [sym_nested_comment] = sym_nested_comment,
  [sym_directive] = sym_directive,
  [sym_character] = sym_character,
  [sym_string] = sym_string,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_source] = sym_source,
  [sym__gap] = sym__gap,
  [sym__form] = sym__form,
  [sym_list] = sym_list,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__ws] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_nested_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_character] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
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
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym__gap] = {
    .visible = false,
    .named = true,
  },
  [sym__form] = {
    .visible = false,
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

static inline bool sym__ws_character_set_1(int32_t c) {
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
      if (eof) ADVANCE(36);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(5);
      if (lookahead == '(') ADVANCE(55);
      if (lookahead == ')') ADVANCE(58);
      if (lookahead == ';') ADVANCE(39);
      if (lookahead == '[') ADVANCE(56);
      if (lookahead == ']') ADVANCE(59);
      if (lookahead == '{') ADVANCE(57);
      if (lookahead == '}') ADVANCE(60);
      if (sym__ws_character_set_1(lookahead)) ADVANCE(37);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(43);
      if (lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          lookahead == '|') ADVANCE(42);
      if (sym__ws_character_set_1(lookahead)) ADVANCE(42);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead == '#') ADVANCE(41);
      if (lookahead == '|') ADVANCE(2);
      if (sym__ws_character_set_1(lookahead)) ADVANCE(3);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead == '|') ADVANCE(2);
      if (sym__ws_character_set_1(lookahead)) ADVANCE(3);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(1);
      if (lookahead == ';') ADVANCE(39);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == '|') ADVANCE(4);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(54);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(50);
      if (lookahead == 'b') ADVANCE(45);
      if (lookahead == 'd') ADVANCE(47);
      if (lookahead == 'e') ADVANCE(52);
      if (lookahead == 'n') ADVANCE(48);
      if (lookahead == 'r') ADVANCE(49);
      if (lookahead == 's') ADVANCE(51);
      if (lookahead == 't') ADVANCE(46);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(44);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(13);
      END_STATE();
    case 11:
      if (lookahead == 'b') ADVANCE(44);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(18);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(15);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(9);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 17:
      if (lookahead == 'i') ADVANCE(25);
      END_STATE();
    case 18:
      if (lookahead == 'k') ADVANCE(30);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(44);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(16);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 23:
      if (lookahead == 'm') ADVANCE(44);
      END_STATE();
    case 24:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 25:
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 26:
      if (lookahead == 'p') ADVANCE(10);
      END_STATE();
    case 27:
      if (lookahead == 'p') ADVANCE(15);
      END_STATE();
    case 28:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 29:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 30:
      if (lookahead == 's') ADVANCE(26);
      END_STATE();
    case 31:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 33:
      if (lookahead == 'u') ADVANCE(29);
      END_STATE();
    case 34:
      if (lookahead == 'w') ADVANCE(21);
      END_STATE();
    case 35:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym__ws);
      if (sym__ws_character_set_1(lookahead)) ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(38);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_nested_comment);
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead == '|') ADVANCE(2);
      if (sym__ws_character_set_1(lookahead)) ADVANCE(3);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_nested_comment);
      if (lookahead == '\n') ADVANCE(40);
      if (lookahead == '|') ADVANCE(2);
      if (sym__ws_character_set_1(lookahead)) ADVANCE(3);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_directive);
      if (lookahead == '\n') ADVANCE(43);
      if (lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          lookahead == '|') ADVANCE(42);
      if (sym__ws_character_set_1(lookahead)) ADVANCE(42);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_directive);
      if (sym__ws_character_set_1(lookahead)) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_character);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'a') ADVANCE(12);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'a') ADVANCE(11);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'e') ADVANCE(34);
      if (lookahead == 'u') ADVANCE(22);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'l') ADVANCE(8);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'p') ADVANCE(10);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 's') ADVANCE(14);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_RBRACE);
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
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__ws] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_nested_comment] = ACTIONS(1),
    [sym_directive] = ACTIONS(1),
    [sym_character] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(6),
    [sym__gap] = STATE(2),
    [sym__form] = STATE(2),
    [sym_list] = STATE(2),
    [aux_sym_source_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__ws] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_nested_comment] = ACTIONS(5),
    [sym_directive] = ACTIONS(5),
    [sym_character] = ACTIONS(5),
    [sym_string] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(7),
  },
  [2] = {
    [sym__gap] = STATE(3),
    [sym__form] = STATE(3),
    [sym_list] = STATE(3),
    [aux_sym_source_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(9),
    [sym__ws] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym_nested_comment] = ACTIONS(11),
    [sym_directive] = ACTIONS(11),
    [sym_character] = ACTIONS(11),
    [sym_string] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(7),
  },
  [3] = {
    [sym__gap] = STATE(3),
    [sym__form] = STATE(3),
    [sym_list] = STATE(3),
    [aux_sym_source_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(13),
    [sym__ws] = ACTIONS(15),
    [sym_comment] = ACTIONS(15),
    [sym_nested_comment] = ACTIONS(15),
    [sym_directive] = ACTIONS(15),
    [sym_character] = ACTIONS(15),
    [sym_string] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(18),
    [anon_sym_LBRACK] = ACTIONS(18),
    [anon_sym_LBRACE] = ACTIONS(18),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(21),
    [sym__ws] = ACTIONS(21),
    [sym_comment] = ACTIONS(21),
    [sym_nested_comment] = ACTIONS(21),
    [sym_directive] = ACTIONS(21),
    [sym_character] = ACTIONS(21),
    [sym_string] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(23), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [6] = 1,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 6,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(3),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(5),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [25] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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

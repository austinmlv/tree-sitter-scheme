#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 10
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 23
#define ALIAS_COUNT 0
#define TOKEN_COUNT 16
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 2
#define PRODUCTION_ID_COUNT 1

enum {
  sym__ws = 1,
  sym_comment = 2,
  sym_nested_comment = 3,
  sym_directive = 4,
  aux_sym_boolean_token1 = 5,
  aux_sym_boolean_token2 = 6,
  anon_sym_POUND = 7,
  aux_sym_character_token1 = 8,
  sym_string = 9,
  anon_sym_LPAREN = 10,
  anon_sym_LBRACK = 11,
  anon_sym_LBRACE = 12,
  anon_sym_RPAREN = 13,
  anon_sym_RBRACK = 14,
  anon_sym_RBRACE = 15,
  sym_source = 16,
  sym__gap = 17,
  sym__form = 18,
  sym_boolean = 19,
  sym_character = 20,
  sym_list = 21,
  aux_sym_source_repeat1 = 22,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__ws] = "_ws",
  [sym_comment] = "comment",
  [sym_nested_comment] = "nested_comment",
  [sym_directive] = "directive",
  [aux_sym_boolean_token1] = "boolean_token1",
  [aux_sym_boolean_token2] = "boolean_token2",
  [anon_sym_POUND] = "#",
  [aux_sym_character_token1] = "character_token1",
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
  [sym_boolean] = "boolean",
  [sym_character] = "character",
  [sym_list] = "list",
  [aux_sym_source_repeat1] = "source_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__ws] = sym__ws,
  [sym_comment] = sym_comment,
  [sym_nested_comment] = sym_nested_comment,
  [sym_directive] = sym_directive,
  [aux_sym_boolean_token1] = aux_sym_boolean_token1,
  [aux_sym_boolean_token2] = aux_sym_boolean_token2,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_character_token1] = aux_sym_character_token1,
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
  [sym_boolean] = sym_boolean,
  [sym_character] = sym_character,
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
  [aux_sym_boolean_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_boolean_token2] = {
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
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_character] = {
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
      if (eof) ADVANCE(13);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == '(') ADVANCE(28);
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == ';') ADVANCE(16);
      if (lookahead == '[') ADVANCE(29);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead == ']') ADVANCE(32);
      if (lookahead == '{') ADVANCE(30);
      if (lookahead == '}') ADVANCE(33);
      if (sym__ws_character_set_1(lookahead)) ADVANCE(14);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          lookahead == '|') ADVANCE(19);
      if (sym__ws_character_set_1(lookahead)) ADVANCE(19);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead == '#') ADVANCE(18);
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
      if (lookahead == '"') ADVANCE(27);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 8:
      if (lookahead == 'l') ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == 's') ADVANCE(7);
      END_STATE();
    case 10:
      if (lookahead == 'u') ADVANCE(6);
      END_STATE();
    case 11:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(26);
      END_STATE();
    case 12:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym__ws);
      if (sym__ws_character_set_1(lookahead)) ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_nested_comment);
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead == '|') ADVANCE(2);
      if (sym__ws_character_set_1(lookahead)) ADVANCE(3);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_nested_comment);
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == '|') ADVANCE(2);
      if (sym__ws_character_set_1(lookahead)) ADVANCE(3);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_directive);
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          lookahead == '|') ADVANCE(19);
      if (sym__ws_character_set_1(lookahead)) ADVANCE(19);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_directive);
      if (sym__ws_character_set_1(lookahead)) ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_boolean_token1);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_boolean_token1);
      if (lookahead == 'r') ADVANCE(10);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_boolean_token2);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_boolean_token2);
      if (lookahead == 'a') ADVANCE(8);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '!') ADVANCE(1);
      if (lookahead == ';') ADVANCE(16);
      if (lookahead == 'f') ADVANCE(24);
      if (lookahead == 't') ADVANCE(22);
      if (lookahead == '|') ADVANCE(4);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 33:
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
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__ws] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_nested_comment] = ACTIONS(1),
    [sym_directive] = ACTIONS(1),
    [aux_sym_boolean_token1] = ACTIONS(1),
    [aux_sym_boolean_token2] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [aux_sym_character_token1] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(9),
    [sym__gap] = STATE(2),
    [sym__form] = STATE(2),
    [sym_boolean] = STATE(2),
    [sym_character] = STATE(2),
    [sym_list] = STATE(2),
    [aux_sym_source_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__ws] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_nested_comment] = ACTIONS(5),
    [sym_directive] = ACTIONS(5),
    [aux_sym_boolean_token1] = ACTIONS(7),
    [aux_sym_boolean_token2] = ACTIONS(7),
    [anon_sym_POUND] = ACTIONS(9),
    [sym_string] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(11),
  },
  [2] = {
    [sym__gap] = STATE(3),
    [sym__form] = STATE(3),
    [sym_boolean] = STATE(3),
    [sym_character] = STATE(3),
    [sym_list] = STATE(3),
    [aux_sym_source_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(13),
    [sym__ws] = ACTIONS(15),
    [sym_comment] = ACTIONS(15),
    [sym_nested_comment] = ACTIONS(15),
    [sym_directive] = ACTIONS(15),
    [aux_sym_boolean_token1] = ACTIONS(7),
    [aux_sym_boolean_token2] = ACTIONS(7),
    [anon_sym_POUND] = ACTIONS(9),
    [sym_string] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(11),
  },
  [3] = {
    [sym__gap] = STATE(3),
    [sym__form] = STATE(3),
    [sym_boolean] = STATE(3),
    [sym_character] = STATE(3),
    [sym_list] = STATE(3),
    [aux_sym_source_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(17),
    [sym__ws] = ACTIONS(19),
    [sym_comment] = ACTIONS(19),
    [sym_nested_comment] = ACTIONS(19),
    [sym_directive] = ACTIONS(19),
    [aux_sym_boolean_token1] = ACTIONS(22),
    [aux_sym_boolean_token2] = ACTIONS(22),
    [anon_sym_POUND] = ACTIONS(25),
    [sym_string] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_LBRACK] = ACTIONS(28),
    [anon_sym_LBRACE] = ACTIONS(28),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(31),
    [sym__ws] = ACTIONS(31),
    [sym_comment] = ACTIONS(31),
    [sym_nested_comment] = ACTIONS(31),
    [sym_directive] = ACTIONS(31),
    [aux_sym_boolean_token1] = ACTIONS(31),
    [aux_sym_boolean_token2] = ACTIONS(31),
    [anon_sym_POUND] = ACTIONS(33),
    [sym_string] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(31),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(35),
    [sym__ws] = ACTIONS(35),
    [sym_comment] = ACTIONS(35),
    [sym_nested_comment] = ACTIONS(35),
    [sym_directive] = ACTIONS(35),
    [aux_sym_boolean_token1] = ACTIONS(35),
    [aux_sym_boolean_token2] = ACTIONS(35),
    [anon_sym_POUND] = ACTIONS(37),
    [sym_string] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(35),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(39),
    [sym__ws] = ACTIONS(39),
    [sym_comment] = ACTIONS(39),
    [sym_nested_comment] = ACTIONS(39),
    [sym_directive] = ACTIONS(39),
    [aux_sym_boolean_token1] = ACTIONS(39),
    [aux_sym_boolean_token2] = ACTIONS(39),
    [anon_sym_POUND] = ACTIONS(41),
    [sym_string] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(39),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(43), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [6] = 1,
    ACTIONS(45), 1,
      aux_sym_character_token1,
  [10] = 1,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 6,
  [SMALL_STATE(9)] = 10,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(3),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(4),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(8),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(7),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character, 2),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character, 2),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [47] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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

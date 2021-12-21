#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 5
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 8
#define ALIAS_COUNT 0
#define TOKEN_COUNT 5
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 2
#define PRODUCTION_ID_COUNT 1

enum {
  sym__ws = 1,
  sym_comment = 2,
  sym_nested_comment = 3,
  sym_directive = 4,
  sym_source = 5,
  sym__gap = 6,
  aux_sym_source_repeat1 = 7,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__ws] = "_ws",
  [sym_comment] = "comment",
  [sym_nested_comment] = "nested_comment",
  [sym_directive] = "directive",
  [sym_source] = "source",
  [sym__gap] = "_gap",
  [aux_sym_source_repeat1] = "source_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__ws] = sym__ws,
  [sym_comment] = sym_comment,
  [sym_nested_comment] = sym_nested_comment,
  [sym_directive] = sym_directive,
  [sym_source] = sym_source,
  [sym__gap] = sym__gap,
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
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym__gap] = {
    .visible = false,
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
      if (eof) ADVANCE(6);
      if (lookahead == '#') ADVANCE(5);
      if (lookahead == ';') ADVANCE(9);
      if (sym__ws_character_set_1(lookahead)) ADVANCE(7);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(13);
      if (lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          lookahead == '|') ADVANCE(12);
      if (sym__ws_character_set_1(lookahead)) ADVANCE(12);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead == '#') ADVANCE(11);
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
      if (lookahead == '|') ADVANCE(4);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym__ws);
      if (sym__ws_character_set_1(lookahead)) ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_nested_comment);
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead == '|') ADVANCE(2);
      if (sym__ws_character_set_1(lookahead)) ADVANCE(3);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_nested_comment);
      if (lookahead == '\n') ADVANCE(10);
      if (lookahead == '|') ADVANCE(2);
      if (sym__ws_character_set_1(lookahead)) ADVANCE(3);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_directive);
      if (lookahead == '\n') ADVANCE(13);
      if (lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          lookahead == '|') ADVANCE(12);
      if (sym__ws_character_set_1(lookahead)) ADVANCE(12);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_directive);
      if (sym__ws_character_set_1(lookahead)) ADVANCE(13);
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
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__ws] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_nested_comment] = ACTIONS(1),
    [sym_directive] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(4),
    [sym__gap] = STATE(2),
    [aux_sym_source_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__ws] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_nested_comment] = ACTIONS(5),
    [sym_directive] = ACTIONS(5),
  },
  [2] = {
    [sym__gap] = STATE(3),
    [aux_sym_source_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym__ws] = ACTIONS(9),
    [sym_comment] = ACTIONS(9),
    [sym_nested_comment] = ACTIONS(9),
    [sym_directive] = ACTIONS(9),
  },
  [3] = {
    [sym__gap] = STATE(3),
    [aux_sym_source_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(11),
    [sym__ws] = ACTIONS(13),
    [sym_comment] = ACTIONS(13),
    [sym_nested_comment] = ACTIONS(13),
    [sym_directive] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(16), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(3),
  [16] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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

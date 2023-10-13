#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 43
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 27
#define ALIAS_COUNT 0
#define TOKEN_COUNT 15
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  sym_comment = 1,
  anon_sym_CREATE = 2,
  anon_sym_CONTENT = 3,
  aux_sym_target_table_token1 = 4,
  sym_open_curly = 5,
  sym_close_curly = 6,
  sym_comma = 7,
  anon_sym_COLON = 8,
  anon_sym_SQUOTE = 9,
  aux_sym_key_token1 = 10,
  anon_sym_BSLASH = 11,
  aux_sym_key_token2 = 12,
  anon_sym_DQUOTE = 13,
  aux_sym_key_token3 = 14,
  sym_source_file = 15,
  sym_statement = 16,
  sym_create_statement = 17,
  sym_target_table = 18,
  sym_object = 19,
  sym_property = 20,
  sym_key = 21,
  sym_value = 22,
  aux_sym_source_file_repeat1 = 23,
  aux_sym_object_repeat1 = 24,
  aux_sym_key_repeat1 = 25,
  aux_sym_key_repeat2 = 26,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_CREATE] = "CREATE",
  [anon_sym_CONTENT] = "CONTENT",
  [aux_sym_target_table_token1] = "target_table_token1",
  [sym_open_curly] = "open_curly",
  [sym_close_curly] = "close_curly",
  [sym_comma] = "comma",
  [anon_sym_COLON] = ":",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_key_token1] = "key_token1",
  [anon_sym_BSLASH] = "\\",
  [aux_sym_key_token2] = "key_token2",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_key_token3] = "key_token3",
  [sym_source_file] = "source_file",
  [sym_statement] = "statement",
  [sym_create_statement] = "create_statement",
  [sym_target_table] = "target_table",
  [sym_object] = "object",
  [sym_property] = "property",
  [sym_key] = "key",
  [sym_value] = "value",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_object_repeat1] = "object_repeat1",
  [aux_sym_key_repeat1] = "key_repeat1",
  [aux_sym_key_repeat2] = "key_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [anon_sym_CREATE] = anon_sym_CREATE,
  [anon_sym_CONTENT] = anon_sym_CONTENT,
  [aux_sym_target_table_token1] = aux_sym_target_table_token1,
  [sym_open_curly] = sym_open_curly,
  [sym_close_curly] = sym_close_curly,
  [sym_comma] = sym_comma,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_key_token1] = aux_sym_key_token1,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [aux_sym_key_token2] = aux_sym_key_token2,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_key_token3] = aux_sym_key_token3,
  [sym_source_file] = sym_source_file,
  [sym_statement] = sym_statement,
  [sym_create_statement] = sym_create_statement,
  [sym_target_table] = sym_target_table,
  [sym_object] = sym_object,
  [sym_property] = sym_property,
  [sym_key] = sym_key,
  [sym_value] = sym_value,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_object_repeat1] = aux_sym_object_repeat1,
  [aux_sym_key_repeat1] = aux_sym_key_repeat1,
  [aux_sym_key_repeat2] = aux_sym_key_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_CREATE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CONTENT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_target_table_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_open_curly] = {
    .visible = true,
    .named = true,
  },
  [sym_close_curly] = {
    .visible = true,
    .named = true,
  },
  [sym_comma] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_key_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_key_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_key_token3] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_create_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_target_table] = {
    .visible = true,
    .named = true,
  },
  [sym_object] = {
    .visible = true,
    .named = true,
  },
  [sym_property] = {
    .visible = true,
    .named = true,
  },
  [sym_key] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_object_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_key_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_key_repeat2] = {
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
  [4] = 2,
  [5] = 5,
  [6] = 3,
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
  [30] = 12,
  [31] = 31,
  [32] = 13,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(20);
      if (lookahead == '"') ADVANCE(40);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == ',') ADVANCE(28);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ':') ADVANCE(29);
      if (lookahead == 'C') ADVANCE(16);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == '{') ADVANCE(26);
      if (lookahead == '}') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(2);
      if (lookahead == '*') ADVANCE(1);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(2);
      if (lookahead == '*') ADVANCE(1);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(37);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(40);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == '-') ADVANCE(34);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(32);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(2);
      if (lookahead == '/') ADVANCE(22);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(22);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == 'A') ADVANCE(19);
      END_STATE();
    case 11:
      if (lookahead == 'E') ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == 'E') ADVANCE(23);
      END_STATE();
    case 13:
      if (lookahead == 'E') ADVANCE(15);
      END_STATE();
    case 14:
      if (lookahead == 'N') ADVANCE(18);
      END_STATE();
    case 15:
      if (lookahead == 'N') ADVANCE(17);
      END_STATE();
    case 16:
      if (lookahead == 'O') ADVANCE(14);
      if (lookahead == 'R') ADVANCE(11);
      END_STATE();
    case 17:
      if (lookahead == 'T') ADVANCE(24);
      END_STATE();
    case 18:
      if (lookahead == 'T') ADVANCE(13);
      END_STATE();
    case 19:
      if (lookahead == 'T') ADVANCE(12);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(2);
      if (lookahead == '*') ADVANCE(1);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_CREATE);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_CONTENT);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_target_table_token1);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_open_curly);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_close_curly);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_comma);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_key_token1);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == '-') ADVANCE(34);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(31);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '*') ADVANCE(2);
      if (lookahead == '/') ADVANCE(22);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '-') ADVANCE(22);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_key_token2);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_key_token2);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(36);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_key_token2);
      if (lookahead == '*') ADVANCE(2);
      if (lookahead == '/') ADVANCE(22);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_key_token2);
      if (lookahead == '-') ADVANCE(22);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_key_token3);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_key_token3);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(41);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_key_token3);
      if (lookahead == '*') ADVANCE(2);
      if (lookahead == '/') ADVANCE(22);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_key_token3);
      if (lookahead == '-') ADVANCE(22);
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
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_CREATE] = ACTIONS(1),
    [anon_sym_CONTENT] = ACTIONS(1),
    [sym_open_curly] = ACTIONS(1),
    [sym_close_curly] = ACTIONS(1),
    [sym_comma] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(42),
    [sym_statement] = STATE(7),
    [sym_create_statement] = STATE(34),
    [aux_sym_source_file_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [anon_sym_CREATE] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_close_curly,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    STATE(41), 1,
      sym_key,
    STATE(6), 2,
      sym_property,
      aux_sym_object_repeat1,
  [20] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      sym_close_curly,
    STATE(41), 1,
      sym_key,
    STATE(5), 2,
      sym_property,
      aux_sym_object_repeat1,
  [40] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      sym_close_curly,
    STATE(41), 1,
      sym_key,
    STATE(3), 2,
      sym_property,
      aux_sym_object_repeat1,
  [60] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_close_curly,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(26), 1,
      anon_sym_DQUOTE,
    STATE(41), 1,
      sym_key,
    STATE(5), 2,
      sym_property,
      aux_sym_object_repeat1,
  [80] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      sym_close_curly,
    STATE(41), 1,
      sym_key,
    STATE(5), 2,
      sym_property,
      aux_sym_object_repeat1,
  [100] = 5,
    ACTIONS(9), 1,
      anon_sym_CREATE,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 1,
      sym_comment,
    STATE(34), 1,
      sym_create_statement,
    STATE(9), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
  [117] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      sym_open_curly,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    STATE(22), 1,
      sym_value,
    STATE(23), 1,
      sym_object,
  [136] = 5,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(46), 1,
      anon_sym_CREATE,
    STATE(34), 1,
      sym_create_statement,
    STATE(9), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
  [153] = 5,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_SQUOTE,
    ACTIONS(53), 1,
      aux_sym_key_token1,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    STATE(18), 1,
      aux_sym_key_repeat1,
  [169] = 5,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_SQUOTE,
    ACTIONS(59), 1,
      aux_sym_key_token1,
    ACTIONS(62), 1,
      anon_sym_BSLASH,
    STATE(11), 1,
      aux_sym_key_repeat1,
  [185] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 4,
      sym_close_curly,
      sym_comma,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [195] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 4,
      sym_close_curly,
      sym_comma,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [205] = 5,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(71), 1,
      aux_sym_key_token1,
    STATE(19), 1,
      aux_sym_key_repeat1,
  [221] = 5,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(73), 1,
      anon_sym_BSLASH,
    ACTIONS(75), 1,
      aux_sym_key_token3,
    STATE(21), 1,
      aux_sym_key_repeat2,
  [237] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 4,
      sym_close_curly,
      sym_comma,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [247] = 5,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_BSLASH,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      aux_sym_key_token3,
    STATE(25), 1,
      aux_sym_key_repeat2,
  [263] = 5,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(79), 1,
      anon_sym_SQUOTE,
    ACTIONS(83), 1,
      aux_sym_key_token1,
    STATE(11), 1,
      aux_sym_key_repeat1,
  [279] = 5,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(83), 1,
      aux_sym_key_token1,
    ACTIONS(85), 1,
      anon_sym_SQUOTE,
    STATE(11), 1,
      aux_sym_key_repeat1,
  [295] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 4,
      sym_close_curly,
      sym_comma,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [305] = 5,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_BSLASH,
    ACTIONS(81), 1,
      aux_sym_key_token3,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    STATE(25), 1,
      aux_sym_key_repeat2,
  [321] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      sym_comma,
    ACTIONS(89), 3,
      sym_close_curly,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [333] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 4,
      sym_close_curly,
      sym_comma,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [343] = 5,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(73), 1,
      anon_sym_BSLASH,
    ACTIONS(95), 1,
      aux_sym_key_token3,
    STATE(17), 1,
      aux_sym_key_repeat2,
  [359] = 5,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_BSLASH,
    ACTIONS(100), 1,
      anon_sym_DQUOTE,
    ACTIONS(102), 1,
      aux_sym_key_token3,
    STATE(25), 1,
      aux_sym_key_repeat2,
  [375] = 2,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(100), 3,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
      aux_sym_key_token3,
  [384] = 2,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(57), 3,
      anon_sym_SQUOTE,
      aux_sym_key_token1,
      anon_sym_BSLASH,
  [393] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 3,
      sym_close_curly,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [402] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      sym_open_curly,
    STATE(33), 1,
      sym_object,
  [412] = 1,
    ACTIONS(65), 3,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_CREATE,
  [418] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      aux_sym_target_table_token1,
    STATE(37), 1,
      sym_target_table,
  [428] = 1,
    ACTIONS(67), 3,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_CREATE,
  [434] = 1,
    ACTIONS(111), 3,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_CREATE,
  [440] = 1,
    ACTIONS(113), 3,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_CREATE,
  [446] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_COLON,
  [453] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      anon_sym_CONTENT,
  [460] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_CONTENT,
  [467] = 2,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(121), 1,
      aux_sym_key_token2,
  [474] = 2,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(123), 1,
      aux_sym_key_token2,
  [481] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_COLON,
  [488] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_COLON,
  [495] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 20,
  [SMALL_STATE(4)] = 40,
  [SMALL_STATE(5)] = 60,
  [SMALL_STATE(6)] = 80,
  [SMALL_STATE(7)] = 100,
  [SMALL_STATE(8)] = 117,
  [SMALL_STATE(9)] = 136,
  [SMALL_STATE(10)] = 153,
  [SMALL_STATE(11)] = 169,
  [SMALL_STATE(12)] = 185,
  [SMALL_STATE(13)] = 195,
  [SMALL_STATE(14)] = 205,
  [SMALL_STATE(15)] = 221,
  [SMALL_STATE(16)] = 237,
  [SMALL_STATE(17)] = 247,
  [SMALL_STATE(18)] = 263,
  [SMALL_STATE(19)] = 279,
  [SMALL_STATE(20)] = 295,
  [SMALL_STATE(21)] = 305,
  [SMALL_STATE(22)] = 321,
  [SMALL_STATE(23)] = 333,
  [SMALL_STATE(24)] = 343,
  [SMALL_STATE(25)] = 359,
  [SMALL_STATE(26)] = 375,
  [SMALL_STATE(27)] = 384,
  [SMALL_STATE(28)] = 393,
  [SMALL_STATE(29)] = 402,
  [SMALL_STATE(30)] = 412,
  [SMALL_STATE(31)] = 418,
  [SMALL_STATE(32)] = 428,
  [SMALL_STATE(33)] = 434,
  [SMALL_STATE(34)] = 440,
  [SMALL_STATE(35)] = 446,
  [SMALL_STATE(36)] = 453,
  [SMALL_STATE(37)] = 460,
  [SMALL_STATE(38)] = 467,
  [SMALL_STATE(39)] = 474,
  [SMALL_STATE(40)] = 481,
  [SMALL_STATE(41)] = 488,
  [SMALL_STATE(42)] = 495,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2), SHIFT_REPEAT(14),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2), SHIFT_REPEAT(15),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(31),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_key_repeat1, 2),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_key_repeat1, 2), SHIFT_REPEAT(11),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_key_repeat1, 2), SHIFT_REPEAT(39),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 3),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 2),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 3),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_key_repeat2, 2), SHIFT_REPEAT(38),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_key_repeat2, 2),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_key_repeat2, 2), SHIFT_REPEAT(25),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 4),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_statement, 4),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 3),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_table, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [129] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_surrealdb(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif

#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 73
#define LARGE_STATE_COUNT 13
#define SYMBOL_COUNT 75
#define ALIAS_COUNT 0
#define TOKEN_COUNT 54
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 3

enum ts_symbol_identifiers {
  anon_sym_LF = 1,
  sym_comment = 2,
  anon_sym_lbl = 3,
  aux_sym__text_token1 = 4,
  sym_ascii_string = 5,
  sym_awascii_string = 6,
  sym_ascii_char = 7,
  sym_awascii_char = 8,
  anon_sym_LT = 9,
  anon_sym_GT = 10,
  sym_path_content = 11,
  sym_number = 12,
  sym_float = 13,
  sym_replacement_macro_name = 14,
  sym_replacement_var = 15,
  anon_sym_nop = 16,
  anon_sym_prn = 17,
  anon_sym_pr1 = 18,
  anon_sym_red = 19,
  anon_sym_r3d = 20,
  anon_sym_blo = 21,
  anon_sym_sbm = 22,
  anon_sym_pop = 23,
  anon_sym_dpl = 24,
  anon_sym_srn = 25,
  anon_sym_mrg = 26,
  anon_sym_4dd = 27,
  anon_sym_sub = 28,
  anon_sym_mul = 29,
  anon_sym_div = 30,
  anon_sym_cnt = 31,
  anon_sym_jmp = 32,
  anon_sym_eql = 33,
  anon_sym_lss = 34,
  anon_sym_gr8 = 35,
  anon_sym_lib = 36,
  anon_sym_trm = 37,
  anon_sym_COMMA = 38,
  anon_sym_BANGonce = 39,
  anon_sym_BANGinclude = 40,
  anon_sym_BANGi32 = 41,
  anon_sym_BANGf32 = 42,
  anon_sym_BANGchr = 43,
  anon_sym_BANGstr = 44,
  anon_sym_BANG_i32 = 45,
  anon_sym_BANG_f32 = 46,
  anon_sym_BANG_chr = 47,
  anon_sym_BANG_str = 48,
  sym_macro_name = 49,
  anon_sym_LPAREN = 50,
  anon_sym_RPAREN = 51,
  sym_macro_block_def = 52,
  sym_macro_block_end = 53,
  sym_source_file = 54,
  sym__statement = 55,
  sym_label = 56,
  sym_value = 57,
  sym__text = 58,
  sym_path = 59,
  sym_replacement_macro = 60,
  sym_instruction = 61,
  sym_awatism = 62,
  sym_macro = 63,
  sym_argument_list = 64,
  sym_builtin_macro_name = 65,
  sym_macro_block = 66,
  sym_macro_block_name = 67,
  sym_parameter_list = 68,
  sym_parameter = 69,
  sym__macro_block_statement = 70,
  aux_sym_source_file_repeat1 = 71,
  aux_sym_source_file_repeat2 = 72,
  aux_sym_argument_list_repeat1 = 73,
  aux_sym_macro_block_repeat1 = 74,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [sym_comment] = "comment",
  [anon_sym_lbl] = "lbl",
  [aux_sym__text_token1] = "_text_token1",
  [sym_ascii_string] = "ascii_string",
  [sym_awascii_string] = "awascii_string",
  [sym_ascii_char] = "ascii_char",
  [sym_awascii_char] = "awascii_char",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [sym_path_content] = "path_content",
  [sym_number] = "number",
  [sym_float] = "float",
  [sym_replacement_macro_name] = "replacement_macro_name",
  [sym_replacement_var] = "replacement_var",
  [anon_sym_nop] = "nop",
  [anon_sym_prn] = "prn",
  [anon_sym_pr1] = "pr1",
  [anon_sym_red] = "red",
  [anon_sym_r3d] = "r3d",
  [anon_sym_blo] = "blo",
  [anon_sym_sbm] = "sbm",
  [anon_sym_pop] = "pop",
  [anon_sym_dpl] = "dpl",
  [anon_sym_srn] = "srn",
  [anon_sym_mrg] = "mrg",
  [anon_sym_4dd] = "4dd",
  [anon_sym_sub] = "sub",
  [anon_sym_mul] = "mul",
  [anon_sym_div] = "div",
  [anon_sym_cnt] = "cnt",
  [anon_sym_jmp] = "jmp",
  [anon_sym_eql] = "eql",
  [anon_sym_lss] = "lss",
  [anon_sym_gr8] = "gr8",
  [anon_sym_lib] = "lib",
  [anon_sym_trm] = "trm",
  [anon_sym_COMMA] = ",",
  [anon_sym_BANGonce] = "!once",
  [anon_sym_BANGinclude] = "!include",
  [anon_sym_BANGi32] = "!i32",
  [anon_sym_BANGf32] = "!f32",
  [anon_sym_BANGchr] = "!chr",
  [anon_sym_BANGstr] = "!str",
  [anon_sym_BANG_i32] = "!_i32",
  [anon_sym_BANG_f32] = "!_f32",
  [anon_sym_BANG_chr] = "!_chr",
  [anon_sym_BANG_str] = "!_str",
  [sym_macro_name] = "macro_name",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_macro_block_def] = "macro_block_def",
  [sym_macro_block_end] = "macro_block_end",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_label] = "label",
  [sym_value] = "value",
  [sym__text] = "_text",
  [sym_path] = "path",
  [sym_replacement_macro] = "replacement_macro",
  [sym_instruction] = "instruction",
  [sym_awatism] = "awatism",
  [sym_macro] = "macro",
  [sym_argument_list] = "argument_list",
  [sym_builtin_macro_name] = "builtin_macro_name",
  [sym_macro_block] = "macro_block",
  [sym_macro_block_name] = "macro_block_name",
  [sym_parameter_list] = "parameter_list",
  [sym_parameter] = "parameter",
  [sym__macro_block_statement] = "_macro_block_statement",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
  [aux_sym_macro_block_repeat1] = "macro_block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [sym_comment] = sym_comment,
  [anon_sym_lbl] = anon_sym_lbl,
  [aux_sym__text_token1] = aux_sym__text_token1,
  [sym_ascii_string] = sym_ascii_string,
  [sym_awascii_string] = sym_awascii_string,
  [sym_ascii_char] = sym_ascii_char,
  [sym_awascii_char] = sym_awascii_char,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [sym_path_content] = sym_path_content,
  [sym_number] = sym_number,
  [sym_float] = sym_float,
  [sym_replacement_macro_name] = sym_replacement_macro_name,
  [sym_replacement_var] = sym_replacement_var,
  [anon_sym_nop] = anon_sym_nop,
  [anon_sym_prn] = anon_sym_prn,
  [anon_sym_pr1] = anon_sym_pr1,
  [anon_sym_red] = anon_sym_red,
  [anon_sym_r3d] = anon_sym_r3d,
  [anon_sym_blo] = anon_sym_blo,
  [anon_sym_sbm] = anon_sym_sbm,
  [anon_sym_pop] = anon_sym_pop,
  [anon_sym_dpl] = anon_sym_dpl,
  [anon_sym_srn] = anon_sym_srn,
  [anon_sym_mrg] = anon_sym_mrg,
  [anon_sym_4dd] = anon_sym_4dd,
  [anon_sym_sub] = anon_sym_sub,
  [anon_sym_mul] = anon_sym_mul,
  [anon_sym_div] = anon_sym_div,
  [anon_sym_cnt] = anon_sym_cnt,
  [anon_sym_jmp] = anon_sym_jmp,
  [anon_sym_eql] = anon_sym_eql,
  [anon_sym_lss] = anon_sym_lss,
  [anon_sym_gr8] = anon_sym_gr8,
  [anon_sym_lib] = anon_sym_lib,
  [anon_sym_trm] = anon_sym_trm,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_BANGonce] = anon_sym_BANGonce,
  [anon_sym_BANGinclude] = anon_sym_BANGinclude,
  [anon_sym_BANGi32] = anon_sym_BANGi32,
  [anon_sym_BANGf32] = anon_sym_BANGf32,
  [anon_sym_BANGchr] = anon_sym_BANGchr,
  [anon_sym_BANGstr] = anon_sym_BANGstr,
  [anon_sym_BANG_i32] = anon_sym_BANG_i32,
  [anon_sym_BANG_f32] = anon_sym_BANG_f32,
  [anon_sym_BANG_chr] = anon_sym_BANG_chr,
  [anon_sym_BANG_str] = anon_sym_BANG_str,
  [sym_macro_name] = sym_macro_name,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_macro_block_def] = sym_macro_block_def,
  [sym_macro_block_end] = sym_macro_block_end,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_label] = sym_label,
  [sym_value] = sym_value,
  [sym__text] = sym__text,
  [sym_path] = sym_path,
  [sym_replacement_macro] = sym_replacement_macro,
  [sym_instruction] = sym_instruction,
  [sym_awatism] = sym_awatism,
  [sym_macro] = sym_macro,
  [sym_argument_list] = sym_argument_list,
  [sym_builtin_macro_name] = sym_builtin_macro_name,
  [sym_macro_block] = sym_macro_block,
  [sym_macro_block_name] = sym_macro_block_name,
  [sym_parameter_list] = sym_parameter_list,
  [sym_parameter] = sym_parameter,
  [sym__macro_block_statement] = sym__macro_block_statement,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_source_file_repeat2] = aux_sym_source_file_repeat2,
  [aux_sym_argument_list_repeat1] = aux_sym_argument_list_repeat1,
  [aux_sym_macro_block_repeat1] = aux_sym_macro_block_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_lbl] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__text_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_ascii_string] = {
    .visible = true,
    .named = true,
  },
  [sym_awascii_string] = {
    .visible = true,
    .named = true,
  },
  [sym_ascii_char] = {
    .visible = true,
    .named = true,
  },
  [sym_awascii_char] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_path_content] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_replacement_macro_name] = {
    .visible = true,
    .named = true,
  },
  [sym_replacement_var] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_nop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_prn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pr1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_red] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_r3d] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_blo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sbm] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dpl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_srn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mrg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_4dd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sub] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mul] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_div] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cnt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jmp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_eql] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lss] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gr8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lib] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_trm] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANGonce] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANGinclude] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANGi32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANGf32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANGchr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANGstr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_i32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_f32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_chr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_str] = {
    .visible = true,
    .named = false,
  },
  [sym_macro_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_macro_block_def] = {
    .visible = true,
    .named = true,
  },
  [sym_macro_block_end] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym__text] = {
    .visible = false,
    .named = true,
  },
  [sym_path] = {
    .visible = true,
    .named = true,
  },
  [sym_replacement_macro] = {
    .visible = true,
    .named = true,
  },
  [sym_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_awatism] = {
    .visible = true,
    .named = true,
  },
  [sym_macro] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_list] = {
    .visible = true,
    .named = true,
  },
  [sym_builtin_macro_name] = {
    .visible = true,
    .named = true,
  },
  [sym_macro_block] = {
    .visible = true,
    .named = true,
  },
  [sym_macro_block_name] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym__macro_block_statement] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_file_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argument_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_macro_block_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_argument = 1,
  field_kind = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_argument] = "argument",
  [field_kind] = "kind",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_kind, 0},
  [1] =
    {field_argument, 1},
    {field_kind, 0},
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
  [10] = 9,
  [11] = 9,
  [12] = 9,
  [13] = 13,
  [14] = 13,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 17,
  [19] = 16,
  [20] = 20,
  [21] = 20,
  [22] = 22,
  [23] = 23,
  [24] = 22,
  [25] = 23,
  [26] = 26,
  [27] = 27,
  [28] = 26,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 31,
  [34] = 34,
  [35] = 35,
  [36] = 32,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 38,
  [43] = 41,
  [44] = 39,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 49,
  [58] = 58,
  [59] = 45,
  [60] = 56,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 67,
  [71] = 63,
  [72] = 64,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(65);
      ADVANCE_MAP(
        '!', 7,
        '"', 4,
        '$', 55,
        '\'', 10,
        '(', 150,
        ')', 151,
        ',', 109,
        '4', 81,
        ';', 68,
        '<', 77,
        '>', 78,
        'a', 6,
        'b', 34,
        'c', 38,
        'd', 29,
        'e', 47,
        'g', 48,
        'j', 35,
        'l', 21,
        'm', 49,
        'n', 42,
        'p', 43,
        'r', 13,
        's', 20,
        't', 50,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '\n', 66,
        '!', 9,
        '$', 55,
        '4', 22,
        ';', 68,
        'b', 34,
        'c', 38,
        'd', 29,
        'e', 47,
        'g', 48,
        'j', 35,
        'l', 21,
        'm', 49,
        'n', 42,
        'p', 43,
        'r', 13,
        's', 20,
        't', 50,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '!', 8,
        '$', 55,
        '4', 22,
        ';', 68,
        'b', 34,
        'c', 38,
        'd', 29,
        'e', 47,
        'g', 48,
        'j', 35,
        'l', 21,
        'm', 49,
        'n', 42,
        'p', 43,
        'r', 13,
        's', 20,
        't', 50,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '$') ADVANCE(55);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == ';') ADVANCE(68);
      if (lookahead == '<') ADVANCE(77);
      if (lookahead == 'a') ADVANCE(70);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(73);
      if (lookahead == '\\') ADVANCE(57);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(74);
      if (lookahead == '\\') ADVANCE(59);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(11);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '$', 56,
        '_', 130,
        'c', 137,
        'd', 133,
        'e', 140,
        'f', 124,
        'i', 125,
        'o', 141,
        's', 146,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        '$', 56,
        '_', 130,
        'c', 137,
        'e', 140,
        'f', 124,
        'i', 125,
        'o', 141,
        's', 146,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 9:
      if (lookahead == '$') ADVANCE(56);
      if (lookahead == '_') ADVANCE(130);
      if (lookahead == 'c') ADVANCE(137);
      if (lookahead == 'f') ADVANCE(124);
      if (lookahead == 'i') ADVANCE(125);
      if (lookahead == 'o') ADVANCE(141);
      if (lookahead == 's') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 10:
      if (lookahead == '\'') ADVANCE(75);
      if (lookahead == '\\') ADVANCE(58);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '\'') ADVANCE(76);
      if (lookahead == '\\') ADVANCE(60);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '1') ADVANCE(89);
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 13:
      if (lookahead == '3') ADVANCE(24);
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 14:
      if (lookahead == '8') ADVANCE(106);
      END_STATE();
    case 15:
      if (lookahead == ';') ADVANCE(68);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 16:
      if (lookahead == ';') ADVANCE(67);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(80);
      END_STATE();
    case 17:
      if (lookahead == '_') ADVANCE(130);
      if (lookahead == 'c') ADVANCE(137);
      if (lookahead == 'd') ADVANCE(133);
      if (lookahead == 'f') ADVANCE(124);
      if (lookahead == 'i') ADVANCE(125);
      if (lookahead == 'o') ADVANCE(141);
      if (lookahead == 's') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 18:
      if (lookahead == 'b') ADVANCE(107);
      END_STATE();
    case 19:
      if (lookahead == 'b') ADVANCE(99);
      END_STATE();
    case 20:
      if (lookahead == 'b') ADVANCE(36);
      if (lookahead == 'r') ADVANCE(39);
      if (lookahead == 'u') ADVANCE(19);
      END_STATE();
    case 21:
      if (lookahead == 'b') ADVANCE(32);
      if (lookahead == 'i') ADVANCE(18);
      if (lookahead == 's') ADVANCE(51);
      END_STATE();
    case 22:
      if (lookahead == 'd') ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == 'd') ADVANCE(98);
      END_STATE();
    case 24:
      if (lookahead == 'd') ADVANCE(91);
      END_STATE();
    case 25:
      if (lookahead == 'd') ADVANCE(90);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(153);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 28:
      if (lookahead == 'g') ADVANCE(97);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(53);
      if (lookahead == 'p') ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(95);
      END_STATE();
    case 31:
      if (lookahead == 'l') ADVANCE(104);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(100);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 35:
      if (lookahead == 'm') ADVANCE(44);
      END_STATE();
    case 36:
      if (lookahead == 'm') ADVANCE(93);
      END_STATE();
    case 37:
      if (lookahead == 'm') ADVANCE(108);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 41:
      if (lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 42:
      if (lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 43:
      if (lookahead == 'o') ADVANCE(46);
      if (lookahead == 'r') ADVANCE(12);
      END_STATE();
    case 44:
      if (lookahead == 'p') ADVANCE(103);
      END_STATE();
    case 45:
      if (lookahead == 'p') ADVANCE(87);
      END_STATE();
    case 46:
      if (lookahead == 'p') ADVANCE(94);
      END_STATE();
    case 47:
      if (lookahead == 'q') ADVANCE(31);
      END_STATE();
    case 48:
      if (lookahead == 'r') ADVANCE(14);
      END_STATE();
    case 49:
      if (lookahead == 'r') ADVANCE(28);
      if (lookahead == 'u') ADVANCE(33);
      END_STATE();
    case 50:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 51:
      if (lookahead == 's') ADVANCE(105);
      END_STATE();
    case 52:
      if (lookahead == 't') ADVANCE(102);
      END_STATE();
    case 53:
      if (lookahead == 'v') ADVANCE(101);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 57:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 58:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 59:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 60:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 61:
      if (eof) ADVANCE(65);
      ADVANCE_MAP(
        '\n', 66,
        '!', 17,
        '4', 22,
        ';', 68,
        'b', 34,
        'c', 38,
        'd', 29,
        'e', 47,
        'g', 48,
        'j', 35,
        'l', 21,
        'm', 49,
        'n', 42,
        'p', 43,
        'r', 13,
        's', 20,
        't', 50,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(61);
      END_STATE();
    case 62:
      if (eof) ADVANCE(65);
      ADVANCE_MAP(
        '\n', 66,
        '!', 8,
        '$', 55,
        ',', 109,
        '4', 22,
        ';', 68,
        'b', 34,
        'c', 38,
        'd', 29,
        'e', 47,
        'g', 48,
        'j', 35,
        'l', 21,
        'm', 49,
        'n', 42,
        'p', 43,
        'r', 13,
        's', 20,
        't', 50,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(62);
      END_STATE();
    case 63:
      if (eof) ADVANCE(65);
      ADVANCE_MAP(
        '\n', 66,
        '!', 27,
        '"', 4,
        '$', 55,
        '\'', 10,
        ';', 68,
        '<', 77,
        'a', 70,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 64:
      if (eof) ADVANCE(65);
      ADVANCE_MAP(
        '!', 17,
        '4', 22,
        ';', 68,
        'b', 34,
        'c', 38,
        'd', 29,
        'e', 47,
        'g', 48,
        'j', 35,
        'l', 21,
        'm', 49,
        'n', 42,
        'p', 43,
        'r', 13,
        's', 20,
        't', 50,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == '<' ||
          lookahead == '>') ADVANCE(68);
      if (lookahead != 0) ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_lbl);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '.') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_ascii_string);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_awascii_string);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_ascii_char);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_awascii_char);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_path_content);
      if (lookahead == ';') ADVANCE(67);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(80);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_path_content);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == 'd') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_replacement_macro_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_replacement_var);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_nop);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_prn);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_pr1);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_red);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_r3d);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_blo);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_sbm);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_pop);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_dpl);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_srn);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_mrg);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_4dd);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_sub);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_mul);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_div);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_cnt);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_jmp);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_eql);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_lss);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_gr8);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_lib);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_trm);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_BANGonce);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_BANGinclude);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_BANGi32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_BANGf32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_BANGchr);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_BANGstr);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_BANG_i32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_BANG_f32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_BANG_chr);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_BANG_str);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '2') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '2') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '2') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '2') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '3') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '3') ADVANCE(121);
      if (lookahead == 'n') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '3') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '3') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'c') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'c') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'c') ADVANCE(138);
      if (lookahead == 'f') ADVANCE(126);
      if (lookahead == 'i') ADVANCE(127);
      if (lookahead == 's') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'd') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'd') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'e') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'e') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'e') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'f') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'h') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'h') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'l') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'n') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'n') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'r') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'r') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'r') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'r') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 't') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 't') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'u') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_macro_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_macro_block_def);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_macro_block_end);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_macro_block_end);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 64},
  [2] = {.lex_state = 62},
  [3] = {.lex_state = 62},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 61},
  [6] = {.lex_state = 61},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 61},
  [9] = {.lex_state = 62},
  [10] = {.lex_state = 61},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 61},
  [13] = {.lex_state = 63},
  [14] = {.lex_state = 63},
  [15] = {.lex_state = 63},
  [16] = {.lex_state = 63},
  [17] = {.lex_state = 63},
  [18] = {.lex_state = 63},
  [19] = {.lex_state = 63},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 63},
  [23] = {.lex_state = 63},
  [24] = {.lex_state = 63},
  [25] = {.lex_state = 63},
  [26] = {.lex_state = 62},
  [27] = {.lex_state = 62},
  [28] = {.lex_state = 62},
  [29] = {.lex_state = 62},
  [30] = {.lex_state = 62},
  [31] = {.lex_state = 62},
  [32] = {.lex_state = 62},
  [33] = {.lex_state = 62},
  [34] = {.lex_state = 62},
  [35] = {.lex_state = 62},
  [36] = {.lex_state = 62},
  [37] = {.lex_state = 62},
  [38] = {.lex_state = 62},
  [39] = {.lex_state = 62},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 62},
  [42] = {.lex_state = 62},
  [43] = {.lex_state = 62},
  [44] = {.lex_state = 62},
  [45] = {.lex_state = 62},
  [46] = {.lex_state = 62},
  [47] = {.lex_state = 62},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 62},
  [50] = {.lex_state = 62},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 62},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 62},
  [56] = {.lex_state = 62},
  [57] = {.lex_state = 62},
  [58] = {.lex_state = 62},
  [59] = {.lex_state = 62},
  [60] = {.lex_state = 62},
  [61] = {.lex_state = 62},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 16},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 15},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 15},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 16},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_lbl] = ACTIONS(1),
    [sym_ascii_string] = ACTIONS(1),
    [sym_awascii_string] = ACTIONS(1),
    [sym_ascii_char] = ACTIONS(1),
    [sym_awascii_char] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [sym_replacement_macro_name] = ACTIONS(1),
    [sym_replacement_var] = ACTIONS(1),
    [anon_sym_nop] = ACTIONS(1),
    [anon_sym_prn] = ACTIONS(1),
    [anon_sym_pr1] = ACTIONS(1),
    [anon_sym_red] = ACTIONS(1),
    [anon_sym_r3d] = ACTIONS(1),
    [anon_sym_blo] = ACTIONS(1),
    [anon_sym_sbm] = ACTIONS(1),
    [anon_sym_pop] = ACTIONS(1),
    [anon_sym_dpl] = ACTIONS(1),
    [anon_sym_srn] = ACTIONS(1),
    [anon_sym_mrg] = ACTIONS(1),
    [anon_sym_4dd] = ACTIONS(1),
    [anon_sym_sub] = ACTIONS(1),
    [anon_sym_mul] = ACTIONS(1),
    [anon_sym_div] = ACTIONS(1),
    [anon_sym_cnt] = ACTIONS(1),
    [anon_sym_jmp] = ACTIONS(1),
    [anon_sym_eql] = ACTIONS(1),
    [anon_sym_lss] = ACTIONS(1),
    [anon_sym_gr8] = ACTIONS(1),
    [anon_sym_lib] = ACTIONS(1),
    [anon_sym_trm] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_BANGonce] = ACTIONS(1),
    [anon_sym_BANGinclude] = ACTIONS(1),
    [anon_sym_BANGi32] = ACTIONS(1),
    [anon_sym_BANGf32] = ACTIONS(1),
    [anon_sym_BANGchr] = ACTIONS(1),
    [anon_sym_BANGstr] = ACTIONS(1),
    [anon_sym_BANG_i32] = ACTIONS(1),
    [anon_sym_BANG_f32] = ACTIONS(1),
    [anon_sym_BANG_chr] = ACTIONS(1),
    [anon_sym_BANG_str] = ACTIONS(1),
    [sym_macro_name] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_macro_block_def] = ACTIONS(1),
    [sym_macro_block_end] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(62),
    [sym__statement] = STATE(30),
    [sym_label] = STATE(30),
    [sym_instruction] = STATE(30),
    [sym_awatism] = STATE(19),
    [sym_macro] = STATE(30),
    [sym_builtin_macro_name] = STATE(18),
    [sym_macro_block] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_lbl] = ACTIONS(7),
    [anon_sym_nop] = ACTIONS(9),
    [anon_sym_prn] = ACTIONS(9),
    [anon_sym_pr1] = ACTIONS(9),
    [anon_sym_red] = ACTIONS(9),
    [anon_sym_r3d] = ACTIONS(9),
    [anon_sym_blo] = ACTIONS(9),
    [anon_sym_sbm] = ACTIONS(9),
    [anon_sym_pop] = ACTIONS(9),
    [anon_sym_dpl] = ACTIONS(9),
    [anon_sym_srn] = ACTIONS(9),
    [anon_sym_mrg] = ACTIONS(9),
    [anon_sym_4dd] = ACTIONS(9),
    [anon_sym_sub] = ACTIONS(9),
    [anon_sym_mul] = ACTIONS(9),
    [anon_sym_div] = ACTIONS(9),
    [anon_sym_cnt] = ACTIONS(9),
    [anon_sym_jmp] = ACTIONS(9),
    [anon_sym_eql] = ACTIONS(9),
    [anon_sym_lss] = ACTIONS(9),
    [anon_sym_gr8] = ACTIONS(9),
    [anon_sym_lib] = ACTIONS(9),
    [anon_sym_trm] = ACTIONS(9),
    [anon_sym_BANGonce] = ACTIONS(11),
    [anon_sym_BANGinclude] = ACTIONS(11),
    [anon_sym_BANGi32] = ACTIONS(11),
    [anon_sym_BANGf32] = ACTIONS(11),
    [anon_sym_BANGchr] = ACTIONS(11),
    [anon_sym_BANGstr] = ACTIONS(11),
    [anon_sym_BANG_i32] = ACTIONS(11),
    [anon_sym_BANG_f32] = ACTIONS(11),
    [anon_sym_BANG_chr] = ACTIONS(11),
    [anon_sym_BANG_str] = ACTIONS(11),
    [sym_macro_name] = ACTIONS(13),
    [sym_macro_block_def] = ACTIONS(15),
  },
  [2] = {
    [sym_label] = STATE(47),
    [sym_replacement_macro] = STATE(47),
    [sym_instruction] = STATE(47),
    [sym_awatism] = STATE(16),
    [sym_macro] = STATE(47),
    [sym_builtin_macro_name] = STATE(17),
    [sym__macro_block_statement] = STATE(47),
    [aux_sym_source_file_repeat1] = STATE(9),
    [anon_sym_LF] = ACTIONS(17),
    [sym_comment] = ACTIONS(19),
    [anon_sym_lbl] = ACTIONS(21),
    [sym_replacement_macro_name] = ACTIONS(23),
    [sym_replacement_var] = ACTIONS(25),
    [anon_sym_nop] = ACTIONS(27),
    [anon_sym_prn] = ACTIONS(27),
    [anon_sym_pr1] = ACTIONS(27),
    [anon_sym_red] = ACTIONS(27),
    [anon_sym_r3d] = ACTIONS(27),
    [anon_sym_blo] = ACTIONS(27),
    [anon_sym_sbm] = ACTIONS(27),
    [anon_sym_pop] = ACTIONS(27),
    [anon_sym_dpl] = ACTIONS(27),
    [anon_sym_srn] = ACTIONS(27),
    [anon_sym_mrg] = ACTIONS(27),
    [anon_sym_4dd] = ACTIONS(27),
    [anon_sym_sub] = ACTIONS(27),
    [anon_sym_mul] = ACTIONS(27),
    [anon_sym_div] = ACTIONS(27),
    [anon_sym_cnt] = ACTIONS(27),
    [anon_sym_jmp] = ACTIONS(27),
    [anon_sym_eql] = ACTIONS(27),
    [anon_sym_lss] = ACTIONS(27),
    [anon_sym_gr8] = ACTIONS(27),
    [anon_sym_lib] = ACTIONS(27),
    [anon_sym_trm] = ACTIONS(27),
    [anon_sym_BANGonce] = ACTIONS(29),
    [anon_sym_BANGinclude] = ACTIONS(29),
    [anon_sym_BANGi32] = ACTIONS(29),
    [anon_sym_BANGf32] = ACTIONS(29),
    [anon_sym_BANGchr] = ACTIONS(29),
    [anon_sym_BANGstr] = ACTIONS(29),
    [anon_sym_BANG_i32] = ACTIONS(29),
    [anon_sym_BANG_f32] = ACTIONS(29),
    [anon_sym_BANG_chr] = ACTIONS(29),
    [anon_sym_BANG_str] = ACTIONS(29),
    [sym_macro_name] = ACTIONS(31),
    [sym_macro_block_end] = ACTIONS(33),
  },
  [3] = {
    [sym_label] = STATE(47),
    [sym_replacement_macro] = STATE(47),
    [sym_instruction] = STATE(47),
    [sym_awatism] = STATE(16),
    [sym_macro] = STATE(47),
    [sym_builtin_macro_name] = STATE(17),
    [sym__macro_block_statement] = STATE(47),
    [aux_sym_source_file_repeat1] = STATE(9),
    [anon_sym_LF] = ACTIONS(17),
    [sym_comment] = ACTIONS(19),
    [anon_sym_lbl] = ACTIONS(21),
    [sym_replacement_macro_name] = ACTIONS(23),
    [sym_replacement_var] = ACTIONS(25),
    [anon_sym_nop] = ACTIONS(27),
    [anon_sym_prn] = ACTIONS(27),
    [anon_sym_pr1] = ACTIONS(27),
    [anon_sym_red] = ACTIONS(27),
    [anon_sym_r3d] = ACTIONS(27),
    [anon_sym_blo] = ACTIONS(27),
    [anon_sym_sbm] = ACTIONS(27),
    [anon_sym_pop] = ACTIONS(27),
    [anon_sym_dpl] = ACTIONS(27),
    [anon_sym_srn] = ACTIONS(27),
    [anon_sym_mrg] = ACTIONS(27),
    [anon_sym_4dd] = ACTIONS(27),
    [anon_sym_sub] = ACTIONS(27),
    [anon_sym_mul] = ACTIONS(27),
    [anon_sym_div] = ACTIONS(27),
    [anon_sym_cnt] = ACTIONS(27),
    [anon_sym_jmp] = ACTIONS(27),
    [anon_sym_eql] = ACTIONS(27),
    [anon_sym_lss] = ACTIONS(27),
    [anon_sym_gr8] = ACTIONS(27),
    [anon_sym_lib] = ACTIONS(27),
    [anon_sym_trm] = ACTIONS(27),
    [anon_sym_BANGonce] = ACTIONS(29),
    [anon_sym_BANGinclude] = ACTIONS(29),
    [anon_sym_BANGi32] = ACTIONS(29),
    [anon_sym_BANGf32] = ACTIONS(29),
    [anon_sym_BANGchr] = ACTIONS(29),
    [anon_sym_BANGstr] = ACTIONS(29),
    [anon_sym_BANG_i32] = ACTIONS(29),
    [anon_sym_BANG_f32] = ACTIONS(29),
    [anon_sym_BANG_chr] = ACTIONS(29),
    [anon_sym_BANG_str] = ACTIONS(29),
    [sym_macro_name] = ACTIONS(31),
    [sym_macro_block_end] = ACTIONS(35),
  },
  [4] = {
    [sym_label] = STATE(47),
    [sym_replacement_macro] = STATE(47),
    [sym_instruction] = STATE(47),
    [sym_awatism] = STATE(16),
    [sym_macro] = STATE(47),
    [sym_builtin_macro_name] = STATE(17),
    [sym__macro_block_statement] = STATE(47),
    [aux_sym_source_file_repeat1] = STATE(11),
    [anon_sym_LF] = ACTIONS(37),
    [sym_comment] = ACTIONS(19),
    [anon_sym_lbl] = ACTIONS(21),
    [sym_replacement_macro_name] = ACTIONS(23),
    [sym_replacement_var] = ACTIONS(25),
    [anon_sym_nop] = ACTIONS(27),
    [anon_sym_prn] = ACTIONS(27),
    [anon_sym_pr1] = ACTIONS(27),
    [anon_sym_red] = ACTIONS(27),
    [anon_sym_r3d] = ACTIONS(27),
    [anon_sym_blo] = ACTIONS(27),
    [anon_sym_sbm] = ACTIONS(27),
    [anon_sym_pop] = ACTIONS(27),
    [anon_sym_dpl] = ACTIONS(27),
    [anon_sym_srn] = ACTIONS(27),
    [anon_sym_mrg] = ACTIONS(27),
    [anon_sym_4dd] = ACTIONS(27),
    [anon_sym_sub] = ACTIONS(27),
    [anon_sym_mul] = ACTIONS(27),
    [anon_sym_div] = ACTIONS(27),
    [anon_sym_cnt] = ACTIONS(27),
    [anon_sym_jmp] = ACTIONS(27),
    [anon_sym_eql] = ACTIONS(27),
    [anon_sym_lss] = ACTIONS(27),
    [anon_sym_gr8] = ACTIONS(27),
    [anon_sym_lib] = ACTIONS(27),
    [anon_sym_trm] = ACTIONS(27),
    [anon_sym_BANGonce] = ACTIONS(29),
    [anon_sym_BANGinclude] = ACTIONS(29),
    [anon_sym_BANGi32] = ACTIONS(29),
    [anon_sym_BANGf32] = ACTIONS(29),
    [anon_sym_BANGchr] = ACTIONS(29),
    [anon_sym_BANGstr] = ACTIONS(29),
    [anon_sym_BANG_i32] = ACTIONS(29),
    [anon_sym_BANG_f32] = ACTIONS(29),
    [anon_sym_BANG_chr] = ACTIONS(29),
    [anon_sym_BANG_str] = ACTIONS(29),
    [sym_macro_name] = ACTIONS(31),
  },
  [5] = {
    [sym__statement] = STATE(58),
    [sym_label] = STATE(58),
    [sym_instruction] = STATE(58),
    [sym_awatism] = STATE(19),
    [sym_macro] = STATE(58),
    [sym_builtin_macro_name] = STATE(18),
    [sym_macro_block] = STATE(58),
    [aux_sym_source_file_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(41),
    [sym_comment] = ACTIONS(19),
    [anon_sym_lbl] = ACTIONS(43),
    [anon_sym_nop] = ACTIONS(45),
    [anon_sym_prn] = ACTIONS(45),
    [anon_sym_pr1] = ACTIONS(45),
    [anon_sym_red] = ACTIONS(45),
    [anon_sym_r3d] = ACTIONS(45),
    [anon_sym_blo] = ACTIONS(45),
    [anon_sym_sbm] = ACTIONS(45),
    [anon_sym_pop] = ACTIONS(45),
    [anon_sym_dpl] = ACTIONS(45),
    [anon_sym_srn] = ACTIONS(45),
    [anon_sym_mrg] = ACTIONS(45),
    [anon_sym_4dd] = ACTIONS(45),
    [anon_sym_sub] = ACTIONS(45),
    [anon_sym_mul] = ACTIONS(45),
    [anon_sym_div] = ACTIONS(45),
    [anon_sym_cnt] = ACTIONS(45),
    [anon_sym_jmp] = ACTIONS(45),
    [anon_sym_eql] = ACTIONS(45),
    [anon_sym_lss] = ACTIONS(45),
    [anon_sym_gr8] = ACTIONS(45),
    [anon_sym_lib] = ACTIONS(45),
    [anon_sym_trm] = ACTIONS(45),
    [anon_sym_BANGonce] = ACTIONS(11),
    [anon_sym_BANGinclude] = ACTIONS(11),
    [anon_sym_BANGi32] = ACTIONS(11),
    [anon_sym_BANGf32] = ACTIONS(11),
    [anon_sym_BANGchr] = ACTIONS(11),
    [anon_sym_BANGstr] = ACTIONS(11),
    [anon_sym_BANG_i32] = ACTIONS(11),
    [anon_sym_BANG_f32] = ACTIONS(11),
    [anon_sym_BANG_chr] = ACTIONS(11),
    [anon_sym_BANG_str] = ACTIONS(11),
    [sym_macro_name] = ACTIONS(13),
    [sym_macro_block_def] = ACTIONS(15),
  },
  [6] = {
    [sym__statement] = STATE(58),
    [sym_label] = STATE(58),
    [sym_instruction] = STATE(58),
    [sym_awatism] = STATE(19),
    [sym_macro] = STATE(58),
    [sym_builtin_macro_name] = STATE(18),
    [sym_macro_block] = STATE(58),
    [aux_sym_source_file_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(47),
    [anon_sym_LF] = ACTIONS(41),
    [sym_comment] = ACTIONS(19),
    [anon_sym_lbl] = ACTIONS(43),
    [anon_sym_nop] = ACTIONS(45),
    [anon_sym_prn] = ACTIONS(45),
    [anon_sym_pr1] = ACTIONS(45),
    [anon_sym_red] = ACTIONS(45),
    [anon_sym_r3d] = ACTIONS(45),
    [anon_sym_blo] = ACTIONS(45),
    [anon_sym_sbm] = ACTIONS(45),
    [anon_sym_pop] = ACTIONS(45),
    [anon_sym_dpl] = ACTIONS(45),
    [anon_sym_srn] = ACTIONS(45),
    [anon_sym_mrg] = ACTIONS(45),
    [anon_sym_4dd] = ACTIONS(45),
    [anon_sym_sub] = ACTIONS(45),
    [anon_sym_mul] = ACTIONS(45),
    [anon_sym_div] = ACTIONS(45),
    [anon_sym_cnt] = ACTIONS(45),
    [anon_sym_jmp] = ACTIONS(45),
    [anon_sym_eql] = ACTIONS(45),
    [anon_sym_lss] = ACTIONS(45),
    [anon_sym_gr8] = ACTIONS(45),
    [anon_sym_lib] = ACTIONS(45),
    [anon_sym_trm] = ACTIONS(45),
    [anon_sym_BANGonce] = ACTIONS(11),
    [anon_sym_BANGinclude] = ACTIONS(11),
    [anon_sym_BANGi32] = ACTIONS(11),
    [anon_sym_BANGf32] = ACTIONS(11),
    [anon_sym_BANGchr] = ACTIONS(11),
    [anon_sym_BANGstr] = ACTIONS(11),
    [anon_sym_BANG_i32] = ACTIONS(11),
    [anon_sym_BANG_f32] = ACTIONS(11),
    [anon_sym_BANG_chr] = ACTIONS(11),
    [anon_sym_BANG_str] = ACTIONS(11),
    [sym_macro_name] = ACTIONS(13),
    [sym_macro_block_def] = ACTIONS(15),
  },
  [7] = {
    [sym_label] = STATE(27),
    [sym_replacement_macro] = STATE(27),
    [sym_instruction] = STATE(27),
    [sym_awatism] = STATE(16),
    [sym_macro] = STATE(27),
    [sym_builtin_macro_name] = STATE(17),
    [sym__macro_block_statement] = STATE(27),
    [sym_comment] = ACTIONS(3),
    [anon_sym_lbl] = ACTIONS(49),
    [sym_replacement_macro_name] = ACTIONS(51),
    [sym_replacement_var] = ACTIONS(53),
    [anon_sym_nop] = ACTIONS(55),
    [anon_sym_prn] = ACTIONS(55),
    [anon_sym_pr1] = ACTIONS(55),
    [anon_sym_red] = ACTIONS(55),
    [anon_sym_r3d] = ACTIONS(55),
    [anon_sym_blo] = ACTIONS(55),
    [anon_sym_sbm] = ACTIONS(55),
    [anon_sym_pop] = ACTIONS(55),
    [anon_sym_dpl] = ACTIONS(55),
    [anon_sym_srn] = ACTIONS(55),
    [anon_sym_mrg] = ACTIONS(55),
    [anon_sym_4dd] = ACTIONS(55),
    [anon_sym_sub] = ACTIONS(55),
    [anon_sym_mul] = ACTIONS(55),
    [anon_sym_div] = ACTIONS(55),
    [anon_sym_cnt] = ACTIONS(55),
    [anon_sym_jmp] = ACTIONS(55),
    [anon_sym_eql] = ACTIONS(55),
    [anon_sym_lss] = ACTIONS(55),
    [anon_sym_gr8] = ACTIONS(55),
    [anon_sym_lib] = ACTIONS(55),
    [anon_sym_trm] = ACTIONS(55),
    [anon_sym_BANGonce] = ACTIONS(29),
    [anon_sym_BANGinclude] = ACTIONS(29),
    [anon_sym_BANGi32] = ACTIONS(29),
    [anon_sym_BANGf32] = ACTIONS(29),
    [anon_sym_BANGchr] = ACTIONS(29),
    [anon_sym_BANGstr] = ACTIONS(29),
    [anon_sym_BANG_i32] = ACTIONS(29),
    [anon_sym_BANG_f32] = ACTIONS(29),
    [anon_sym_BANG_chr] = ACTIONS(29),
    [anon_sym_BANG_str] = ACTIONS(29),
    [sym_macro_name] = ACTIONS(31),
    [sym_macro_block_end] = ACTIONS(57),
  },
  [8] = {
    [sym__statement] = STATE(58),
    [sym_label] = STATE(58),
    [sym_instruction] = STATE(58),
    [sym_awatism] = STATE(19),
    [sym_macro] = STATE(58),
    [sym_builtin_macro_name] = STATE(18),
    [sym_macro_block] = STATE(58),
    [aux_sym_source_file_repeat1] = STATE(12),
    [anon_sym_LF] = ACTIONS(59),
    [sym_comment] = ACTIONS(19),
    [anon_sym_lbl] = ACTIONS(43),
    [anon_sym_nop] = ACTIONS(45),
    [anon_sym_prn] = ACTIONS(45),
    [anon_sym_pr1] = ACTIONS(45),
    [anon_sym_red] = ACTIONS(45),
    [anon_sym_r3d] = ACTIONS(45),
    [anon_sym_blo] = ACTIONS(45),
    [anon_sym_sbm] = ACTIONS(45),
    [anon_sym_pop] = ACTIONS(45),
    [anon_sym_dpl] = ACTIONS(45),
    [anon_sym_srn] = ACTIONS(45),
    [anon_sym_mrg] = ACTIONS(45),
    [anon_sym_4dd] = ACTIONS(45),
    [anon_sym_sub] = ACTIONS(45),
    [anon_sym_mul] = ACTIONS(45),
    [anon_sym_div] = ACTIONS(45),
    [anon_sym_cnt] = ACTIONS(45),
    [anon_sym_jmp] = ACTIONS(45),
    [anon_sym_eql] = ACTIONS(45),
    [anon_sym_lss] = ACTIONS(45),
    [anon_sym_gr8] = ACTIONS(45),
    [anon_sym_lib] = ACTIONS(45),
    [anon_sym_trm] = ACTIONS(45),
    [anon_sym_BANGonce] = ACTIONS(11),
    [anon_sym_BANGinclude] = ACTIONS(11),
    [anon_sym_BANGi32] = ACTIONS(11),
    [anon_sym_BANGf32] = ACTIONS(11),
    [anon_sym_BANGchr] = ACTIONS(11),
    [anon_sym_BANGstr] = ACTIONS(11),
    [anon_sym_BANG_i32] = ACTIONS(11),
    [anon_sym_BANG_f32] = ACTIONS(11),
    [anon_sym_BANG_chr] = ACTIONS(11),
    [anon_sym_BANG_str] = ACTIONS(11),
    [sym_macro_name] = ACTIONS(13),
    [sym_macro_block_def] = ACTIONS(15),
  },
  [9] = {
    [aux_sym_source_file_repeat1] = STATE(9),
    [anon_sym_LF] = ACTIONS(61),
    [sym_comment] = ACTIONS(19),
    [anon_sym_lbl] = ACTIONS(64),
    [sym_replacement_macro_name] = ACTIONS(64),
    [sym_replacement_var] = ACTIONS(64),
    [anon_sym_nop] = ACTIONS(64),
    [anon_sym_prn] = ACTIONS(64),
    [anon_sym_pr1] = ACTIONS(64),
    [anon_sym_red] = ACTIONS(64),
    [anon_sym_r3d] = ACTIONS(64),
    [anon_sym_blo] = ACTIONS(64),
    [anon_sym_sbm] = ACTIONS(64),
    [anon_sym_pop] = ACTIONS(64),
    [anon_sym_dpl] = ACTIONS(64),
    [anon_sym_srn] = ACTIONS(64),
    [anon_sym_mrg] = ACTIONS(64),
    [anon_sym_4dd] = ACTIONS(64),
    [anon_sym_sub] = ACTIONS(64),
    [anon_sym_mul] = ACTIONS(64),
    [anon_sym_div] = ACTIONS(64),
    [anon_sym_cnt] = ACTIONS(64),
    [anon_sym_jmp] = ACTIONS(64),
    [anon_sym_eql] = ACTIONS(64),
    [anon_sym_lss] = ACTIONS(64),
    [anon_sym_gr8] = ACTIONS(64),
    [anon_sym_lib] = ACTIONS(64),
    [anon_sym_trm] = ACTIONS(64),
    [anon_sym_BANGonce] = ACTIONS(64),
    [anon_sym_BANGinclude] = ACTIONS(64),
    [anon_sym_BANGi32] = ACTIONS(64),
    [anon_sym_BANGf32] = ACTIONS(64),
    [anon_sym_BANGchr] = ACTIONS(64),
    [anon_sym_BANGstr] = ACTIONS(64),
    [anon_sym_BANG_i32] = ACTIONS(64),
    [anon_sym_BANG_f32] = ACTIONS(64),
    [anon_sym_BANG_chr] = ACTIONS(64),
    [anon_sym_BANG_str] = ACTIONS(64),
    [sym_macro_name] = ACTIONS(64),
    [sym_macro_block_end] = ACTIONS(64),
  },
  [10] = {
    [aux_sym_source_file_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(66),
    [anon_sym_LF] = ACTIONS(68),
    [sym_comment] = ACTIONS(19),
    [anon_sym_lbl] = ACTIONS(64),
    [anon_sym_nop] = ACTIONS(64),
    [anon_sym_prn] = ACTIONS(64),
    [anon_sym_pr1] = ACTIONS(64),
    [anon_sym_red] = ACTIONS(64),
    [anon_sym_r3d] = ACTIONS(64),
    [anon_sym_blo] = ACTIONS(64),
    [anon_sym_sbm] = ACTIONS(64),
    [anon_sym_pop] = ACTIONS(64),
    [anon_sym_dpl] = ACTIONS(64),
    [anon_sym_srn] = ACTIONS(64),
    [anon_sym_mrg] = ACTIONS(64),
    [anon_sym_4dd] = ACTIONS(64),
    [anon_sym_sub] = ACTIONS(64),
    [anon_sym_mul] = ACTIONS(64),
    [anon_sym_div] = ACTIONS(64),
    [anon_sym_cnt] = ACTIONS(64),
    [anon_sym_jmp] = ACTIONS(64),
    [anon_sym_eql] = ACTIONS(64),
    [anon_sym_lss] = ACTIONS(64),
    [anon_sym_gr8] = ACTIONS(64),
    [anon_sym_lib] = ACTIONS(64),
    [anon_sym_trm] = ACTIONS(64),
    [anon_sym_BANGonce] = ACTIONS(64),
    [anon_sym_BANGinclude] = ACTIONS(64),
    [anon_sym_BANGi32] = ACTIONS(64),
    [anon_sym_BANGf32] = ACTIONS(64),
    [anon_sym_BANGchr] = ACTIONS(64),
    [anon_sym_BANGstr] = ACTIONS(64),
    [anon_sym_BANG_i32] = ACTIONS(64),
    [anon_sym_BANG_f32] = ACTIONS(64),
    [anon_sym_BANG_chr] = ACTIONS(64),
    [anon_sym_BANG_str] = ACTIONS(64),
    [sym_macro_name] = ACTIONS(64),
    [sym_macro_block_def] = ACTIONS(64),
  },
  [11] = {
    [aux_sym_source_file_repeat1] = STATE(11),
    [anon_sym_LF] = ACTIONS(71),
    [sym_comment] = ACTIONS(19),
    [anon_sym_lbl] = ACTIONS(64),
    [sym_replacement_macro_name] = ACTIONS(64),
    [sym_replacement_var] = ACTIONS(64),
    [anon_sym_nop] = ACTIONS(64),
    [anon_sym_prn] = ACTIONS(64),
    [anon_sym_pr1] = ACTIONS(64),
    [anon_sym_red] = ACTIONS(64),
    [anon_sym_r3d] = ACTIONS(64),
    [anon_sym_blo] = ACTIONS(64),
    [anon_sym_sbm] = ACTIONS(64),
    [anon_sym_pop] = ACTIONS(64),
    [anon_sym_dpl] = ACTIONS(64),
    [anon_sym_srn] = ACTIONS(64),
    [anon_sym_mrg] = ACTIONS(64),
    [anon_sym_4dd] = ACTIONS(64),
    [anon_sym_sub] = ACTIONS(64),
    [anon_sym_mul] = ACTIONS(64),
    [anon_sym_div] = ACTIONS(64),
    [anon_sym_cnt] = ACTIONS(64),
    [anon_sym_jmp] = ACTIONS(64),
    [anon_sym_eql] = ACTIONS(64),
    [anon_sym_lss] = ACTIONS(64),
    [anon_sym_gr8] = ACTIONS(64),
    [anon_sym_lib] = ACTIONS(64),
    [anon_sym_trm] = ACTIONS(64),
    [anon_sym_BANGonce] = ACTIONS(64),
    [anon_sym_BANGinclude] = ACTIONS(64),
    [anon_sym_BANGi32] = ACTIONS(64),
    [anon_sym_BANGf32] = ACTIONS(64),
    [anon_sym_BANGchr] = ACTIONS(64),
    [anon_sym_BANGstr] = ACTIONS(64),
    [anon_sym_BANG_i32] = ACTIONS(64),
    [anon_sym_BANG_f32] = ACTIONS(64),
    [anon_sym_BANG_chr] = ACTIONS(64),
    [anon_sym_BANG_str] = ACTIONS(64),
    [sym_macro_name] = ACTIONS(64),
  },
  [12] = {
    [aux_sym_source_file_repeat1] = STATE(12),
    [anon_sym_LF] = ACTIONS(74),
    [sym_comment] = ACTIONS(19),
    [anon_sym_lbl] = ACTIONS(64),
    [anon_sym_nop] = ACTIONS(64),
    [anon_sym_prn] = ACTIONS(64),
    [anon_sym_pr1] = ACTIONS(64),
    [anon_sym_red] = ACTIONS(64),
    [anon_sym_r3d] = ACTIONS(64),
    [anon_sym_blo] = ACTIONS(64),
    [anon_sym_sbm] = ACTIONS(64),
    [anon_sym_pop] = ACTIONS(64),
    [anon_sym_dpl] = ACTIONS(64),
    [anon_sym_srn] = ACTIONS(64),
    [anon_sym_mrg] = ACTIONS(64),
    [anon_sym_4dd] = ACTIONS(64),
    [anon_sym_sub] = ACTIONS(64),
    [anon_sym_mul] = ACTIONS(64),
    [anon_sym_div] = ACTIONS(64),
    [anon_sym_cnt] = ACTIONS(64),
    [anon_sym_jmp] = ACTIONS(64),
    [anon_sym_eql] = ACTIONS(64),
    [anon_sym_lss] = ACTIONS(64),
    [anon_sym_gr8] = ACTIONS(64),
    [anon_sym_lib] = ACTIONS(64),
    [anon_sym_trm] = ACTIONS(64),
    [anon_sym_BANGonce] = ACTIONS(64),
    [anon_sym_BANGinclude] = ACTIONS(64),
    [anon_sym_BANGi32] = ACTIONS(64),
    [anon_sym_BANGf32] = ACTIONS(64),
    [anon_sym_BANGchr] = ACTIONS(64),
    [anon_sym_BANGstr] = ACTIONS(64),
    [anon_sym_BANG_i32] = ACTIONS(64),
    [anon_sym_BANG_f32] = ACTIONS(64),
    [anon_sym_BANG_chr] = ACTIONS(64),
    [anon_sym_BANG_str] = ACTIONS(64),
    [sym_macro_name] = ACTIONS(64),
    [sym_macro_block_def] = ACTIONS(64),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_LT,
    STATE(28), 1,
      sym_value,
    STATE(45), 1,
      sym_argument_list,
    ACTIONS(77), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(42), 2,
      sym__text,
      sym_path,
    ACTIONS(79), 8,
      aux_sym__text_token1,
      sym_ascii_string,
      sym_awascii_string,
      sym_ascii_char,
      sym_awascii_char,
      sym_number,
      sym_float,
      sym_replacement_var,
  [31] = 8,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_LF,
    ACTIONS(85), 1,
      anon_sym_LT,
    ACTIONS(87), 1,
      sym_macro_block_end,
    STATE(26), 1,
      sym_value,
    STATE(59), 1,
      sym_argument_list,
    STATE(38), 2,
      sym__text,
      sym_path,
    ACTIONS(83), 8,
      aux_sym__text_token1,
      sym_ascii_string,
      sym_awascii_string,
      sym_ascii_char,
      sym_awascii_char,
      sym_number,
      sym_float,
      sym_replacement_var,
  [64] = 8,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_LT,
    ACTIONS(89), 1,
      anon_sym_LF,
    ACTIONS(91), 1,
      sym_macro_block_end,
    STATE(26), 1,
      sym_value,
    STATE(55), 1,
      sym_argument_list,
    STATE(38), 2,
      sym__text,
      sym_path,
    ACTIONS(83), 8,
      aux_sym__text_token1,
      sym_ascii_string,
      sym_awascii_string,
      sym_ascii_char,
      sym_awascii_char,
      sym_number,
      sym_float,
      sym_replacement_var,
  [97] = 7,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_LT,
    ACTIONS(93), 1,
      anon_sym_LF,
    ACTIONS(95), 1,
      sym_macro_block_end,
    STATE(60), 1,
      sym_value,
    STATE(38), 2,
      sym__text,
      sym_path,
    ACTIONS(83), 8,
      aux_sym__text_token1,
      sym_ascii_string,
      sym_awascii_string,
      sym_ascii_char,
      sym_awascii_char,
      sym_number,
      sym_float,
      sym_replacement_var,
  [127] = 7,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_LF,
    ACTIONS(85), 1,
      anon_sym_LT,
    ACTIONS(87), 1,
      sym_macro_block_end,
    STATE(59), 1,
      sym_value,
    STATE(38), 2,
      sym__text,
      sym_path,
    ACTIONS(83), 8,
      aux_sym__text_token1,
      sym_ascii_string,
      sym_awascii_string,
      sym_ascii_char,
      sym_awascii_char,
      sym_number,
      sym_float,
      sym_replacement_var,
  [157] = 6,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_LT,
    STATE(45), 1,
      sym_value,
    ACTIONS(77), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(42), 2,
      sym__text,
      sym_path,
    ACTIONS(79), 8,
      aux_sym__text_token1,
      sym_ascii_string,
      sym_awascii_string,
      sym_ascii_char,
      sym_awascii_char,
      sym_number,
      sym_float,
      sym_replacement_var,
  [185] = 6,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_LT,
    STATE(56), 1,
      sym_value,
    ACTIONS(93), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(42), 2,
      sym__text,
      sym_path,
    ACTIONS(79), 8,
      aux_sym__text_token1,
      sym_ascii_string,
      sym_awascii_string,
      sym_ascii_char,
      sym_awascii_char,
      sym_number,
      sym_float,
      sym_replacement_var,
  [213] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_LT,
    STATE(44), 1,
      sym_value,
    ACTIONS(83), 2,
      aux_sym__text_token1,
      sym_number,
    STATE(38), 2,
      sym__text,
      sym_path,
    ACTIONS(97), 6,
      sym_ascii_string,
      sym_awascii_string,
      sym_ascii_char,
      sym_awascii_char,
      sym_float,
      sym_replacement_var,
  [239] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      anon_sym_LT,
    STATE(39), 1,
      sym_value,
    ACTIONS(79), 2,
      aux_sym__text_token1,
      sym_number,
    STATE(42), 2,
      sym__text,
      sym_path,
    ACTIONS(101), 6,
      sym_ascii_string,
      sym_awascii_string,
      sym_ascii_char,
      sym_awascii_char,
      sym_float,
      sym_replacement_var,
  [265] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(105), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(107), 9,
      aux_sym__text_token1,
      sym_ascii_string,
      sym_awascii_string,
      sym_ascii_char,
      sym_awascii_char,
      anon_sym_LT,
      sym_number,
      sym_float,
      sym_replacement_var,
  [284] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(109), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(111), 9,
      aux_sym__text_token1,
      sym_ascii_string,
      sym_awascii_string,
      sym_ascii_char,
      sym_awascii_char,
      anon_sym_LT,
      sym_number,
      sym_float,
      sym_replacement_var,
  [303] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_LF,
    ACTIONS(107), 10,
      aux_sym__text_token1,
      sym_ascii_string,
      sym_awascii_string,
      sym_ascii_char,
      sym_awascii_char,
      anon_sym_LT,
      sym_number,
      sym_float,
      sym_replacement_var,
      sym_macro_block_end,
  [322] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_LF,
    ACTIONS(111), 10,
      aux_sym__text_token1,
      sym_ascii_string,
      sym_awascii_string,
      sym_ascii_char,
      sym_awascii_char,
      anon_sym_LT,
      sym_number,
      sym_float,
      sym_replacement_var,
      sym_macro_block_end,
  [341] = 5,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_LF,
    ACTIONS(115), 1,
      anon_sym_COMMA,
    ACTIONS(117), 1,
      sym_macro_block_end,
    STATE(33), 1,
      aux_sym_argument_list_repeat1,
  [357] = 5,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_LF,
    ACTIONS(121), 1,
      sym_macro_block_end,
    STATE(3), 1,
      aux_sym_source_file_repeat1,
    STATE(37), 1,
      aux_sym_macro_block_repeat1,
  [373] = 4,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_COMMA,
    STATE(31), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(113), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [387] = 5,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(125), 1,
      ts_builtin_sym_end,
    ACTIONS(127), 1,
      anon_sym_LF,
    STATE(8), 1,
      aux_sym_source_file_repeat1,
    STATE(29), 1,
      aux_sym_source_file_repeat2,
  [403] = 5,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(130), 1,
      ts_builtin_sym_end,
    ACTIONS(132), 1,
      anon_sym_LF,
    STATE(6), 1,
      aux_sym_source_file_repeat1,
    STATE(34), 1,
      aux_sym_source_file_repeat2,
  [419] = 4,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_COMMA,
    STATE(32), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(134), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [433] = 4,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(138), 1,
      anon_sym_COMMA,
    STATE(32), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(136), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [447] = 5,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_COMMA,
    ACTIONS(134), 1,
      anon_sym_LF,
    ACTIONS(141), 1,
      sym_macro_block_end,
    STATE(36), 1,
      aux_sym_argument_list_repeat1,
  [463] = 5,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(143), 1,
      anon_sym_LF,
    STATE(5), 1,
      aux_sym_source_file_repeat1,
    STATE(29), 1,
      aux_sym_source_file_repeat2,
  [479] = 5,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_LF,
    ACTIONS(148), 1,
      sym_macro_block_end,
    STATE(4), 1,
      aux_sym_source_file_repeat1,
    STATE(35), 1,
      aux_sym_macro_block_repeat1,
  [495] = 5,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(136), 1,
      anon_sym_LF,
    ACTIONS(150), 1,
      anon_sym_COMMA,
    ACTIONS(153), 1,
      sym_macro_block_end,
    STATE(36), 1,
      aux_sym_argument_list_repeat1,
  [511] = 5,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(35), 1,
      sym_macro_block_end,
    ACTIONS(155), 1,
      anon_sym_LF,
    STATE(2), 1,
      aux_sym_source_file_repeat1,
    STATE(35), 1,
      aux_sym_macro_block_repeat1,
  [527] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_LF,
    ACTIONS(159), 2,
      anon_sym_COMMA,
      sym_macro_block_end,
  [538] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_COMMA,
    ACTIONS(136), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [549] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      aux_sym__text_token1,
    STATE(51), 1,
      sym_parameter,
    STATE(66), 1,
      sym_parameter_list,
  [562] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_COMMA,
    ACTIONS(163), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [573] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_COMMA,
    ACTIONS(157), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [584] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_LF,
    ACTIONS(165), 2,
      anon_sym_COMMA,
      sym_macro_block_end,
  [595] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(136), 1,
      anon_sym_LF,
    ACTIONS(153), 2,
      anon_sym_COMMA,
      sym_macro_block_end,
  [606] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(167), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [614] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(169), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [622] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(148), 1,
      sym_macro_block_end,
    ACTIONS(171), 1,
      anon_sym_LF,
  [632] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      aux_sym__text_token1,
    STATE(65), 1,
      sym_parameter,
  [642] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(173), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [650] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(175), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [658] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_COMMA,
    ACTIONS(179), 1,
      anon_sym_RPAREN,
  [668] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(181), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [676] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [684] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      aux_sym__text_token1,
    STATE(68), 1,
      sym_macro_block_name,
  [694] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_LF,
    ACTIONS(189), 1,
      sym_macro_block_end,
  [704] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(191), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [712] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_LF,
    ACTIONS(193), 1,
      sym_macro_block_end,
  [722] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(125), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [730] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_LF,
    ACTIONS(195), 1,
      sym_macro_block_end,
  [740] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_LF,
    ACTIONS(197), 1,
      sym_macro_block_end,
  [750] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(199), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [758] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      ts_builtin_sym_end,
  [765] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_GT,
  [772] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(205), 1,
      sym_path_content,
  [779] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_RPAREN,
  [786] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_RPAREN,
  [793] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym_number,
  [800] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
  [807] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
  [814] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      sym_number,
  [821] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_GT,
  [828] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(221), 1,
      sym_path_content,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(13)] = 0,
  [SMALL_STATE(14)] = 31,
  [SMALL_STATE(15)] = 64,
  [SMALL_STATE(16)] = 97,
  [SMALL_STATE(17)] = 127,
  [SMALL_STATE(18)] = 157,
  [SMALL_STATE(19)] = 185,
  [SMALL_STATE(20)] = 213,
  [SMALL_STATE(21)] = 239,
  [SMALL_STATE(22)] = 265,
  [SMALL_STATE(23)] = 284,
  [SMALL_STATE(24)] = 303,
  [SMALL_STATE(25)] = 322,
  [SMALL_STATE(26)] = 341,
  [SMALL_STATE(27)] = 357,
  [SMALL_STATE(28)] = 373,
  [SMALL_STATE(29)] = 387,
  [SMALL_STATE(30)] = 403,
  [SMALL_STATE(31)] = 419,
  [SMALL_STATE(32)] = 433,
  [SMALL_STATE(33)] = 447,
  [SMALL_STATE(34)] = 463,
  [SMALL_STATE(35)] = 479,
  [SMALL_STATE(36)] = 495,
  [SMALL_STATE(37)] = 511,
  [SMALL_STATE(38)] = 527,
  [SMALL_STATE(39)] = 538,
  [SMALL_STATE(40)] = 549,
  [SMALL_STATE(41)] = 562,
  [SMALL_STATE(42)] = 573,
  [SMALL_STATE(43)] = 584,
  [SMALL_STATE(44)] = 595,
  [SMALL_STATE(45)] = 606,
  [SMALL_STATE(46)] = 614,
  [SMALL_STATE(47)] = 622,
  [SMALL_STATE(48)] = 632,
  [SMALL_STATE(49)] = 642,
  [SMALL_STATE(50)] = 650,
  [SMALL_STATE(51)] = 658,
  [SMALL_STATE(52)] = 668,
  [SMALL_STATE(53)] = 676,
  [SMALL_STATE(54)] = 684,
  [SMALL_STATE(55)] = 694,
  [SMALL_STATE(56)] = 704,
  [SMALL_STATE(57)] = 712,
  [SMALL_STATE(58)] = 722,
  [SMALL_STATE(59)] = 730,
  [SMALL_STATE(60)] = 740,
  [SMALL_STATE(61)] = 750,
  [SMALL_STATE(62)] = 758,
  [SMALL_STATE(63)] = 765,
  [SMALL_STATE(64)] = 772,
  [SMALL_STATE(65)] = 779,
  [SMALL_STATE(66)] = 786,
  [SMALL_STATE(67)] = 793,
  [SMALL_STATE(68)] = 800,
  [SMALL_STATE(69)] = 807,
  [SMALL_STATE(70)] = 814,
  [SMALL_STATE(71)] = 821,
  [SMALL_STATE(72)] = 828,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro, 1, 0, 1),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro, 1, 0, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replacement_macro, 1, 0, 1),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_replacement_macro, 1, 0, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, 0, 1),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 1, 0, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_awatism, 1, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_awatism, 1, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_macro_name, 1, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_macro_name, 1, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 1, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 1, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(8),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_macro_block_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_macro_block_repeat1, 2, 0, 0),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 3, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 3, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro, 2, 0, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_block, 8, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_macro_block_repeat1, 2, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_block, 9, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 1, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_block, 7, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replacement_macro, 2, 0, 2),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_replacement_macro, 2, 0, 2),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, 0, 2),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 2, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro, 2, 0, 2),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 2, 0, 2),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_block, 6, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_block_name, 1, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_awa5_rs(void) {
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

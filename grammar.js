module.exports = grammar({
  name: 'awa5_rs',

  extras: $ => [
    /\s/,
    $.comment,
  ],

  rules: {
    source_file: $ => sep(repeat1('\n'), $._statement),

    comment: $ => /;.*/,

    _statement: $ => choice(
      $.label,
      $.instruction,
      $.macro,
      $.macro_block,
    ),

    label: $ => seq('lbl', $.number),

    value: $ => choice(
      $._text,
      $.ascii_string,
      $.awascii_string,
      $.ascii_char,
      $.awascii_char,
      $.path,
      $.number,
      $.float,
      $.replacement_var,
    ),

    _text: $ => /[a-zA-Z0-9_]+/,

    ascii_string: $ => /"([^"\\]|\\.)*"/,

    awascii_string: $ => /a"([^"\\]|\\.)*"/,

    ascii_char: $ => /'([^'\\]|\\.)*'/,

    awascii_char: $ => /a'([^'\\]|\\.)*'/,

    path: $ => seq(
      '<',
      $.path_content,
      '>',
    ),

    path_content: $ => /[^<>]+/,

    number: $ => /\d+/,

    float: $ => /\d+\.\d+/,

    replacement_macro: $ => seq(field('kind', $.replacement_macro_name), optional(field('argument', $.argument_list))),

    replacement_macro_name: $ => /!\$[a-zA-Z0-9_]+/,

    replacement_var: $ => /\$[a-zA-Z0-9_]+/,

    instruction: $ => seq(field('kind', $.awatism), optional(field('argument', $.value))),

    awatism: $ => choice(
      'nop',
      'prn',
      'pr1',
      'red',
      'r3d',
      'blo',
      'sbm',
      'pop',
      'dpl',
      'srn',
      'mrg',
      '4dd',
      'sub',
      'mul',
      'div',
      'cnt',
      'jmp',
      'eql',
      'lss',
      'gr8',
      'lib',
      'trm',
    ),

    macro: $ => choice(
      seq(field('kind', $.builtin_macro_name), optional(field('argument', $.value))),
      seq(field('kind', $.macro_name), optional(field('argument', $.argument_list))),
    ),

    argument_list: $ => seq(
      $.value,
      repeat(seq(',', $.value)),
    ),

    builtin_macro_name: $ => choice(
      '!once',
      '!include',
      '!i32',
      '!f32',
      '!chr',
      '!str',
      '!_i32',
      '!_f32',
      '!_chr',
      '!_str',
    ),

    macro_name: $ => /![a-zA-Z0-9_]+/,

    macro_block: $ => seq(
      $.macro_block_def, $.identifier, '(', $.parameter_list, ')',
      sep(repeat1('\n'), $._macro_block_statement),
      $.macro_block_end,
    ),

    macro_block_def: $ => '!def',

    macro_block_end: $ => '!end',

    parameter_list: $ => seq(
      $.identifier,
      optional(seq(',', $.identifier)),
    ),

    identifier: $ => /[a-zA-Z_]\w*/,

    _macro_block_statement: $ => choice(
      $.label,
      $.instruction,
      $.macro,
      $.replacement_var,
      $.replacement_macro,
    ),
  },
});

// eslint-disable-next-line require-jsdoc
function sep(separator, rule) {
  return optional(seq(rule, repeat(seq(separator, rule)), optional(separator)));
}

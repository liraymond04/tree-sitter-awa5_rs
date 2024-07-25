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
    ),

    label: $ => seq('lbl', $.number),

    value: $ => choice(
      $.string,
      $.number,
      $.float,
    ),

    string: $ => /"([^"\\]|\\.)*"/,

    number: $ => /\d+/,

    float: $ => /\d+\.\d+/,

    instruction: $ => seq(field('kind', $.awatism), optional(field('argument', $.value))),

    // awatism: $ => /[a-zA-Z0-9_]+/,

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
      // 'lbl',
      'jmp',
      'eql',
      'lss',
      'gr8',
      'lib',
      'trm',
    ),

    macro: $ => choice(
      seq(field('kind', $.builtin_macro_name), optional(field('argument', $.value))),
      seq(field('kind', $.macro_name), optional(field('argument', $.value))),
    ),

    builtin_macro_name: $ => choice(
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
  },
});

// eslint-disable-next-line require-jsdoc
function sep(separator, rule) {
  return optional(seq(rule, repeat(seq(separator, rule)), optional(separator)));
}

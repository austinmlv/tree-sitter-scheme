const WHITESPACE_CHAR =
      /[\f\n\r\t, \u000B\u001C\u001D\u001E\u001F\u2028\u2029\u1680\u2000\u2001\u2002\u2003\u2004\u2005\u2006\u2008\u2009\u200a\u205f\u3000]/;

const WHITESPACE =
      token(repeat1(WHITESPACE_CHAR));

const COMMENT =
    token(/#?;.*\n?/);

const NESTED_COMMENT =
    token(seq(/#\|.*\n/, repeat(choice(WHITESPACE, /./)), /\|#\n?/));

const DELIMITER =
    choice(WHITESPACE, '|', '(', ')', '"', ';')

const DIRECTIVE =
    token(seq(/#!/, repeat(/./), DELIMITER))

const OPEN_BRACKET =
    choice('(', '[', '{')

const CLOSE_BRACKET =
    choice(')', ']', '}')

const BOOLEAN =
    choice(/#t(rue)?/, /#f(alse)?/)

const ANY_CHAR =
      /./;

const DIGIT =
      /[0-9]/;

const ALPHANUMERIC =
      /[0-9a-zA-Z]/;

const HEX_DIGIT =
      /[0-9a-fA-F]/;

const OCTAL_DIGIT =
      /[0-7]/;

const RADIX =
      /#[bodx]/

const EXACTNESS =
      /#[ie]/

const NUM_PREFIX =
      choice(seq(optional(RADIX), optional(EXACTNESS)),
             seq(optional(EXACTNESS), optional(RADIX)))

const INFNAN =
      /[+\-](inf\.0|nan\.0)/

const SIGN =
      /[+\-]?/

const UINTEGER =
      repeat1(HEX_DIGIT)

const SUFFIX =
      optional(seq('e', SIGN, repeat1(DIGIT)))

const DECIMAL =
      choice(seq(UINTEGER, SUFFIX),
             seq('.', repeat1(DIGIT), SUFFIX),
             seq(repeat1(DIGIT), '.', repeat(DIGIT), SUFFIX))

const UREAL =
      choice(UINTEGER,
             seq(UINTEGER, '/', UINTEGER),
             DECIMAL)
             
const REAL =
      choice(seq(SIGN, UREAL), INFNAN)

const COMPLEX =
      choice(REAL,
             seq(REAL, '@', REAL),
             seq(REAL, '+', UREAL, 'i'),
             seq(REAL, '-', UREAL, 'i'),
             seq(REAL, '+', 'i'),
             seq(REAL, '-', 'i'),
             seq(REAL, INFNAN, 'i'),
             seq('+', UREAL, 'i'),
             seq('-', UREAL, 'i'),
             seq(INFNAN, 'i'),
             seq('+', 'i'),
             seq('-', 'i'))
             
const NUMBER =
      token(seq(NUM_PREFIX, COMPLEX))

const NAMED_CHAR =
      choice('alarm',
             'backspace',
             'delete',
             'escape',
             'newline',
             'null',
             'return',
             'space',
             'tab');

const CHARACTER =
      seq('#', /\\[^\f\n\r\t ()]+/)

const STRING =
      token(seq('"',
                repeat(/[^"\\]/),
                repeat(seq("\\",
                           /./,
                           repeat(/[^"\\]/))),
                '"'));

module.exports = grammar({
    name: 'scheme',
    extras: $ =>
    [],
    conflicts: $ =>
    [],
    rules: {
        source: $ =>
            repeat(choice($._gap, $._form)),

        _gap: $ => choice($._ws, $.comment, $.nested_comment, $.directive),

        _ws: $ => WHITESPACE,

        comment: $ => COMMENT,
        
        nested_comment: $ => NESTED_COMMENT,

        directive: $ => DIRECTIVE,

        _form: $ =>
            choice(
                $.boolean,
                $.character,
                $.string,
                $.number,
                $.list),

        boolean: $ => BOOLEAN,

        character: $ => CHARACTER,

        string: $ => STRING,

        number: $ => NUMBER,

        list: $ => seq(OPEN_BRACKET, CLOSE_BRACKET)
    }
});

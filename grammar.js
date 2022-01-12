const WHITESPACE_CHAR =
      /[\f\n\r\t, \u000B\u001C\u001D\u001E\u001F\u2028\u2029\u1680\u2000\u2001\u2002\u2003\u2004\u2005\u2006\u2008\u2009\u200a\u205f\u3000]/;

const WHITESPACE =
      token(repeat1(WHITESPACE_CHAR));

const COMMENT =
    token(choice(seq(choice('#;', ';'), repeat(/./)),
          token(/#\|(\n|.)*\|#/)));

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

const ALPHA =
      /[a-zA-Z]/

const ALPHANUMERIC =
      /[0-9a-zA-Z]/;

const IDENTIFIER_CHAR =
      /[!$%&*+\-.\/:<=>?@^_~a-zA-Z0-9]/

const IDENTIFIER_START =
      choice(/[!$%&*+\-.\/:<=>?@^_~]/, ALPHA)

const IDENTIFIER_LITERAL =
      token(seq('|', repeat1(/[^\|]/), '|'))

const IDENTIFIER =
      token(seq(IDENTIFIER_START, repeat(IDENTIFIER_CHAR)))

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
// symbol element -> any character other than vertical line or \ |
    // inline hex escape | mnemonic escape | \|
// inline hex escape -> '\x' HEX_DIGIT+ ';'

module.exports = grammar({
    name: 'scheme',
    extras: $ => [/\s/, $.comment],
    conflicts: $ =>
    [],
    rules: {
        source: $ => repeat($._sexp),
        _sexp: $ =>  choice($.list, $._atom),
        _atom: $ => choice($.string, $.number,$.character, $.boolean),
        string: $ => STRING,
        number: $ => NUMBER,
        character: $ => CHARACTER,
        boolean: $ => BOOLEAN,
        list: $ => seq("(", choice(repeat($._sexp)), ")"),
        //directive: $ => DIRECTIVE,
        comment: $ => COMMENT,
    }
});

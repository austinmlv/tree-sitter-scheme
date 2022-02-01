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
    token(choice(/#!(?:\n|.)*!#/, /#!.*\n/))

const OPEN_BRACKET =
    choice('(', '[', '{')

const CLOSE_BRACKET =
    choice(')', ']', '}')

const BOOLEAN =
    choice(/#t(rue)?/, /#f(alse)?/)

const ANY_CHAR =
      /./;

const ALPHA =
      /[a-zA-Z]/

const IDENTIFIER_CHAR =
      /[!$%&*+\-.\/:<=>?@^_~a-zA-Z0-9]/

const IDENTIFIER_START =
      choice(/[!$%&*+\-.\/:<=>?@^_~]/, ALPHA)

const IDENTIFIER_LITERAL =
      token(seq('|', repeat1(/[^|]/), '|'))

const IDENTIFIER =
      token(seq(IDENTIFIER_START, repeat(IDENTIFIER_CHAR)))

const BIN_DIGIT = /[01]/;
const OCT_DIGIT = /[0-7]/;
const DEC_DIGIT = /[0-9]/;
const HEX_DIGIT = /[0-9a-fA-F]/;

const SIGN = /[+\-]/;
const INFNAN = seq(SIGN, /(inf|nan)\.0/);

function digit(radix) {
    switch(radix) {
        case 2:
            return BIN_DIGIT;
            break;
        case 8:
            return OCT_DIGIT;
            break;
        case 10:
            return DEC_DIGIT;
            break;
        case 16:
            return HEX_DIGIT;
    }
}

const SUFFIX = optional(seq('e', optional(SIGN), repeat1(digit(10))));

function radix(radix) {
    switch(radix) {
        case 2:
            return '#b';
            break;
        case 8:
            return '#o';
            break;
        case 10:
            return optional('#d');
            break;
        case 16:
            return '#x';
            break;
    }
}

function prefix(r) {
    return choice(seq(radix(r), optional(/#[ie]/)),
                  seq(optional(/#[ie]/), radix(r)));
}

function uinteger(radix) {
    return repeat1(digit(radix));
}

function decimal() {
    return choice(
        seq(uinteger(10), SUFFIX),
        seq('.', repeat1(digit(10)), SUFFIX),
        seq(repeat1(digit(10)), '.', repeat(digit(10)), SUFFIX)
    );
}

function ureal(radix) {
    return choice(
        uinteger(radix),
        seq(uinteger(radix), '/', uinteger(radix)),
        decimal()
    );
}

function real(radix) {
    return choice(seq(optional(/[+\-]/), ureal(radix)), INFNAN);
}

function complex(radix) {
    return choice(
        real(radix),
        seq(real(radix), '@', real(radix)),
        seq(real(radix), choice('+', '-'), ureal(radix), 'i'),
        seq(real(radix), choice('+i', '-i')),
        seq(real(radix), INFNAN, 'i'),
        seq(choice('+', '-'), ureal(radix), 'i'),
        seq(INFNAN, 'i'),
        seq(choice('+', '-'), 'i'));
}

function num(radix) {
    return token(seq(prefix(radix), complex(radix)));
}

function number() {
    return choice(num(2), num(8), num(10), num(16));
}

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

const MNEMONIC_ESCAPE =
      choice('\\a', '\\b', '\\t', '\\n', '\\r')

const STRING_ELEMENT =
      choice(/[^\\"]/,
             MNEMONIC_ESCAPE,
             '\\"',
             '\\\\',
             seq('\\', repeat(/[ \t]/), '\n', repeat(/[ \t]/)),
             seq('\\x', HEX_DIGIT, ';'))

const STRING =
      token(seq('"', repeat(STRING_ELEMENT), '"'))

const BYTE = /[0-9]{1,3}/

const BYTEVECTOR =
      token(seq('#u8(', repeat(choice(BYTE, WHITESPACE)), ')'))

module.exports = grammar({
    name: 'scheme',
    extras: $ => [/\s/, $.comment, $.directive],
    conflicts: $ =>
    [],
    rules: {
        source: $ => repeat($._sexp),
        _sexp: $ =>  choice($._atom, $.vector, $.list, $.abbreviation),
        _atom: $ => choice($.boolean, $.number, $.character, $.string,
                           $.bytevector, $.symbol),
        boolean: $ => BOOLEAN,
        number: $ => number(),
        character: $ => CHARACTER,
        string: $ => STRING,
        bytevector: $ => BYTEVECTOR,
        symbol: $ => choice(IDENTIFIER, IDENTIFIER_LITERAL),
        vector: $ => seq('#(', repeat(choice($._sexp, WHITESPACE)), ')'),
        list: $ => seq(OPEN_BRACKET, repeat(choice($._sexp, WHITESPACE)), CLOSE_BRACKET),
        abbreviation: $ => seq(choice("'", '`', ',', ',@'), $._sexp),
        comment: $ => COMMENT,
        directive: $ => DIRECTIVE,
    }
});

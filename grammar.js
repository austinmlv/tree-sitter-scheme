const WHITESPACE_CHAR =
      /[\f\n\r\t, \u000B\u001C\u001D\u001E\u001F\u2028\u2029\u1680\u2000\u2001\u2002\u2003\u2004\u2005\u2006\u2008\u2009\u200a\u205f\u3000]/;

const WHITESPACE =
      token(repeat1(WHITESPACE_CHAR));

const COMMENT =
    token(/(;|#!).*\n?/);

const NESTED_COMMENT =
    token(seq(/#\|.*\n/, repeat(choice(WHITESPACE, /./)), /\|#\n?/));

module.exports = grammar({
    name: 'scheme',
    extras: $ =>
    [],
    conflicts: $ =>
    [],
    rules: {
        source: $ =>
            repeat(choice($._gap)),

        _gap: $ => choice($._ws, $.comment, $.nested_comment),

        _ws: $ => WHITESPACE,

        comment: $ => COMMENT,
        
        nested_comment: $ => NESTED_COMMENT
    }
});

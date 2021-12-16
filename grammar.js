function clSymbol(symbol) {
    return seq(optional(seq('cl', ':')), symbol)
}

function loopSymbol(symbol) {
    return seq(optional(seq(optional('cl'), ':')), symbol)
}

function optSeq(...args) {
    return optional(seq(...args))
}

module.exports = grammar({
    name: 'scheme',
    rules: {
        comment: $ => '#'
    }
});

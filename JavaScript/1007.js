var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var a = parseFloat(lines.shift());
var b = parseFloat(lines.shift());
var c = parseFloat(lines.shift());
var d = parseFloat(lines.shift());

diferenca = (a * b) - (c * d)
console.log('DIFERENCA = ' + diferenca)
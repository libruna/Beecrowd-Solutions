var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var nome = lines.shift()
var salarioFixo = parseFloat(lines.shift());
var montante = parseFloat(lines.shift());

total = ((montante * 15) / 100) + salarioFixo

console.log('TOTAL = R$' + total.toFixed(2))
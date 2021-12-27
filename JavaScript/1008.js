var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var num = parseInt(lines.shift());
var hours = parseInt(lines.shift());
var value = parseFloat(lines.shift());

salary = hours * value

console.log('NÚMERO = ' + num)
console.log('SALÁRIO = U $ ' + salary.toFixed(2))
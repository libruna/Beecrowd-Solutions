var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var x = parseFloat(lines.shift());
var y = parseFloat(lines.shift());

consumo = x / y
console.log(consumo.toFixed(3) + ' km/l')
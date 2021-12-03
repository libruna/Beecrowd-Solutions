var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var numero = parseInt(lines.shift());
var resultado = numero;

for (var i = 1; i < numero; i++){
    resultado = resultado*(numero - i);
}
console.log(resultado);
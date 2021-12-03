var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var valor = parseFloat(lines.shift());

for (var i = 1; i <= 10; i++){
    var calculo = i*valor;
    console.log( i + " x " + valor + " = " + calculo );
}
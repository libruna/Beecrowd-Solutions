var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var valor = parseInt(lines.shift());
var temp = 0;

for (var i = 1; i <= valor; i++){
    var resultados = [];
    for (var t = 1; t <= 4; t++){
         temp++;
         resultados.push(temp);
    }
    console.log( resultados[0] + " " + resultados[1] + " " + resultados[2] + " PUM");
}
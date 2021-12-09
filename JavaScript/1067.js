var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var numero = parseInt(lines.shift());

for (var i = 1; i <= numero; i++){
    if (i%2 != 0){
        console.log(i);
    }

}
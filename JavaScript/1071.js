var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var x = parseInt(lines.shift());
var y = parseInt(lines.shift());
var maior;

if (x > y){
   maior = x;
   menor = y;
}
else if(y > x){
    maior = y;
    menor = x;
}
else{
    maior = 0;
    menor = 0;

}

var numero = 0;
for (var i = (menor + 1); i < maior; i++){
    if (i%2 !== 0){
        numero = numero + i;
    }

}
console.log(numero);
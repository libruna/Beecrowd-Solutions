var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

while (true){
    var valor = lines.shift();
    if (valor != "2002"){
        console.log("Senha Invalida");
    }
    else{
        console.log("Acesso Permitido");
        break;
    }
}
var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var numero = parseInt(lines.shift());

if (numero == 1){
    console.log("January");
}
else if (numero == 2){
    console.log("February");
}
else if (numero == 3){
    console.log("March");
}
else if (numero == 4){
    console.log("April");
}
else if (numero == 5){
    console.log("May");
}
else if (numero == 6){
    console.log("June");
}
else if (numero == 7){
    console.log("July");
}
else if (numero == 8){
    console.log("August");
}
else if (numero == 9){
    console.log("September");
}
else if (numero == 10){
    console.log("October");
}
else if (numero == 11){
    console.log("November");
}
else if (numero == 12){
    console.log("December");
}
var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

const PI = 3.14159
var raio = parseFloat(lines.shift());

volume = ((4 / 3.0) * (PI * Math.pow(raio, 3)))

console.log('VOLUME = ' + volume.toFixed(3))
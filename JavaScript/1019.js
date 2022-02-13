var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");

let total = parseInt(lines.shift());

let hr = parseInt(total / 3600);
let Tmin = parseInt(total % 3600);
let min = parseInt(Tmin / 60);
let sec = parseInt(Tmin % 60);

console.log(`${hr}:${min}:${sec}`);

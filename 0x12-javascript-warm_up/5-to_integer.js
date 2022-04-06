#!/usr/bin/node
let arg = process.argv;
console.log(isNaN(parseInt(arg[2])) ? 'Not a number' : 'My number: ' + parseInt(arg[2]));

'use strict';
let globalVar = "global";
{
let name = 'hyun';
console.log(name);

name = "hello";
console.log(name);

console.log(globalVar);
}

console.log(name);


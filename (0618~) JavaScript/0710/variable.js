'use strict';
let globalVar = "global";
{
let name = 'hyun';
console.log(name);

name = "hello";
console.log(name);

// 지역안에서는 전역변수 사용 가능.
console.log(globalVar);
}

// 출력 X (공백)
console.log(name);


//var


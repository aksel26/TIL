'use strict';


const array = new Array();
const arr2 = [1,2];

const fruits = ['apple', 'banana'];

console.log(fruits);
console.log(fruits.length);
console.log(fruits[0]);

for(let i = 0 ; i<fruits.length ; i ++){
    console.log(fruits[i]);
}

for(let fruit of fruits){
    console.log(fruit);
}

fruits.forEach(function(fruit, index){
    console.log(fruit, index);
});

// 익명함수는 Arrow 함수를 이용할 수 있다.
fruits.forEach((fruit, index) => {
    console.log(fruit, index);
});


fruits.forEach((fruit) => console.log(fruit));


// Addition, deletion, copy

fruits.push('peach');
console.log(fruits); 

fruits.unshift('orange');
console.log(fruits); 
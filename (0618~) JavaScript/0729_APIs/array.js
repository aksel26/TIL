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

//그렇다면 지정된 포지션에서 지우는 건 ?
// ===> splice


fruits.push('peach','oracne',' strawberry');
console.log(fruits); 

fruits.splice(1,1);
console.log(fruits); 

fruits.splice(1,1, 'a','b');
console.log(fruits);

// combine two array

const fruits2 = ['add1', 'add2'];
const newFruits = fruits.concat(fruits2);
console.log(newFruits); 


// console.clear();
console.log(fruits);
console.log(fruits.indexOf('a'));
console.log(fruits.includes('empty'));

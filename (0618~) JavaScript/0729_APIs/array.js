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


 
class Student {
    constructor(name, age, enrolled, score) {
        this.name = name;
        this.age = age;
        this.enrolled = enrolled;
        this.score = score;
    }
}
const students = [
    new Student('A', 29, true, 45),
    new Student('B', 28, false, 80),
    new Student('C', 30, true, 90),
    new Student('D', 40, false, 66),
    new Student('E', 18, true, 88),
];

// console.clear();
//  const result = students.find(function (student, index){
//         return student.score === 90;
//     })

// const result = students.find((student) => student.score === 90);


// const result = students.some((student) => student.score < 50);
// console.log(result);
// const result2 = students.every((student) => student.score < 50);
// console.log(result2);

// 평균 구하기 : 

// reduce : 배열 내부의 누적 합

// const result = students.reduce((prev,curr) => {
//     console.log('---------');
//     console.log(prev);
//     console.log(curr);
//     return prev + curr.score;
// }, 0);

// console.log(result);

// const result = students.reduce((prev,curr) => prev+curr.score,0);
// console.log(result/students.length);

const result = students
.map((student) => student.score)
.filter((score) => score>=50)
.join();
console.log(result);
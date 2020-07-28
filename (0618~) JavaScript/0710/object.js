function print(person) {
    console.log(person.name);
    console.log(person.age);
}
const sam = { name: 'sam', age: 13 };


sam.hasJob = true;
console.log(sam.hasJob);

print(sam);


console.log(sam.name);
console.log(sam['name']);

sam['hasJob'] = true;
console.log(sam.hasJob);

function printValue(obj, key) {
    console.log(obj.key);
}
function printValue(obj, key) {
    console.log(obj[key]);
}
printValue(sam, 'name');



const person1 = { name: 'bob', age: 13 };
const person2 = { name: 'Dave', age: 12 };
const person3 = { name: 'Sam', age: 14 };
const person4 = { name: 'chango', age: 23 };
// const person5 = [nam...]// 너무 많아...

const person5 = new Person('kkang', 32);
console.log(person5);
function Person(name, age) {
    //this = {}; 이부분이 생략되었따.
    this.name = name;
    this.age = age;
    // return this;

}

console.log('name ' in sam);


for (key in sam) {
    console.log(key);
}

const array = [1, 2, 3, 4];
for (value of array) {
    console.log(value);
} 
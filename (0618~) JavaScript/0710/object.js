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


const user = {name: 'user1', age: 20};
const user2 = user;
console.log(user2);

const user3 = {};
for(key in user){
    user3[key] = user[key];
}

console.log(user3);

const user5 = {};
Object.assign(user5, user);
console.log(user5);


const fruit1 = {color:'blue'};
const fruit2 = {color:'red', flavor : 'sweet'};

// 동일한 프로퍼티가 있을경우 뒤에서부터 앞으로 값을 덮어 씌운다.
const mixed = Object.assign({}, fruit1, fruit2);


console.log(mixed.flavor, mixed.color);
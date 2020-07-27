'use strict';
class Person {
    //constructor
    constructor(name, age) {
        //fields
        this.name = name;
        this.age = age;
    }

    speak() {
        console.log(`${this.name}: hello!`);
    }
}
const Sam = new Person('Smith', 22);
console.log(Sam.name);
console.log(Sam.age);
Sam.speak();


class User{
    constructor(firstName,lastName, age){
        this.firstName = firstName;
        this.lastName =lastName;
        this.age = age;

    }

    get age(){
        return this._age;
    }

    set age(value){
        if(value<0){
            throw Error('age error');
        }
        this._age = _value;
    }
}


const user1 = new User('Steve','Jobs', -1);
console.log(user1.age);

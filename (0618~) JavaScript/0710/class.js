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
// console.log(Sam.name);
// console.log(Sam.age);
// Sam.speak();


class User {
    constructor(firstName, lastName, age) {
        this.firstName = firstName;
        this.lastName = lastName;
        this.age = age;

    }

    get age() {
        return this._age;
    }

    set age(value) {
        if (value < 0) {
            // throw Error('age error');
        }
        this._age = value;
    }
}


const user1 = new User('Steve', 'Jobs', -1);
// console.log(user1.age);


class Shape {
    constructor(width, height, color) {
        this.width = width;
        this.height = height;
        this.color = color;

    }

    draw() {
        console.log(`drawing ${this.color} color of`);
    }

    getArea() {
        return this.width * this.height;
    }
}


class Triangle extends Shape {
    // 오버라이딩
    getArea() {
        return (this.width * this.height) / 2;
    }

    draw() {
        // 부모의 메서드 호출
        super.draw();
        console.log('triangle!');
    }
}
const test1 = new Shape(30, 20, 'blue');
test1.draw();
console.log(test1.getArea());
const triange = new Triangle(30, 20, 'red');
triange.draw();
console.log(triange.getArea());






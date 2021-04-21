// var 학생1 = {name :  'Kim', age : 15}
// var 학생2 = {name :  'John', age : 15}
// var 학생3 = {name :  'Paul', age : 15}
// ....

// Constructor
function Student() {
  this.name = "Kim" // this는 새로 생성되는 object를 뜻함 = instance
  this.age = 15
  this.sayHi = function () {
    console.log(`hi ${this.name}`)
  }
}
new Student() //이러면 Object뽑힙

var 학생1 = new Student()
var 학생2 = new Student()

console.log(학생1.sayHi())
console.log(학생2.sayHi())

//계속 'Kim' 만 고정된다..
console.log(학생1)
console.log(학생2)
// Student { name: 'Kim', age: 15, sayHi: [Function (anonymous)] }
// Student { name: 'Kim', age: 15, sayHi: [Function (anonymous)] }

// Constructor에 파라미터를 넣어보자
function Student2(name, age) {
  this.name = name // this는 새로 생성되는 object를 뜻함
  this.age = age
  this.sayHi = function () {
    console.log(`hi ${this.name} your age is ${age}`)
  }
}

학생3 = new Student2("John", 32)

console.log(학생3.sayHi())



// 예제
// function Product(name, price) {
//   this.name = name
//   this.price = price
//   this.부가세 = function () {
//     console.log(this.price * 0.1)
//   }
// }

// var product1 = new Product("shirt", 50000)
// var product2 = new Product("pants", 60000)
// console.log(product1.부가세())
// console.log(product2.부가세())




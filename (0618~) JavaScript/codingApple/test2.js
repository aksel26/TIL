//Prototype : 유전자

function Student1(name, age) {
  this.name = name // this는 새로 생성되는 object를 뜻함
  this.age = age
  this.sayHi = function () {
    console.log(`hi ${this.name} your age is ${age}`)
  }
}

var 학생3 = new Student1("John", 32)
// 학생3(자식)은 Student1인 부모로부터 물려받은 것으로 생각할 수 있다. (name, age, sayHi)

// JS에만 있는 특징 Prototype
// 상속을 구현할 수 있는 또하나의 문법

// 컨스트럭터를 만들면 prototype이라는 공간이 자동으로 생김

console.log(Student1.prototype)

// prototype에 등록하면 다 물려줄 수 있다

Student1.prototype.gender = "남"

console.log(학생3.gender) //남

// 학생3.name 이 동작할때는 ..
// 1. 학생3이 직접 name을 가지고 있는가 ?
// 2. 그럼 학생3의 부모 유전자(Student1.prototype)를 가지고 있는가 ? 그럼 실행!

// 내장함수는 어떻게 동작하나 ?
학생3.toString() //Object / Array에 붙일 수 있는 내장합수
// 학생3.push()...
// 학생3은 toString메서드가 없다. 어떻게 가능 ?
// 값이 없으면 부모의 프로토타입을 찾아본다.
// 없으면 또 그의 부모를 찾는다.

// 부모의 끝판왕은 뭐냐

var arr = [1, 2, 3]
var arr = new Array(1, 2, 3) //실제 어레이가 만들어지는 방식

arr.sort() //arr은 없네, 그럼 arr부모의 유전자(Array.prototype)에 sort가 있나  ? 있다.

// 오브젝트도 마찬가지

var obj = { name: "Kim" }
var obj = new Object()
obj.toString()
// 1. obj에는 toString없네
// 2. Object.prototype에 toString이 존재한다.

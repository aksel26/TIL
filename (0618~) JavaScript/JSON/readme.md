# JSON

```javascript
// JSON
// JS Object Notation

// 1. Object to JSON
// stringify(obj)

let json = JSON.stringify(true);
console.log(json);

json = JSON.stringify(['apple','banana']);
console.log(json);
// 싱글quotation이 아닌 더블 quotation이 나왔다. 
// 이것이 JSON 규격 ["apple","banana"]

const rabbit = {
    name :'tori',
    color : 'white',
    size : null,
    birthDate : new Date(),
    // symbol : Symbol('id'),
    jump: () => {
        console.log(`${this.name} can jump!`);
    },
};
json = JSON.stringify(rabbit);
console.log(json);
// {"name":"tori","color":"white","size":null,"birthDate":"2020-09-18T10:28:43.923Z"}
// 유의 
// : 여기서 function인 jump는 포함되지 않았고, JS특유의 symbol또한 포함되지 않았다.


// 원하는 property만 뽑아내고 싶을 때 사용하는 옵션
json = JSON.stringify(rabbit,["name"]);
// {"name":"tori"}
json = JSON.stringify(rabbit,['name','color','size']);
// {"name":"tori","color":"white","size":null}
console.log(json);

// 콜백함수를 이용해 조정하기
json = JSON.stringify(rabbit,(key, value) => {
    console.log(`key : ${key}, value : ${value}`);
    return value;
});
console.log(json);
// [Log] key : , value : [object Object] (json.js, line 40)
// [Log] key : name, value : tori (json.js, line 40)
// [Log] key : color, value : white (json.js, line 40)
// [Log] key : size, value : null (json.js, line 40)
// [Log] key : birthDate, value : 2020-09-18T10:34:46.491Z (json.js, line 40)
// [Log] key : jump, value : () => { (json.js, line 40)
//         console.log(`${name} can jump!`);
//     }
// ==> 최상위 값들 부터 불러와짐

// 활용 예제
json = JSON.stringify(rabbit,(key, value) => {
    console.log(`key : ${key}, value : ${value}`);
    return key==='name' ? 'kim' : value;
});
console.log(json); 
// 이름이 kim으로 바뀌었다.
// {"name":"kim","color":"white","size":null,"birthDate":"2020-09-18T10:37:43.705Z"}




// 2. Object to Object
// parse(obj)
// console.clear();
json = JSON.stringify(rabbit);
// const obj = JSON.parse(json);
// console.log(obj);
// {name: "tori", color: "white", size: null, birthDate: "2020-09-18T10:39:36.525Z"}

rabbit.jump();
// can.jump!



// obj.jump();
//에러가 발생한다.
// 왜?
//1. 변환한 오브젝트는 serialize 된 string으로 만들어진 json으로 부터 다시 object를 만들었기 때문에
//2. 함수는 serialize될때 포함이 되지 않았다.
//3. 다시 json으로 부터 object를 만든 것에는 jump라는 api가 없다. 
 

console.log(rabbit.birthDate.getDate());
// 18

// console.log(obj.birthDate.getDate());
// 오류
// 왜? 
// birthDate는 string이기 때문.
// json-> obj parsing할때는 당연히 string으로 가져와진다.
// 하지만 rabbit안에 있는 Date는 Object 자체이기 때문에 오류.
// reviver 콜백함수로 가져올 수 있다. 

const obj = JSON.parse(json,(key,value) =>{
    console.log(`key : ${key}, value : ${value}`);
    return key == 'birthDate' ? new Date(value) : value; 
})
// [Log] key : name, value : tori (json.js, line 100)
// [Log] key : color, value : white (json.js, line 100)
// [Log] key : size, value : null (json.js, line 100)
// [Log] key : birthDate, value : 2020-09-18T10:54:49.786Z (json.js, line 100)
// [Log] key : , value : [object Object] (json.js, line 100)

console.log(obj.birthDate.getDate());
// 18
```


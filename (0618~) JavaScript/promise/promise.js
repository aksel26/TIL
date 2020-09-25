'use strict';


// Promise 는 Javascript의 내장 객체
// 비동기 수행에 콜백대신 유용하게 사용할 수 있다.

// 2가지 포인트
// 1. State
// 2. Producer & Consumer의 차이점 알기
 
// ---------------------------------------------------

// 1. State
// operation중일때는 pending상태가 된다.
// operation을 끝낼때는 fulfill or rejected 상태가 된다.
// pending -> fulfilled or rejected


// 2. Producer & Consumer

// 2-1. Producer
// 2-1-1. Producer만들기
// const promise = new Promise((resolve,reject) =>{
//      // doing some heavy work (network, read files)
//      console.log('doing something ...');
// })
// 유의 !
// promise를 만드는 순간 executer라느 콜백함수가 바로 실행된다는 것을 알 수 있다.
// --> 네트워크 요청을 사용자가 요구했을 때만 사용되야 한다면 ? 위처럼 하면 안된다는 것을 유의


const promise = new Promise((resolve,reject) =>{
    console.log('doing something ...');
    setTimeout(()=>{
        // resolve('nice work');
        reject(new Error(
            'no network'
        ));
    },2000)
})


// 2-2. consumer : then, catch, finally 를 통해 값을 받아올 수 있다.
// 2-2-1. then
// 위에 resolve가 잘 수행이 되어서 전달한 값이 value의 파라미터로 전달된 것. 
promise.then((value) =>{
    console.log(value);
})
// 반면 resolve말고 reject가 온다면 ?
// Uncaught Error : no network 발생 --> then은 성공시에만 불러오는 것이기 때문
// catch를 사용하자
// then을 부르면 Promise가 불러와지고 리턴된 Promise에 catch를 등록하는 것.
promise
.then(value =>{
    console.log(value);
})
.catch(error=>{
    console.log(error);
})
.finally(()=>{
    console.log('finally') //성공실패와 무관하게 무조건 실행
});


// 3. promise chaining
const fetchNumber = new Promise((resolve,reject)=>{
    setTimeout(() => resolve(1),1000);
});

//then 은 값 또는 promise를 전달할 수 있다.
fetchNumber
.then(num => num * 2)
.then(num => num * 3)
.then(num => {
    return new Promise((resolve,reject)=>{
        setTimeout(() => resolve(num -1), 1000);
    });
})

.then(num => console.log(num));

// 17:27
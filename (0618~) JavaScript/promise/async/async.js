// async & aswait
// 깔끔하게 promise를 사용할 수 있다.
// 어느것이 더 좋은것인지는 상황에 따라 다르다

// 1. async
// function fetchUser(){
//     //do NW request in 10 secs...
//     return 'ellie';
// }
// const user = fetchUser();
// console.log(user);
//==> 비동기적인 코드를 전혀 하지 않으면 한줄한줄씩 처리하는 동기적으로 처리를 하기 때문에
//    오래걸린다.

//Promise 활용
// function fetchUser(){
//     return new Promise((resolve, reject)=>{
//         return 'kim';
//     });
// }
// 이렇게 resolve,reject를 호출하지 않으면 
// console창에 Promise가 pending상태로 나온다.
// 꼭 resolve나 reject로 완료를 해 주어야 한다.
function fetchUser() {
    return new Promise((resolve, reject) => {
        resolve('kim');
    });
}
// const user = fetchUser();
// user.then(console.log);
// console.log(user);



// promise를 이용하지 않고도 비동기를 작성할 수 있는 방법
// 1. async
// 사용법 : 함수 앞에 async를 붙여 준다.
// 코드블럭이 자동으로 promise로 바뀌게 된다.
async function fetchUser() {
    return 'kim';
}
const user = fetchUser();
user.then(console.log);
console.log(user);
// promise를 리턴한다.


// 2. await
// async가 붙은 함수 안에서만 사용 가능하다.
function delay(ms) {
    return new Promise(resolve => setTimeout(resolve, ms));
}
async function getApple() {
    // awaiit : delay가 끝날때까지 기다려
    await delay(3000);
    return 'I got an apple';
}
async function getBanana() {
    await delay(3000);
    return 'I got a banana';
}

// 비교
// function getBanana(){
//     return delay(3000)
//     .then(()=>'I got banana');
// } 




function pickFruits() {
    return getApple()
        .then(apple => {
            return getBanana()
                .then(banana => `${apple} + ${banana}`);
        });
}
// 이렇게 promise도 중첩되서 콜백지옥이 발생할 수 있다.
// async 키워드 이용하면
async function pickFruits(){
    const apple = await getApple();
    const banana = await getBanana();
    return `${apple}+ ${banana}`
}


// banana와 apple은 서로 연관이 전혀 없기 때문에 await으로 인한 대기시간이 그만큼 길어지게 되는 비효율 발생
// 병렬적으로 기능을 수행하는게 좋다.
async function pickFruits(){
    // Promise를 만들면 바로 실행된다.
    // 병렬적으로 수행 가능하게 된다.
    const applePromise = getApple();
    const bananaPromise = getBanana();
    // 하지만 위처럼 하지는 않는다.
    const apple = await applePromise;
    const banana = await bananaPromise;
    return `${apple}+ ${banana}`
}

pickFruits().then(console.log);


// 3. Useful Promise APIs
// 3-1. Promise.all
// 일단 하나로 배열 형태로 모아서 반환
function pickAllFruits(){
    return Promise.all([getApple(),getBanana()])
    .then(fruits=> fruits.join(' + '));

}
pickAllFruits().then(console.log);


// 3-2. Promise.race
// 먼저 수행되는놈을 리턴한다.
function pickOnlyOne(){
    return Promise.race([getApple(),getBanana()]);
}

pickOnlyOne().then(console.log);
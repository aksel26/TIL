'use strict'

// 1. 동기와 비동기
// JavaScript is syncronous. 
// hoisting 된 이후부터 하나하나 차례로 동기적으로 실행된다는 의미
// hoisting?
// var , function 선언이 자동적으로 제일 위로 올라가는 것
// console.log('1');
// console.log('2');
// console.log('3');


//비동기 예제
console.log('1');
//기본으로 제공하는 브라우저 API, 지정한 시간이 지나면 콜백함수를 호출
setTimeout(function () {
    console.log('2');
}, 1000);
console.log('3');


// 2. 콜백 다시 정리
// : setTimeout안에 우리가 만든 함수를 인자로 지정.
// 1초후 다시 불러달라 -> callBack
setTimeout(function () {
    console.log('2');
}, 1000);
// ==> arrowFunction으로 간단하기 표현 가능
setTimeout(() => console.log('2'), 1000);

//3. 동기 콜백
function printimmediately(print) {
    print();
}
printimmediately(() => console.log('hello'));


// 실제 순서를 생각해보면
// 1. function printimmediately(print){
//     print();
// }--> hoisting
// 2. console.log('1');
// 3. console.log('3');
// 4.printimmediately(()=>console.log('hello'));
// 5. setTimeout(()=>console.log('2'),1000);


// 4. 비동기 콜백

function printWithDelay(print, timeout) {
    setTimeout(print, timeout);
}

printWithDelay(() => console.log('async Callback'), 2000);

// 실제 순서를 생각해보면
// 1. function printWithDelay(print, timeout){
//     setTimeout(print,timeout);
// }
// 2. console.log('1');
// 3. setTimeout(()=>console.log('2'),1000)
//     --> 브라우저 요청
// 4. console.log('3');
// 5. printWithDelay(()=>console.log('async Callback'),2000);


// 5. 콜백지옥 ?
// 콜백nesting이 너무 많게하는것을 지양하자..
// 가독성이 떨어진다.
class UserStorage {
    loginUser(id, password, onSuccess, onError) {
        setTimeout(() => {
            if (
                (id === 'kim' && password === '1243') ||
                (id === 'kevin' && password === '3333')

            ) {
                onSuccess(id);
            } else {
                onError(new Error('not found'));
            }
        }, 2000);
    }

    getRoles(user, onSuccess, onError) {
        setTimeout(() => {
            if (user === 'kim') {
                onSuccess({ name: 'kim', role: 'admin' });
            } else {
                onError(new Error('not access'));
            }
        }, 1000)

    }
}

const userStorage = new UserStorage();
const id = prompt('enter your id');
const password = prompt('enter your pw');

userStorage.loginUser(
    id,
    password,
    user => {
        userStorage.getRoles(
            user,
            userWithRole => {
                alert(
                    `hello ${userWithRole.name},you have a ${userWithRole.role} role`
                );
            },
            error => {
                console.log(error);
            }
        );
    },

    error => {
        console.log(error)
    }
);


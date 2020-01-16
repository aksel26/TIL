
// 쿼리 셀렉터 : 원하는 셀렉터를 다 가져옴. 클래스, css.,,,
//찾은 첫번째 것을 가져옴

// 쿼리셀렉터올 : 모든걸 가져오는데 엘리먼테를 array로 가져옴

// getElmentById


//로컬에 저장하는 방법

// 1. 개발자도구 : Application -> localStorage
const form = document.querySelector(".js-form")

    input = form.querySelector("input")

    greeting = document.querySelector(".js-greetings")

const USER_LS = "currentUser",
SHOWING_CN ="showing";


function saveName(text){
    localStorage.setItem(USER_LS,text)
}


function handleSubmit(event){
    event.preventDefault();   //이벤트에 대한 기본동작을 막는 메서드
    const currentValue = input.value;
    paintGreeting(currentValue);
    saveName(currentValue);// 사용자의 이름을 기억

}
function askForName(){
    form.classList.add(SHOWING_CN);
    form.addEventListener("submit",handleSubmit)
}

function paintGreeting(text){

    console.log(text)
    form.classList.remove(SHOWING_CN);
    greeting.classList.add(SHOWING_CN);
    greeting.innerText = `hello ${text}`;
}

function loadName(){
    console.log(USER_LS)
    const currentUser = localStorage.getItem(USER_LS);

    if(currentUser ===null){
      askForName();
    }else{
        paintGreeting(currentUser);
    }
}


function init(){
    loadName();
}

init()
const title= document.querySelector(".title");
        mytitle= title.querySelector("h1")
        console.log(mytitle)


const CLICKED_CLASS ="clicked";

function handleClick(){
        
}


// const BASE_COLOR ="rgb(52,73,94)";
// const OTHER_COLOR="#7f8c8d";

// function handleClick(){
//    const currentColor = mytitle.style.color;
//    if(currentColor === BASE_COLOR){
//        title.style.color =OTHER_COLOR;
//    }else{
//        title.style.color = BASE_COLOR;
//    }
//    console.log(currentColor)
    
// }


function init(){
    mytitle.style.color = BASE_COLOR;
    mytitle.addEventListener("click",handleClick)
}

init()




//함수를 즉시 호출하지 않는다. 괄호를 붙이지 않으면



// # 이벤트 
// 클릭 리사이즈 인풋 ... 등등
// 중간에 이벤트를 가로챌 수 있다.
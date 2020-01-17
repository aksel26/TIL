const toDoForm = document.querySelector(".js-toDoForm"),
toDoInput = toDoForm.querySelector("input"),
toDoList = document.querySelector(".js-toDoList");

const TODO_LS="toDos";

function paintToDo(text){
    const li=document.createElement("li")
    const delBtn = document.createElement("button")
    delBtn.innerHTML="❌";
    const span = document.createElement("span")
    span.innerText = text
    li.appendChild(span);
    li.appendChild(delBtn);
    toDoList.appendChild(li)

}


function handleSubmit(event){
    event.preventDefault();
    const currentValue = toDoInput.value;
    paintToDo(currentValue)
    toDoInput.value ="";
}

function loadToDos(){
    const todOos =localStorage.getItem(TODO_LS);

    if(todOos!==null){

    }else{

    }
}


function init(){

loadToDos();
toDoForm.addEventListener("submit",handleSubmit)

}


init();
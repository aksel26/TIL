<template>
  <div id="app">
    <TodoHeader></TodoHeader>
    <TodoInput v-on:addTodo="addTodo"></TodoInput>
    <TodoList v-bind:propsdata="todoItems" @removeTodo="removeTodo"></TodoList>
    <TodoFooter v-on:removeAll="clearAll"></TodoFooter>
    
  </div>

</template>


<script> //ES6 방식
import TodoHeader from './components/TodoHeader'
import TodoFooter from './components/TodoFooter'
import TodoInput from './components/TodoInput'
import TodoList from './components/TodoList'

export default {
  data(){
    return{
      todoItems:[]
    }
  },
  methods:{
    addTodo(todoItem){
      localStorage.setItem(todoItem,todoItem);
      this.todoItems.push(todoItem);
    },
    created(){
        if(localStorage.length>0){
            for(var i = 0 ; i<localStorage.length; i++){
                this.todoItems.push(localStorage.key(i));
                   
                
            }
        }
    },
    clearAll(){
      localStorage.clear();
      this.todoItems=[];
    },
    removeTodo(todoItem,index){
      localStorage.removeItem(todoItem);
            this.todoItems.splice(index,1);
    }  
    },
  // },
  components:{
    'TodoHeader' : TodoHeader,
    'TodoInput' : TodoInput,
    'TodoFooter' : TodoFooter,
    'TodoList' : TodoList
  }  
}
</script>

<style>
body{
        text-align: center;
        background-color: #f6f6f6;
    }
</style>
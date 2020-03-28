<template>
  <div id="app">
    <TodoHeader></TodoHeader>
    <TodoInput></TodoInput>
    <TodoList></TodoList>
    <TodoFooter></TodoFooter>
    
  </div>

</template>


<script> //ES6 방식
import TodoHeader from './components/TodoHeader'
import TodoFooter from './components/TodoFooter'
import TodoInput from './components/TodoInput'
import TodoList from './components/TodoList'

export default {
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
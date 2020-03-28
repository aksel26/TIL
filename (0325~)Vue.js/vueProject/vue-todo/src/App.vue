<template>
  <div id="app">
    <TodoHeader></TodoHeader>
    <TodoInput><TodoInput>
    <TodoList><TodoList>
    <TodoFooter><TodoFooter>
  </div>

</template>


<script> //ES6 방식
import TodoHeader from './components/TodoHeader.vue'
import TodoFooter from './components/TodoFooter.vue'
import TodoInput from './components/TodoInput.vue'
import TodoList from './components/TodoList.vue'
</script>

<script>
export default {
  components:{
    'TodoHeader' : TodoHeader,
    'TodoInput' : TodoInput,
    'TodoFooter' : TodoFooter,
    'TodoList' : TodoList
  }  
}
</script>

<style scoped>

</style>
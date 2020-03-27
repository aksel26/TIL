
<template>
    <div>
        <span>
            <button>{{message}}</button>
        </span>
    </div>
</template>

<script lang="ts">
import Vue from 'vue'
export default Vue.extend({
    data :{
        messge:'click this button';
    }
})
</script>

<style scoped>
    span{
        font-size:12px;
    }
</style>
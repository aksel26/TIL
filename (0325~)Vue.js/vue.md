# Vue



## 뷰 컴포넌트 통신

이전에는 한 화면을 하나의 뷰로 취급 : 언제든지 호출이 가능

뷰에서는 컴포넌트 단위로 다루기 때문에 호출이 불가능 ( scope가 독립적 )



### 상위에서 하위 컴포넌트로 데이터 전달 (`props`)

```javascript
Vue.component('child-component',{
        props:['props속성 이름'],
    });
```

```html
<child-component v-bind:props 속성이름 = "상위 컴포넌트의 data속성"></child-component>
```





### 하위에서 상위 컴포넌트로 이벤트 전달 

> 이벤트를 발생 (event emit) 시켜 상위 컴포넌트에 신호를 보낸다.

- 데이터를 전달할 수는 없나 ?  *이벤트 버스*로 가능 ( 단, 단방향 데이터 흐름에 어긋난다.)

- 이벤트 발생 & 수신 형식

  - 수신 : `$emit()` , `v-on:`

    1. `this.$emit('이벤트명');  `
    2. `<child-component v-on:이벤트명="상위 컴포넌트의 메서드 명"></child-compoent>`

    

#### 이밴트버스

- 같은 레벨의 컴포넌트에 참조가 불가능하다 (단방향 규칙 때문)

- 이렇게 되면 강제로 상위 컴포넌트를 만들어 참조해야 할 수 밖에 없다.

- 이를 개선하기 위해 <u>이벤트 버스</u>를 활용한다.

- props를 활용하지 않고도 컴포넌트간에 직접적으로 데이터를 전달 할 수 있다.

  - 하지만 수가 많아지면 구분이 어려워짐
  - 뷰엑스라는 상태관리도구가 필요함.

  ```javascript
  // ===============  기본 형식  ===============
  
  // 이벤트버스를 위한 추가 인스턴스를 별개로 만들어 준다.
  var eventBus = new Vue();
  
  //이벤트를 보내는 컴포넌트  $emit
  method:{
    메서드명 : function(){
      eventBus.$emit('이벤트명', 데이터);
    }
  }
  
  // 이벤트를 받는 컴포넌트  $on
  methods:{
    created:function(){
      eventBus.$on('이벤트명',function(데이터){
        ....
      })
    }
  }
  ```





- ```javascript
   var eventBus = new Vue();
  
      Vue.component('child-component',{
          template:'<div>하위 컴포넌트 영역입니다. <button v-on:click="showLog">show</button></div>',
          methods:{
              showLog:function(){
                  eventBus.$emit('triggerEventBus',100);
              }
          }
  
      })
  
  
      new Vue({
          el:'#app',
          created:function(){
              eventBus.$on('triggerEventBus',function(value){
                  console.log('이벤트를 전달 받음 , 전달받은 값 : ' + value)
              })
          }
      })
  ```

  



뷰라우터

```html
<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>

<body>

    <div id="app">
    <h3>Router 예제</h3>
    <p>
      
  <!-- ==================== 1 ====================-->
        <router-link to="/main">Main Component로 이동</router-link>
        <router-link to="/login">Login Component로 이동</router-link>
    </p>
      
      
 <!-- ==================== 2 ====================-->
    <router-view></router-view>
</div>

</body>



<script src="https://cdn.jsdelivr.net/npm/vue/dist/vue.js"></script>
<script src="https://unpkg.com/vue-router/dist/vue-router.js"></script>
<script>
  
  // ==================== 3 ====================
  // Main, Login 컴포넌트 정의
    var Main = {
        template: '<div>main</div>'
    };
    var Login = {
        template: '<div>Login</div>'
    }

    
  // ==================== 4 ====================
    var routes = [
        {
            path: '/main',
            component: Main
        },
        {
            path: '/login',
            component: Login
        }
    ];

  // ==================== 5 ====================

    var route = new VueRouter({
        routes
    });

  
 // ==================== 6 ====================
    var app = new Vue({
        router
    }).$mount('#app');


</script>

</html>
```



네스티드 라우터

최소 2개 이상의 컴포넌트를 화면에 나타낼 수 있다.



네임드 뷰

>  여러개의 컴포넌트를 동시에 표시하는 라우팅 방식



네스티드 라우터 vs 네임드뷰 ?

> 네스티드 라우터는 자식 관계로 하위 컴포넌트가 표시되는 것,
>
> 네임드 뷰는 같은 레벨에서 여러개가 표시되는 것.	





뷰 HTTP 통신

1. 뷰 리소스

   ```javascript
   <!DOCTYPE html>
   <html lang="en">
   <head>
       <meta charset="UTF-8">
       <meta name="viewport" content="width=device-width, initial-scale=1.0">
       <title>Document</title>
   </head>
   <body>
       <div id ="app">
           <button v-on:click="getData">프레임워크 목록 가져오기</button>
       </div>
   
   
   <script src="https://cdn.jsdelivr.net/npm/vue/dist/vue.js"></script>
   <script src="https://cdn.jsdelivr.net/npm/vue-resource@1.3.4"></script>
   
   <script>
        new Vue({
            el:'#app',
            methods:{
                getData:function(){
                    this.$http.get(`https://raw.githubusercontent.com/joshua1988/doit-vuejs/master/data/demo.json`).then(function(response){
                        console.log(response);
                      
                      //문자열 형태로 받아오기 때문에 JSON parsing이 필요하다.
                        console.log(JSON.parse(response.data));
                    });
                }
            }
        })
   
   </script>
   </body>
   </html>
   ```

   <img src="vue.assets/image-20200325221559195.png" alt="image-20200325221559195" style="zoom:33%;" />

   2. 엑시오스

      뷰 커뮤니티에서 가장 많이 사용되는 http 라이브러리

      <u>Promise 기반</u>의 API형식

```javascript
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>

    <div id="app">
        <button v-on:click="getData">프레임워크 목록 가져오기</button>
    </div>
    


    <script src="https://cdn.jsdelivr.net/npm/vue/dist/vue.js"></script>
    <script src="https://unpkg.com/axios/dist/axios.min.js"></script>


    <script>

        new Vue({
            el:'#app',
            methods:{
                getData:function(){
                    axios.get('https://raw.githubusercontent.com/joshua1988/doit-vuejs/master/data/demo.json').then(function(response){
                      
                      //객체 형태로 받아오기 때문에 JSON파싱이 필요 없다.
                        console.log(response);
                    })
                }
            }
        })
    </script>
</body>
</html>
```



<img src="vue.assets/image-20200325222355437.png" alt="image-20200325222355437" style="zoom:33%;" />




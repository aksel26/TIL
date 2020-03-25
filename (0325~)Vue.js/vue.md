Vue



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

- 




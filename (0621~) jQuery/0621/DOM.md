## 문서객체모델(DOM)

- 트리구조

- DOM의 객체들을 시각화해 브라우저에 나타냄.

<img src="DOM.assets/image-20200307214636508.png" alt="image-20200307214636508" style="zoom: 25%;" />



- 최상위 객체인 **document객체**가 다른 객체의 접근을 도와준다.

<img src="DOM.assets/image-20200307214835087.png" alt="image-20200307214835087" style="zoom: 33%;" />





<img src="DOM.assets/image-20200307215429894.png" alt="image-20200307215429894" style="zoom: 33%;" />

### jQuery를 이용해 DOM트리 다루기

- 다양한 방식으로 DOM 객체 선택하기
- DOM트리에 요소 추가 및 빼기
- DOM트리의 요소 변형시키기

#### jQuery = 선택 + 동작



##### 		선택(요소 받아오기)

- CSS선택자와 동일한 방식
  - `$('#아이디')` : 아이디
  - `$('li')` : 태그
  - `$('.클래스')` : 클래스
  - `$('ul li:last-child')` :li태그 중 마지막 자식



- jQuery에서 제공하는 방식

  - **filter**

    > 선택된 요소를 한번 더 걸러주는 메서드

    `$('button').filter('.color-3').text('SELECTED');`

  - **not**

    > filter의 반대. 선택된 요소 중에서 조건에 해당되는 것들을 제외

    `$('button').not('.color-3').text('selected');`

  - **eq**

    > 선택된 요소들 중 n번째 요소 하나만 골라낸다. 0부터 시작!

    `$('button').eq(1).text(selected);`

  - **parent**

    > 부모 요소를 찾아준다.

    `$('button').parent().css('background-color','black');`

  - **children**

    > 선택된 요소의 자녀요소를 모두 골라준다.

    `$('#box1').children().css('background-color','black');`

    *children(안에 조건을 넣으면 filter 역할도 함께 가능)*

  - **find**

    > 선택된 요소의 자녀, 자녀의 자녀 를 골라주되 조건에 맞는 요소만 찾아준다.

    `$('#box1').find('.color-2').css('background-music','black');`

    **children**은 한 단계 아래(<u>직속 자녀)만 찾아</u>주는 반면 **find**<u>모든 자녀</u>를 찾는데에 차이가 있다.

  - **siblings**

    > 선택된 요소의 이웃 요소를 골라준다.

    `$(#btn-1).siblings().text('selected');`

    

##### 동작

- 클래스 관련

  ```javascript
  // item에 header이라는 클래스 추가
  $('#item').addClass('header');
  
  // item에 header이라는 클래스 제거
  $('#item').removeClass('header');
  
  // item에 header이라는 클래스가 없으면 추가, 있으면 제거
  $('#item').toggleClass('header');
  
  // item에 header라는 클래스가 있으면 true, 없으면 false 리턴
  $("#item").hasClass('header');
  ```

- 속성 관련

  ```javascript
  // 이미지 태그의 src 속성 받아오기
  $('img').attr('src');
  
  // 이미지 태그의 src 속성 지정하기
  $('img').attr('src', 'images/logo.png');
  
  // h1 태그의 텍스트 받아오기
  $('h1').text();
  
  // h1 태그에 텍스트 지정하기
  $('h1').text('Hello World!');
  
  // h1 태그에 HTML 텍스트 지정하기
  $('h1').html('<b>Hello World!</b>');
  ```

- 스타일 관련

  ```javascript
  // item의 font-weight를 bold로 지정하기
  $("#item").css('font-weight','bold');
  
  // item의 background-color 가져오기
  $("#item").css('background-color');
  ```

  



#### jQuery는 단순 JS의 라이브러리

<img src="DOM.assets/image-20200307220621285.png" alt="image-20200307220621285" style="zoom:33%;" />





### HTML 요소 추가

- after

  `$('li').after('<li class='item"> 새로운 아이템</li>')`

  각각의 태그 뒤에 다 생겨버림

  

  `$('#todo-list li:last-child').after('<li class='item"> 새로운 아이템</li>')`

  마지막 태그 뒤에만 생긴다.

- before

  ----> **형제 관계**가 된다.

---

​		-----> **자식관계 **는 ?

- append 

  `$('ul').append('<li class='item"> 새로운 아이템</li>')`

  마지막 자식으로 들어감

  

- prepend

  `$('ul').prepend('<li class='item"> 새로운 아이템</li>')`

  첫번째 자식으로 들어감



### 이벤트 객체 파라미터

#### 이벤트 핸들러

`$(document).on('keydown',keyboardInput);`

```javascript
// 이벤트 객체 사용
function keboardInput(e){

console.log(e);

}
//안하면 비워두면 됨
function keboardInput(e){



}
```



### $(document).ready

```html
<script>
$(document).ready(whenReady){
	function whenReady(){
		$('#hello').on('click',sayHello);
			function sayHello(){
				alert($('#hello').text();
				$('#hello').css('background','red');
}
}
</script>
<body>

  ~ 내용 ~
  
</body>
```

#### 1. $(document).ready 사용을 하는 이유 ? 

>  보통 body태그 아래에 script코드를 입력하는데 그 위에 입력하게 되면 body객체가 호출되기 전에 scipt코드가 호출되고, 아무 반응도 일어나지 않는다.

​		--> <u>#hello 버튼 이벤트를 발생시키려고 하지만 hello객체는 생성되지 않았기 때문.</u>

​			이럴 때, **$(document).ready**를 사용하게 된다.

#### 2. 익명함수 ?

​	ready()를 사용하기 위해 억지로 whenReady함수를 만들어 주었다. (굳이 만들 필요 없는 함수) 이를 방지하기 위해 일회성 함수로 익명함수를 사용한다.

```javascript
$(document).ready(function(){ // 익명함수 부분
  	$('#hello').on('click',sayHello);
			function sayHello(){
				alert($('#hello').text();
				$('#hello').css('background','red');
}
});
```












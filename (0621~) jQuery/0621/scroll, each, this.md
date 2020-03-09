### 요소 숨기기

`$('#photo').hide();`

`$('#photo').show();`

`$('#photo').fadeOut(1000);`  :  시간 간격 두기



### 스크롤

- `$(window).scrollTop();` 현재 스크롤 위치,  맨위 : 0

```javascript
$(window).on('scroll',function(){

$(window).scrollTop();

})
```

- `$(window).scrollTop(100);`

- `$(window).scrollTop(0);` // 사이트 맨 위로 이동

  

#### 사이트 맨 위로 올라가는 애니메이션 추가

- `$('html,body').animate({scrollTop:0},500)` //500은 0으로 (첫번째 파라미터) 가는데 걸리는 시간



### each

```javascript
$('.card').each(function(){

	console.log('hello');

})

// 카드 클래스 안에 붙어 있는 요소에 각각 적용됨
```





```javascript
$('.card').each(function(){

console.log($(this)); // each에 사용되는 선택자를 그대로 받아오기

})

```




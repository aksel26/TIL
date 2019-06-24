## $( 'h1 ').addClass, $( 'h1 ').each() 

- h1태그에 객체 추가  addClass()
  - addClass( function (){}) : 함수 입력 가능
- 각 태그에 다르게 설정하고 싶을 때 each() 사용

```html
<!DOCTYPE html >
<html>
<head>
	<meta  charset="UTF-8">
	<title></title>

<style>
.high_light1{background: Red;}
.high_light2{background: Orange;}
.high_light3{background: Yellow;}
.high_light4{background: Green;}
.high_light5{background: Blue;}
</style>
		<script src = "https://ajax.googleapis.com/ajax/libs/jquery/3.4.1/jquery.min.js"></script>
		<script >
		$(document).ready(function(){
				$("h1").each(function(index,item){
				$(this).addClass("high_light"+ (index+1));
});
});

</script>
</head>

<body>
	<h1>jquery 배열 관리</h1>
	<h1>item - 0</h1>
	<h1>item - 1</h1>
	<h1>item - 2</h1>
	<h1>item - 3</h1>
	

</body>

</html>

```


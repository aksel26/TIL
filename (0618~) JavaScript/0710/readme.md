## 이벤트 처리기 등록하기와 타이머

- [이벤트 처리기](#이벤트-처리기)
- [타이머](#타이머)


### 이벤트 처리기

#### 함수를 이벤트 처리기로 등록하는 방법

1. [HTML요소의 속성으로 등록하는 방법](#HTML요소의-속성에-이벤트-처리기-등록하기)
2. [DOM요소의 프로퍼티로 등록하는 방법](#DOM요소의-프로퍼티로-등록하는-방법)
3. `addEventListener` 메서드를 사용하느 방법



</br>



1. ##### HTML요소의 속성에 이벤트 처리기 등록하기

   </br>

   ```html
   <!DOCTYPE html>
   <html lang="en">
   
   <head>
       <meta charset="UTF-8">
       <meta name="viewport" content="width=device-width, initial-scale=1.0">
       <title>Document</title>
       <script>
           function displayTime() {
               var d = new Date();
               console.log("현재 시각은 " + d + " 입니다.");
           }
   
       </script>
   </head>
   
   <body>
       <input type="button" value="click" , onmousemove="displayTime()">
   </body>
   
   </html> 
   ```

   - **`onmousemove` 부분 : 이벤트 처리기 이름**
   - HTML코드와 JS코드가 뒤섞이는 단점이 발생
     - *DOM or `addEventListener` 메서드를 사용하면 보완할 수 있다.*

</br>



2. ##### DOM요소의 프로퍼티로 등록하는 방법

   - **DOM의 주요 객체**

     - **`window`** : Window객체, 웹 브라우저 윈도우 하나 또는 탭
     - **`document`** : Document객체, HTML문서 전체를 가리킴, HTML문서에서 HTML 요소 객체를 가져오거나 하는 기능을 제공
     - **요소 객체**  : HTML문서 요소를 가리키는 객체

     </br>

     ```html
     <!DOCTYPE html>
     <html lang="en">
     
     <head>
         <meta charset="UTF-8">
         <meta name="viewport" content="width=device-width, initial-scale=1.0">
         <title>Document</title>
     
     
         <script>
             function displayTime() {
                 var d = new Date();
     
                 console.log("현재 시각은 ? " + d.toLocaleString() + " 입니다.");
     
             }
             window.onload = function () {
                 var button = document.getElementById("button");
                 button.onclick = displayTime;
             };
     
         </script>
     </head>
     
     <body>
         <input type="button" value="click" id="button">
     </body>
     
     </html>
     ```


     </br>

   - 목적

     - HTML코드와 JS코드를 분리하기 위함.
     - 가독성, 유지 보수성이 높아짐

   </br>

   - DOM을 사용해서 `body` 요소 밖에서 `body` 요소 안에 있는 HTML요소를 조작할 수 있다.

   - 위에서부터 아래로 순차적으로 실행되고 `script` 요소를 만나면 `script` 요소가 모두 끝날 때 까지 `body` 요소를 읽어들이지 않는다.
     - 이벤트 처리기를 등록할 수 없다ㅏ.
     - 이를 위해, `window` 객체의`onload` 프로프티에 이벤트 처리기를 등록한다.
     - `window.onload = function() {...}`
       - **웹 브라우저가 문서를 모두 읽은 후에 실행된다**

   - 이벤트가 등록된 이벤트 처리기를 제거할 때는 `null` 을 입력한다.

     </br>
     
     </br>

### 타이머

1. `setTimeout`
2. `setInterval`

</br>

#### `setTimeout` 

: 시간이 흐른 후 함수 실행 (한번만)

```javascript
setTimeout(function(){
    console.log(new Date());
},2000);
```

`clearTimeout()`  : 함수 실행 취소

</br>

#### `setInterval`

: 일정시간 간격으로 반복해서 실행

```javascript
setInterval(function(){
    console.log(new Date());
},2000);
```

- `setInterval("console.log(new Date())", 1000);` 
  - `eval()` 로 평가되어 실행된다.



</br>

</br>



## HTML 요소를 동적으로 읽고 쓰기

1. [`innerHTML `](#html요소의-innerhtml-프로퍼티로-읽고-쓰기)
2. [`value()`](#폼-컨트롤의-입력-값-얻기-value)
3. [`document.write()`](#documentwrite)

</br>

### HTML요소의 `innerHTML` 프로퍼티로 읽고 쓰기

`innerHTML` 프로퍼티는 그 HTML요소의 내용을 기리킴 --> 해당 요소의 내용을 읽거나 쓸수 있다.

- 타이머 예제

  ```javascript
  <!DOCTYPE html>
  <html lang="en">
  
  <head>
      <meta charset="UTF-8">
      <meta name="viewport" content="width=device-width, initial-scale=1.0">
      <title>Document</title>
      <script>
          window.onload = function () {
              var startButton = document.getElementById("start");
              var endButton = document.getElementById("end");
              var display = document.getElementById("display");
              var startTime, timer;
  
              startButton.onclick = start;
  
              function start() {
                  startButton.onclick = null;
                  endButton.onclick = stop;
                  startTime = new Date();
                  timer = setInterval(function () {
                      var now = new Date();
                      display.innerHTML = ((now - startTime) / 1000).toFixed(2);
                  }, 10);
              }
              
              function stop() {
                  clearInterval(timer);
                  startButton.onclick = start;
              }
          };
      </script>
  </head>
  
  <body>
      <p id="display">0.00</p>
      <input type="button" id="start" value="start">
      <input type="button" id="end" value="end">
  </body>
  
  </html>
  ```

  </br>



### 폼 컨트롤의 입력 값 얻기 `value()`

- `value()` 를 이용해서 해당되는 `id` 의 값을 가져올 수 있다.

```html
<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
    <script>
        window.onload = function () {
            document.getElementById("button").onclick = function () {
              	// h 변수에 id가 height에 해당하는 값을 가져와 대입
                var h = parseFloat(document.getElementById("height").value)
                var w = parseFloat(document.getElementById("weight").value)
                
                // 아이디가 bmi에 해당하는 곳에 갱신하기 위해 innerHTML 프로퍼티 입력
                var bmi = document.getElementById("bmi");
                bmi.innerHTML = (w / h / h).toFixed(1);

            };
        };

    </script>
</head>

<body>
    <p>키 : <input type="number" id="height"> m</p>
    <p>몸무게 : <input type="number" id="weight"> kg</p>
    <p>당신의 체질량 지수는 <output id="bmi">?</output> 입니다.</p>
    <input type="button" value="계산" id="button">
</body>

</html>
```



</br>

### `document.write()`

- 인수로 받은 문자열을 **HTML문서의 body요소 안에 출력**한다.

  ```html
  <!DOCTYPE html>
  <html lang="en">
  <head>
      <meta charset="UTF-8">
      <meta name="viewport" content="width=device-width, initial-scale=1.0">
      <title>Document</title>
  </head>
  <body>
      <script>
  var now = new Date();
  var month = now.getMonth() +1;
  var day = now.getDay();
  
  document.write("<p>오늘은 " + month + "월 " + day + "일 입니다.</p>");
  
      </script>
  </body>
  </html>
  ```

- 이벤트처리기로 등록한 함수 안에서 `document.write` 를 사용하면 안된다.

  - HTML문서 전체 내용이 `document.write`로 출력한 값으로 바뀌게 된다.
  - **`document.write` 를 사용한 다음에 호출한 함수에서는 HTML문서를 동적으로 수정할 수 없다.**
    - **DOM**을 이용해야 한다.



</br>

</br>

## 함수 

### 함수 정의하기

#### 함수 정의 방법

1. 함수 선언문

   `function square(x) { return x*x; }`

   </br>

2. 함수 리터럴

   `var square = function(x) {return x * x; };`

   </br>

3. Function 생성자로 정의

   `var square = new function("x", " return x*x" );`

   </br>

4. 화살표 함수 표현식

   `var square = x => x*x ;`

   </br>

- **함수 선언문**으로 정의한 함수만 **Hoisting이 가능하다**
  - 함수리터럴, Function 생성자, 화살표 함수는 불가능!

</br>

#### 중첩함수

```javascript
 function norm(x) {
            var sum2 = sumSquare();
            return Math.sqrt(sum2);

            function sumSquare() {
                sum = 0;
                for (var i = 0; i < x.length; i++) sum += x[i] * x[i];
                return sum;
            }
        }
var a = [2, 1, 3, 5, 7];
var n = norm(a);
console.log(n);

9.38083151964686
```

- 특징
  - 중첩함수 참조는 **외부 함수 바깥에서는 읽거나 쓸수 없다**.
  - 자신을 둘러싼 **외부함수의 인수와 지역 변수에 접근 가능하다.**
    - 외부함수 `norm(x)` 에서 변수 `x`가 중첩함수에까지 영향을 미친다.(for문에서의 `x.length` 부분)

</br>

#### 함수 호출하기

1. 함수 호출 ( `( )` )

   `( )` 

   `var s = square(5);`

2. 메서드 호출 

   *객**체의 프로퍼티에 저장된 값이 함수타입**이면 그 프로퍼티를 메서드라고 부른다.*

   `obj.m = function() {...};`

   `obj.m();`

3. 생성자 호출( `new` )

   `var obj = new Object();`

4. Call, apply 사용 간접호출

   
0619 / Review

자바스크립트

- 인터프리터 언언
- 동적 프르토타입 기반의 객체지향언어
- 동적 타입언어
- 함수 기반 언어, 함수가 객체 => 함수형 프로그래밍 언어
  (함수를 변수에 저장, 함수의 인수로 함수를 전달, 함수 내부에 함수를 정의 가능)
- 클로저함수

자바스크립트 구성 기술 요소

- ECMAScript Core
- 브라우저 제공 API(window, document, XMLHttpRequest,,,,,)
- HTML API (Geolocation, WebWorks, Canvas, Video, ,,,)

자바스크립트 분류

- 클라이언트 측 기술 ( jQuery , Vue, js , React.js,,..)
- 서버 측 기술 ( node.js )

자바스크립트 코드 작성 문법

- 인코딩은 utf-8권장
- 대소문자 구분
-  .js 파일로 저장
- 한 문장 단위로 ; 으로 구분

주석 

- //  ~~~~ :한줄 주석
- /* ~~~~~ */ :여러줄 주석

변수

- 처리해야 할 값을 메모리에 저장하고 값을 참조하기 위해 사용하는 이름
- 변수 선언 키워드 : var
- 변수명 Naming 규칙 : _ , $, 영문자 
- 길이 제한 X , 키워드 X, 내장 함수명 X, 내장객체명 X

자바스크립트의 데이터 유형

- Primitive Type : 숫자(number), 문자열(string),  null, undefined, boolean, symbol

- Reference Type : function, object, interface,enum ,, , . . ..  . 배열 Array는 객체취급 -> object 타입임.

  선언되지 않는 변수를 참조하면 ? Reference Error
  선언만 된 변수, 초기값이 할당되지 않은 변수를 참조하면? Undifined
  객체를 메모리에서 검색을 했는데, 검색되지 않으면 ? Null 

자바 스크립트 출력 방법

- document.write() , document.writeln() - html 문서의 body 영역 출력
- console.log (), console.dir() (내부  계층 구조를 볼때 dir) - 브라우저 또는 node같은 자바스크립트의 실행한 출력
- window.alert ("메세지")

자바스크립트 입력 방법

- window.prompt  ("메세지", 입력하지 않았을 때의 기본값) - 반환타입은 문자열
- window.confirm ("메세지")  - boolean

연산자

- 산술 연산자 
- 단항 연산자 ~(1의 보수), !, +, - , ++, -- 
- 비교연산자 : >,<,>=,<=,==,===,!=,!==
- 비트연산자 : &, | ,^
- 논리연산자 : &&,||
- shift연산자 : <<,>>,>>>
- 삼항연산자 : 조건 : 항( true 일때) : 항2 ( false 일때)
- 기타연산자 : typeof, in, instanceof,,,,,,

제어문

- if(조건문){문장;}

- 다중 if문 if~~else if~

- switch문 

  switch( 표현식 ){

  case 값 : 문장; break;

  .....

  }

  

  switch( true){

  case 조건 : 문장; break;

  case 조건 2 : 문장 ; break;

  ........

  }

반복문

- 횟수 알 때 FOR 반복문

  for ( var count= 0 ; count<조건 ; count 증감식){
  반복수행문장;
  }

- 횟수 모르고 조건에 따라 반복 수행 여부를 결정해야 할 때 WHILE 반복문

  while(조건){
  반복수행문장;
  }

- 1번은 무조건 수행 후 조건에 따라 수행 여부 결정

  do {
  반복수행문장;
  }while(조건);

- 배열의 요소를 또는 객체의 속성을 순차적으로 꺼내올 때 사용할 수 있는 반복문

  for( var 변수 in 객체 또는 배열 ){
  반복수행문장;
  }

Hoisting 

- console.log(num); 
  var num  = 10 ; -> hoisting 

  ​						     num은 **global object 인 window의 속성으로 추가**됨 (동적 프로토타입이기 때문)

포맷형식 문자열에 실행시에 인수를 전달해서 출력하려면 

-  placeholder , template literal: ` 포맷형식 $ {변수} 문자열 `   

자바스크립트의 형변환

- 문자열로 형변환 : 값 + " " ,String ()
- 정수나 실수로 형변환 : Number() , window.parseInt() , window.parsefloat()
- 논리형으로 변환 : !! 값, boolean()


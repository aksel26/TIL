



# node.js || express ?

js를 항상 브라우저에서만 사용하게됨

node가 나오면서 서버사이드에서도 사용가능하게 됨

## express ?

node가 엔진이라고 한다면

**express** : 엔진 + 바퀴, 브레이크시스템 등등 으로 자동차를 만드는 것 

nodejs를 쉽게 이용할수 있도록 하는 프레임워크



# express 라이브러리 설치하기

1. npm init : package.json을 설정해줌

npm : 라이브러리 설치를 도와주는 도구

어떤 라이브러리를 설치했는지 기록하면 좋음. --> package.json에 기록함 



2. npm intall express

   node_modules가 생성된다. 그 안에 express폴더도 같이 생성됨





# 모델

스키마를 감싸는 것

스키마 ?

하나하나 정보틀을 지정한 것



# GET요청을 처리해보자

### 1. 서버 만들기

서버를 띄우기 위한 기본 셋팅 (express 라이브러리)

```javascript
const express = require("express")

const app = express()

app.listen(8080, function () {
  console.log("listening on 8080")
})

app.get("/pet", function (request, response) {
  response.send("hello PET acc shop")
})

app.get("/beauty", function (request, response) {
  response.send("hello Beauty acc shop")
})


위의 GET 요청을 하면 hello~ 글들이 나타난다.
```



### 1-1. Nodemon 라이브러리

변경사항이 있을 때마다 서버를 껐다가 다시 켜야 하는 불편함을 보완해주는 라이브러리

`npm install -g nodemon`

Permission 오류가 나면 ?

`sudo chown -R $USER (오류난 경로)/usr/local/lib/node_modules` 



### 2. 실행

`nodemon server.js`



### 3. 서버에서 html 전송

response.sendFile()

`__dirname` : 현재경로

sendFile() : 파일을 보낼 수 있다.

```javascript

app.get("/", function (request, response) {
  //   response.send("무야호~")
  response.sendFile(__dirname + "/index.html")
  server.js랑 같은 경로에 있는 /index.html이라는 파일을 보내줌
})

```





## form에서 정보 입력하기

1. write.html

   ```html
   <!DOCTYPE html>
   <html lang="en">
     <head>
       <meta charset="UTF-8" />
       <meta name="viewport" content="width=device-width, initial-scale=1.0" />
       <title>Document</title>
       <link
         href="https://cdn.jsdelivr.net/npm/bootstrap@5.0.0-beta3/dist/css/bootstrap.min.css"
         rel="stylesheet"
         integrity="sha384-eOJMYsd53ii+scO/bJGFsiCZc+5NDVN2yr8+0RDqr0Ql0h+rP48ckxlpbzKgwra6"
         crossorigin="anonymous"
       />
     </head>
     <body>
       <div class="container m-5">
         <form action="/add" method="POST">
           <div class="form-group mb-3">
             <label for="exampleInputEmail1">Todo</label>
             <input type="text" class="form-control" name="title" />
           </div>
           <div class="form-group mb-3">
             <label for="exampleInputPassword1">Due Date</label>
             <input type="date" class="form-control" name="date" />
           </div>
   
           <button type="submit" class="btn btn-primary">Submit</button>
         </form>
       </div>
       <script
         src="https://cdn.jsdelivr.net/npm/bootstrap@5.0.0-beta3/dist/js/bootstrap.bundle.min.js"
         integrity="sha384-JEW9xMcG8R+pH31jmWH6WWP0WintQrMb4s7ZOdauHnUtxwoG2vI5DkLtS3qm9Ekf"
         crossorigin="anonymous"
       ></script>
     </body>
   </html>
   ```

   중요한 것 !

   1. form 태그 안에서 **action , method**
   2. input 태그 안에서 **name**

   

2. 전송버튼을 누르면 js에서 해야 할 일

   ```javascript
   // 어떤 사람이 /add 경로로 post요청을 하면
   // ~~~를 해주세요
   app.post("/add", function (req, res) {
     res.send("전송완료")
     console.log(req.body.date)
   })
   
   
   요청된 정보들은 req에 저장되어 있다.
   콘솔에 출력해보면 req.body 오브젝트 형태로 나옴
   ```

   

이제 영구적으로 저장 (DB에 저장)할 단계가 남음



그전에 

# REST API ?

- API ?
  
- 어떤식으로 통신할 것인지에 대한 규약
  
- 웹개발 환경에서의 API ?

  - 서버와 고객간의 요청 방식  (소통방법)
  - 어떻게 해야 서버랑 통신할 수 있을까

  ![image-20210421181924685](nodeMongo.assets/image-20210421181924685.png)





인터넷이 발달하던 시절 일관성도 없고 막 만들었기 때문에 어려움

REST 원칙에 의해서 쓰면 아름답다

**원칙 6개**

1. **uniform interface**

   하나의 자료는 하나의 URL로

   URL은 예측 가능해야함

2. Client-Server 역할 구분

   브라우저는 요청만 할 뿐, 서버는 응답만 할 뿐

3. Stateless

   고객들이 요청 시 각각의 요청들은 독립적인 존재로 다루어야 함. 

   요청 1과 요청 2는 의존성이 없어야함

4. Cachable

   크롬이 알아서 잘 해줌

5. Layered System

6. Code on Demand





**이름짓기 원칙**

1. 명사로 작성 추천
2. 하위문서를 나타낼 땐 /
3. 파일확잣자(.html) 쓰지 말기
4. 띄어쓰기는 ( - ) 사용
5. 자료 하나당 하나의 URL







웹사이트 기능만들기 기본

1. 서버로 데이터 전송할 UI만들고
2. 서버에서 원하는대로 정보를 처리해주면 됨



DB종류

1. 관계형
   1. 엑셀처럼 행과 열이 나누어져 있는 데이터베이스
   2. 3차원의 데이터들은 다루지 못한다.
   3. 그래서 다른 테이블들을 만들어 join등을 하며 해결한다.
   4. SQL이라는 언어를 사용해야 한다.
2. NoSQL
   1. Object 자료형으로 입출력 가능
   2. 대표적으로 **MongoDB**
   3. 무료로 호스팅을 받아 사용 가능
   4. MongoDB atlas







# EJS

 /list로 GET요청으로 접속하면

// 실제 DB에 저장된 데이터들로 꾸며진 HTML을 보여줌



html

EJS

서버데이터를 집어넣을 수 있다.

대체품 : vue, react, angular



ejs파일들은 항상 views폴더에 있어야 한다.

 



# 게시물들 번호 매기기

```javascript
app.post("/add", function (req, res) {
  db.collection("post").insertOne(
    { _id: 총게시물갯수+1, 제목: req.body.title, 날짜: req.body.date },
    function (에러, 결과) {
      console.log("저장완료")
    }
  )
  res.send("전송완료")
  console.log(req.body.date)
})

```

다른 DB들은 auto increament가 있는데 몽고는 없다

총 게시물 갯수를 어떻게 구하냐 ?

count함수로 총 갯수를 구하는 방법 ? 비추

저장되는 시점에 따라 혼선유발 가능

글마다의 고유의 번호를 부여하자



1. .Counter라는 컬렉션을 만든다
2. 0을 부여하고
3. findOne(하나만 찾기 때문에) 을 사용해서 결과 값을 불러온다.
4. 불러온 결과값을 `총게시물갯수`  변수에 할당한다.
5. 글이 새로 생기면 counter라는 콜렉션에 있는 totalPost라는 항목도 1 증가시켜야 한다.



Update함수

![image-20210422225106192](nodeMongo.assets/image-20210422225106192.png)



### operator

$set(변경)

$inc(증가)

$min(기존값보다 적을 때만 변경

$rename(key값 이름 변경)



![image-20210422225603100](nodeMongo.assets/image-20210422225603100.png)

![image-20210422225655012](nodeMongo.assets/image-20210422225655012.png)





# 글 삭제

![image-20210423001856836](nodeMongo.assets/image-20210423001856836.png)

DELETE요청

html에서 바로 delete, put를 요청할 수는 없음 (post, get은 되지만..)

1. 라이브러리 

   1.  **method-override** 라이브러리 : form에서 delete요청이 가능하게 된다.

2. Ajax요청을 한다.

   





# Detail페이지

상세페이지를 만들어보자 (URL parameter)

/detil로 접속하면 detail.ejs 보여줌

1번 누르면 1번 상세페이지,

2번글 누르면 2번 상세페이지로...



/detil1로 접속하면 detail1.ejs 보여줌

/detil2로 접속하면 detail2.ejs 보여줌

/detil3로 접속하면 detail3.ejs 보여줌

...



detail 페이지를 여러개 ?

url을 다르게 설정하면 된다.



```javascript
app.get('/detail/:id', function(res,req){
  res.render('detail.ejs', {이런이름으로 : 이런데이터를});
})

: :url parameter
적엇을때 render해주세요

```



findOne이라는 함수를 사용해 _id값을 찾는다.

req.params.id에 정보가 담겨있음!

```javascript
app.get("/detail/:id", function (req, res) {
  req.params.id = parseInt(req.params.id)
  db.collection("post").findOne({ _id: req.params.id }, function (에러, 결과) {
    console.log(결과)
    
    res.render("detail.ejs", { data: 결과 }) // 정보들을 보냄
  })
})
```





# Detail페이지 디자인하기

```html
<div class="container mt-4">
```

container 속성을 주면 정렬된다



css파일 적용시키기

보통 관습적으로 public/main.css 이렇게 파일을 넣어줌

css파일들은 static파일이라고  함





조립식

ejs파일들이 매우 많을때,

nav태그 요소를 고치려고 할때 여러개의 ejs파일들을 일일이 고쳐야 하는 경우가 발생

이럴때는 공통된 요소를 따로 빼 필요한 부분에 `<%- include('nav.html') %>`  를 해준다.





# Update(글 수정) 페이지



HTML에서 PUT, DELETE요청을 직접하는 것은 불가능하다

이러한 기능을 가능하도록 해주는 것이 **`method-override`**

`npm install method-override`





**server.js**

```javascript
//method-override 설정 부분
const methodOverride = require("method-override")

app.use(methodOverride("_method"))


// 폼에 담긴 제목데이터, 날짜 데이터를 db.collection에 업데이트한다.
app.put("/edit", (req, res) => {
  db.collection("post").updateOne(
    { _id: parseInt(req.body.id) },
    { $set: { 제목: req.body.title, 날짜: req.body.date } },
    (err, result) => {
      console.log(result)
      res.redirect("/list")
    }
  )
})

```





**Edit.ejs**

![image-20210428135211292](nodeMongo.assets/image-20210428135211292.png)









# 세션, JWT, OAuth 등 회원인증 방법론

회원 인증 방법

1. cookie based

   브라우저에 저장할 수 있는 긴 문자열

   Session id 가 적힌 쿠키

   서버메모리에 이 정보를 저장하고 저장이 되면 쿠키로 만들어 브라우저에 보낸다

   브라우저는 이 쿠키를 저장한다.

   마이페이지 접속 시 이 쿠키데이터를 서버에게 자동으로 전송한다.

   이 쿠키에는 session id가 저장되어 있으므로 서버((session store)에서 찾는다 

   있으면 마이페이지에 보내준다.

   이러한 과정들은 라이브러리들이 알아서 해주기 때문에 흐름만 기억하도록 한다.



2. Token-based (JWT)

   로그인 성공시

   서버에서는 JSON Web Token (암호화된 그냥 긴 문자열)을 브라우저에게 전송함

   이러한 문자열을 local storage등에 저장한다.

   마이페이지 요청시 서버에게 웹 토큰을 Header에 함께 전송한다.

   서버는 토큰이 있으면 유효한 토큰인지 검사한다. (유통기한이 있는 방식)

   유저들 로그인 상태를 저장할 필요가 없음 (보다 Restful한 방식)

   

3. Open Authentication (OAuth)

   Google, 의 프로필 정보를 가져옴 소셜 로그인 방식

   pw가 필요없음

   사이트가 없어지면 사용이 불가능






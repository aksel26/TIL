const express = require("express")

const app = express()
app.use(express.urlencoded({ extended: true }))

const MongoClient = require("mongodb").MongoClient

// ejs라이브러리 사용
app.set("view engine", "ejs")

//미들웨어
app.use("/public", express.static("public")) //나는 static파일을 위해 public폴더를 쓸거다

var db
MongoClient.connect(
  "mongodb+srv://admin:qwer1234@cluster0.xxjog.mongodb.net/Todo?retryWrites=true&w=majority",
  function (에러, client) {
    if (에러) {
      return console.log(에러)
    }
    // database(폴더)연결하기
    db = client.db("todoapp")

    // db.collection("post").insertOne(
    //   { 이름: "John", 나이: 30, _id: 100 },
    //   function (에러, 결과) {
    //     console.log("저장완료")
    //   }
    // )

    // db.collection("post").insertOne(
    //   app.post("/add", function (req, res) {
    //     res.send("전송완료")
    //     return req.body
    //   }),
    //   function (에러, 결과) {
    //     console.log("저장완료")
    //   }
    // )

    app.listen(8080, function () {
      console.log("listening on 8080")
    })
  }
)

// app.listen(8080, function () {
//   console.log("listening on 8080")
// })

app.get("/pet", function (request, response) {
  response.send("hello PhhhET aasdfacc shop")
})

app.get("/beauty", function (request, response) {
  response.send("hello Beauty acc shop")
})

app.get("/", (request, response) => {
  //   response.send("무야호~")
  response.render("index.ejs")
})

app.get("/write", function (request, response) {
  response.render("write.ejs")
})

// 어떤 사람이 /add 경로로 post요청을 하면
// ~~~를 해주세요
app.post("/add", function (req, res) {
  res.send("전송완료")
  db.collection("counter").findOne(
    { name: "게시물갯수" },
    function (에러, 결과) {
      var 총게시물갯수 = 결과.totalPost
      db.collection("post").insertOne(
        { _id: 총게시물갯수 + 1, 제목: req.body.title, 날짜: req.body.date },
        function (에러, 결과) {
          console.log("저장완료")

          // !! counter라는 콜렉션에 있는 totalPost라는 항목도 1 증가시켜야 한다.
          // db.collection('counter').updateOne({어떤데이터를 수정할지?},{수정값을 입력 operator($set)를 사용해야한다.},function(){
          db.collection("counter").updateOne(
            { name: "게시물갯수" },
            { $inc: { totalPost: 1 } },
            function (에러, 결과) {
              // 이후 추가할 함수
              // 에러 체킹하고 싶다면 에러, 결과 두개의 파라미터를 넣어준다.
              if (에러) return console.log(에러)
            }
          )
        }
      )
    }
  )
})

// /list로 GET요청으로 젖ㅂ속하면
// 실제 DB에 저장된 데이터들로 꾸며진 HTML을 보여줌
app.get("/list", function (req, res) {
  //   디비에 저장된 post라는 컬렉션 안의 데이터를 (모든 || id가 ~~인? ||~~) 꺼내라
  db.collection("post")
    .find()
    .toArray(function (에러, 결과) {
      // 모든 데이터 데이터에 포함된 메타데이터까지 다 옴.--> toArray()를 붙여준다.
      console.log(결과)
      res.render("list.ejs", { todos: 결과 })
    })
})

app.delete("/delete", function (req, res) {
  console.log(req.body) // ajax 요청시 함께 보낸 데이터를 찾으려면 이렇개
  req.body._id = parseInt(req.body._id)
  db.collection("post").deleteOne(req.body, function (에러, 결과) {
    console.log("삭제완료")

    //서버에서 요청 응답해주는 법 . 서버는 꼭 뭔가 응답해주어야 한다.
    res.status(200).send({ message: "성공했습니다" })
    // res.status(400).send({ message: "실패했습니다" })
  })
})

app.get("/detail/:id", function (req, res) {
  req.params.id = parseInt(req.params.id)
  db.collection("post").findOne({ _id: req.params.id }, function (에러, 결과) {
    console.log(결과)

    res.render("detail.ejs", { data: 결과 })
  })
})

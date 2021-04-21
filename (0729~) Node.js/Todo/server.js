const express = require("express")

const app = express()
app.use(express.urlencoded({ extended: true }))

const MongoClient = require("mongodb").MongoClient

// ejs라이브러리 사용
app.set("view engine", "ejs")

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
  response.sendFile(__dirname + "/index.html")
})

app.get("/write", function (request, response) {
  response.sendFile(__dirname + "/write.html")
})

// 어떤 사람이 /add 경로로 post요청을 하면
// ~~~를 해주세요
app.post("/add", function (req, res) {
  db.collection("post").insertOne(req.body, function (에러, 결과) {
    console.log("저장완료")
  })
  res.send("전송완료")
  console.log(req.body.date)
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

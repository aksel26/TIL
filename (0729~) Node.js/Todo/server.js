const express = require("express")

const app = express()
app.use(express.urlencoded({ extended: true }))

const MongoClient = require("mongodb").MongoClient

//method-override : put요청, delete요청
const methodOverride = require("method-override")
app.use(methodOverride("_method"))

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

app.get("/edit/:id", function (req, res) {
  db.collection("post").findOne(
    { _id: parseInt(req.params.id) },
    function (에러, 결과) {
      console.log(결과)
      res.render("edit.ejs", { data: 결과 })
    }
  )
})

app.put("/edit", (req, res) => {
  // 폼에 담긴 제목데이터, 날짜 데이터를 db.collection에 업데이트한다.
  db.collection("post").updateOne(
    { _id: parseInt(req.body.id) },
    { $set: { 제목: req.body.title, 날짜: req.body.date } },

    (err, result) => {
      console.log(result)
      res.redirect("/list")
    }
  )
})

const passport = require("passport")
const LocalStrategy = require("passport-local").Strategy
const session = require("express-session")

app.use(session({ secret: "비밀코드", resave: true, saveUninitialized: false }))
app.use(passport.initialize())
app.use(passport.session())

// 미들웨어 ?
//  웹서버는 요청 - 응답해주는 머신
//  이 사이 중간에 실행하고 싶으면 app.use 사용

app.get("/login", function (요청, 응답) {
  응답.render("login.ejs")
})

app.post(
  "/login",
  passport.authenticate("local", { failureRedirect: "/fail" }),
  function (요청, 응답) {
    응답.render("index.ejs", { 사용자: req.user })
    응답.redirect("/")
  }
)

app.get("/mypage", 로그인했니, function (req, res) {
  req.user
  res.render("mypage.ejs", { 사용자: req.user })
})

//미들웨어 만드는 법
function 로그인했니(req, res, next) {
  if (req.user) {
    //req.user : 로그인 후 세션이 있으면 req.user가 항상 있다.
    next() // 통과
  } else {
    res.send("로그인안함")
  }
}

// 인정하는 방법을 세부화 시킨 부분
passport.use(
  new LocalStrategy(
    {
      usernameField: "id",
      passwordField: "pw",
      session: true,
      passReqToCallback: false,
    },

    //db와 맞는지 검증하는 부분
    function (입력한아이디, 입력한비번, done) {
      // console.log(입력한아이디, 입력한비번)
      db.collection("login").findOne(
        { id: 입력한아이디 },
        function (에러, 결과) {
          if (에러) {
            return done(에러)
          }

          if (!결과)
            return done(null, false, { message: "존재하지않는 아이디요" })
          if (입력한비번 == 결과.password) {
            return done(null, 결과)
          } else {
            return done(null, false, { message: "비번틀렸어요" })
          }
        }
      )
    }
  )
)

// 검사가 끝났을 때 id를 이용해서 로그인 세션 정보를 만들어야 한다 로그인 성공시 발동
// 위에 결과가 user레 들어간다.
passport.serializeUser(function (user, done) {
  done(null, user.id)
})

// 이 세션 데이터를 가진 사람을 db에서 찾아주세요 (마이페이지 접속시발동)
// 아이디 외에도 이름 나이 성별이 저장될 수 있다. 이 정보들을 사용하고 싶을 때 사용
passport.deserializeUser(function (아이디, done) {
  // db에서 위에있는 user.id로 유저를 찾은뒤에 유저 정보를 리턴할 수 있는 부분
  db.collection("login").findOne({ id: 아이디 }, function (err, 결과) {
    // done(null, {요기에 넣음})
    done(null, 결과)
  })
})

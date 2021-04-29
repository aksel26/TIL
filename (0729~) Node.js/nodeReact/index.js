const express = require("express")
const app = express()
const port = 5000
const mongoose = require("mongoose")

const bodyParser = require("body-parser")

const { User } = require("./models/User")
const config = require("./config/key")
app.use(bodyParser.urlencoded({ extended: true }))
app.use(bodyParser.json())

mongoose
  .connect(config.mongoURI, {
    useNewUrlParser: true,
    useUnifiedTopology: true,
    useCreateIndex: true,
    useFindAndModify: false,
  })
  .then(() => console.log("MongoDB Connected..."))
  .catch((err) => console.log(err))

app.get("/", (req, res) => {
  res.send("hello world!")
})

app.post("/register", (req, res) => {
  //회원가입시 필요한 정보들을 client에서 가져오면
  // 그것들을 db에 넣어준다.

  // bodyparser로 인해서 json형태로 담겨있다. req.body:
  //   {id : 'hello',
  // password: '123'}
  const user = new User(req.body)
  user.save((err, userInfo) => {
    if (err) return res.json({ success: false, err })
    return res.status(200).json({ success: true })
  }) //save() : mongoDB의 메서드
})

app.listen(port, () => {
  console.log(`listening ${port}`)
})

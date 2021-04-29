const mongoose = require("mongoose")
const bcrypt = require("bcrypt")
const saltRounds = 10
//1. salt를 생성한다.
//2. salt를 이용해서 비밀번호를 암호화한다.
//3. saltRounds : 몇글자인지 나타냄 10은 10자리

const userSchema = mongoose.Schema({
  name: {
    type: String,
    maxlength: 50,
  },
  email: {
    type: String,
    trim: true,
    unique: 1,
  },
  password: {
    type: String,
    maxlength: 10,
  },
  lastname: {
    type: String,
    maxlength: 50,
  },
  role: {
    type: String,
    default: 0,
  },
  image: String,
  token: {
    type: String,
  },
  tokenExp: {
    type: Number,
  },
})

//pre : mongoose 메서드
//user정보를 저장하기전에 하는 것
// 끝나면 다시 /register라우트로 진행
userSchema.pre("save", function (next) {
  //비밀번호를 암호화 시킨다

  var user = this

  // 비밀번호를 변경할 경우에만 적용
  if (user.isModified("password")) {
    //user는 userSchema
    bcrypt.genSalt(saltRounds, function (err, salt) {
      if (err) return next(err)
      bcrypt.hash(user.password, salt, function (err, hash) {
        if (err) return next(err)
        user.password = hash
        next()
      })
    })
  }
})
const User = mongoose.model("User", userSchema)

// 다른곳에서도 쓸수 있도록 export
module.exports = { User }

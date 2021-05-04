const mongoose = require("mongoose")
const bcrypt = require("bcrypt")
const saltRounds = 10
const jwt = require("jsonwebtoken")
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
    maxlength: 100,
  },
  lastname: {
    type: String,
    maxlength: 50,
  },
  role: {
    type: Number,
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
  } else {
    next()
  }
})

userSchema.methods.comparePassword = function (plainPassword, cb) {
  //plainPassword = 1234567이라고 가정하고  암호화된 비밀번호(db에 있는)와 같은지 체크해야 함
  bcrypt.compare(plainPassword, this.password, function (err, isMatch) {
    if (err) {
      return cb(err), cb(null, isMatch)
    }
  })
}

userSchema.methods.generateToken = function (cb) {
  var user = this
  //jsonwebtoken 을 이용해서 토큰을 생성하기
  var token = jwt.sign(user._id.toHexString(), "secretToken")
  // console.log(token)
  // 합쳐서 토큰이 나오고
  // user._id + 'secretToken' =  token

  // ->
  // 시크릿토큰을 알면 아이디를 알 수 있다. ( sercretToken을 기억해야함 )
  // decode는 Auth기능을 만들때 활용된다
  // 'secretToken' -> user._id

  user.token = token
  user.save(function (err, user) {
    if (err) return cb(err)
    cb(null, user)
  })
}

userSchema.statics.findByToken = function (token, cb) {
  var user = this

  // user._id + 'string' = token (secretToken)
  //토큰을 복호화(decode)
  jwt.verify(token, "secretToken", function (err, decoded) {
    //user ID를 이용해서 유저를 찾은 후,
    // 클라이언트에서 가져온 토큰과 DB에 보관된 token이 일치하는지 확인
    user.findOne({ _id: decoded, token: token }, function (err, user) {
      if (err) return cb(err)
      cb(null, user)
    })
  })
}
const User = mongoose.model("User", userSchema)

// 다른곳에서도 쓸수 있도록 export
module.exports = { User }

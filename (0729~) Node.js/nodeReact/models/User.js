const mongoose = require("mongoose")

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

const User = mongoose.model("User", userSchema)

// 다른곳에서도 쓸수 있도록 export
module.exports = { User }

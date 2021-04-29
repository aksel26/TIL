const express = require("express")
const app = express()
const port = 5000
const mongoose = require("mongoose")
mongoose
  .connect(
    "mongodb+srv://admin:qwer1234@cluster0.xxjog.mongodb.net/nodeReact?retryWrites=true&w=majority",
    {
      useNewUrlParser: true,
      useUnifiedTopology: true,
      useCreateIndex: true,
      useFindAndModify: false,
    }
  )
  .then(() => console.log("MongoDB Connected..."))
  .catch((err) => console.log(err))

app.get("/", (req, res) => {
  res.send("hello world!")
})

app.listen(port, () => {
  console.log(`listening ${port}`)
})

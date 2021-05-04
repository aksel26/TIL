import axios from "axios"
import React, { useEffect } from "react"
import { withRouter } from "react-router-dom"
// import { response } from "express"
function LandingPage(props) {
  useEffect(() => {
    axios.get("/api/hello").then((response) => console.log(response.data))
  }, [])

  const onClickHandler = () => {
    axios.get("/api/users/logout").then((response) => {
      if (response.data.success) {
        props.history.push("/login")
      } else {
        console.log("실패")
      }
    })
  }

  return (
    <div
      style={{
        display: "flex",
        justifyContent: "center",
        alignItems: "center",
        width: "100%",
        height: "100vh",
      }}
    >
      LandingPage
      <button onClick={onClickHandler}>로그아웃</button>
    </div>
  )
}

export default withRouter(LandingPage)

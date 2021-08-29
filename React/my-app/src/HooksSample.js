import { cleanup } from "@testing-library/react"
import React, { useState, useEffect } from "react"

function HooksSample() {
  const [name, setName] = useState("")
  const [nickName, setNickName] = useState("")

  useEffect(() => {
    console.log("effect.")
    console.log(name)
    return () => {
      console.log("cleanup")
      console.log(name)
    }
  }, [name])

  const onChangeName = (e) => {
    setName(e.target.value)
  }
  const onChnageNickName = (e) => {
    setNickName(e.target.value)
  }
  return (
    <div>
      <div>
        <input value={name} onChange={onChangeName}></input>
        <input value={nickName} onChange={onChnageNickName}></input>
      </div>
      <b>이름</b> {name}
      <b>닉네임</b> {nickName}
    </div>
  )
}

export default HooksSample

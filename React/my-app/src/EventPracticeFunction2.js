import React, { Component } from "react"

const EventPractice = () =>  {
  const [form, setForm] = useState({username : '', message : ''})
  const [username, message] = form
  const onChange =e =>{
    const nextForm = {
      ...form,
      [e.target.name] : e.target.value
    }
    setForm(nextForm);
  }
  const onClick = () =>{
    alert(username + ' ' + message);
    setForm({username :'', message :''})
  }

  const onKeyPress = (e) =>{
    if(e.key === 'Enter'){
      onClick();
    }
  }

  render() {
    return (
      <div>
        <h3>이벤트 연습</h3>
        <input
          type="text"
          name="message"
          placeholder="암거나입력"
          value={username}
          onChange={onChange}
          onKeyPress={onKeyPress}
        ></input>
        <input
          type="text"
          name="username"
          placeholder="사용자명"
          value={username}
          onChange={onChange}
        ></input>

        <button
          onClick={onClick}
        >
          확인
        </button>
      </div>
    )
  }
}
export default EventPractice

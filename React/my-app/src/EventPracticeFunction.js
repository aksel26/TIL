import React, { Component } from "react"

class EventPractice () =>  {
  const [username, setUsername] = useState('');
  const [message, setMessage] = useState('');
  const onChangeUsername = e => setUsername{e.target.value};
  const onChangeMessage = e => setMessage(e.target.value);
  const onClick = () =>{
    alert(username + ' ' + message);
    setMessage('');
    setUsername('');
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
          onChange={onChangeMessage}
          onKeyPress={onKeyPress}
        ></input>
        <input
          type="text"
          name="username"
          placeholder="사용자명"
          value={username}
          onChange={onChangeUsername}
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

import React, { Component } from "react"

class EventPractice extends Component {
  state = {
    message: "",
    username: "",
  }

  // constructor(props) {
  //   super(props)
  //   console.log(this)
  //   this.handleChange = this.handleChange.bind(this)
  //   this.handleClick = this.handleClick.bind(this)
  // }

  // handleChange(e) {
  //   this.setState({
  //     message: e.target.value,
  //   })
  // }

  handleChange = (e) => {
    this.setState({
      [e.target.name]: e.target.value,
    })
  }

  handleClick = (e) => {
    alert(this.state.username + " : " + this.state.message)
    this.setState({
      username: "",
      message: "",
    })
  }
  // handleClick(e) {
  //   alert(this.state.message)
  //   this.setState({
  //     message: "",
  //   })
  // }

  handleKeyPress = (e) => {
    if (e.key === "Enter") {
      this.handleClick()
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
          value={this.state.message}
          onChange={this.handleChange}
          //   onChange={(e) => {
          //     console.log("#", this)
          //     this.setState({
          //       message: e.target.value,
          //     })
          //   }}
          onKeyPress={this.handleKeyPress}
        ></input>
        <input
          type="text"
          name="username"
          placeholder="사용자명"
          value={this.state.username}
          //   onChange={(e) => {
          //     console.log("#", this)
          //     this.setState({
          //       message: e.target.value,
          //     })
          //   }}
          onChange={this.handleChange}
        ></input>

        <button
          //   onClick={() => {
          //     alert(this.state.message)
          //     this.setState({
          //       message: "",
          //     })
          //   }}
          onClick={this.handleClick}
        >
          확인
        </button>
      </div>
    )
  }
}
export default EventPractice

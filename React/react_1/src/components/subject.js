import React, { Component } from "react"

class Subject extends Component {
  //render 필수
  render() {
    console.log("Subject render")
    return (
      // 중요 ! 컴포넌트는 하나의 최상위 태그만 있을 수 있다.
      <header>
        <h1>{this.props.title}</h1>
        {this.props.sub}
      </header>
    )
  }
}

export default Subject

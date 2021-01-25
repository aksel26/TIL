import React, { Component } from "react"
class TOC extends Component {
  render() {
    console.log("TOC render")
    var lists = []
    var data = this.props.data
    var i = 0
    //엘리먼트를 자동으로 생성하는 경우 에러가 발생할 수 있다.
    while (i < data.length) {
      lists.push(
        <li key={data[i].id}>
          <a href={"/content" + data[i].id}>{data[i].title}</a>
        </li>
      )
      i += 1
    }
    return (
      <nav>
        <ul>{lists}</ul>
      </nav>
    )
  }
}

export default TOC
// 여기의 TOC를 가져다 쓰는 쪽에서 TOC를 사용 가능하게 된다.

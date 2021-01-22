import React, { Component } from "react"
class TOC extends Component {
  render() {
    return (
      <nav>
        <ul>
          <li>
            <a href="1.html"></a>HTML
          </li>
          <li>
            <a href="3.html"></a>CSS
          </li>
          <li>
            <a href="2.html"></a>JS
          </li>
        </ul>
      </nav>
    )
  }
}

export default TOC
// 여기의 TOC를 가져다 쓰는 쪽에서 TOC를 사용 가능하게 된다.

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
          <a
            href={"/content" + data[i].id}
            // 1. 속성을 이용하는 방법
            // data-id={data[i].id}
            // onClick={function (e) {
            //   e.preventDefault()
            //   this.props.onChangePage(e.target.dataset.id)
            onClick={function (id, e) {
              e.preventDefault()
              this.props.onChangePage(id)

              // 2. bind를 이용하는 방법
              // 2번째 인자로 들어온 값을 함수의 첫번째 매개변수의 값으로 넣어준다.
            }.bind(this, data[i].id)}
          >
            {data[i].title}
          </a>
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

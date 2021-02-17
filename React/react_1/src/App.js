import React, { Component } from "react"
// import logo from "./logo.svg"

import TOC from "./components/toc"
import ReadContent from "./components/ReadContent"
import CreateContent from "./components/CreateContent"
import UpdateContent from "./components/UpdateContent"
import Subject from "./components/subject"
import Control from "./components/control"
import "./App.css"

// 클래스형
// 컴포넌트를 만드느 코드부분
class App extends Component {
  constructor(props) {
    super(props)
    this.max_content_id = 0 // 마지막 목록에 추가하기 위한 변수. UI에 전혀 영향을 주지 않기 때문에 state로 주지 않음
    this.state = {
      selected_content_id: 2,
      mode: "read",
      subject: { title: "WEB", sub: "World Wide Web (state)" },
      welcome: { title: "welcome", desc: "Hello, React!" },
      contents: [
        { id: 1, title: "HTML", desc: "HTML is hypertext ... " },
        { id: 2, title: "CSS", desc: "CSS is for design ... " },
        { id: 3, title: "JavaScript", desc: "JS is for interactive ... " },
      ],
    }
  }
  getReadContent() {
    var i = 0
    while (i < this.state.contents.length) {
      var data = this.state.contents[i]
      if (data.id === this.state.selected_content_id) {
        return data
        break
      }
      i += 1
    }
  }
  getContent() {
    var _title,
      _desc,
      _article = null
    if (this.state.mode === "read") {
      _title = this.state.welcome.title
      _desc = this.state.welcome.desc
      _article = <ReadContent title={_title} desc={_desc}></ReadContent>
    } else if (this.state.mode === "welcome") {
      var _content = this.getReadContent()
      _article = (
        <ReadContent title={_content.title} desc={_content.desc}></ReadContent>
      )
      // _title = this.state.contents[0].title
      // _desc = this.state.contents[0].desc
    } else if (this.state.mode === "create") {
      _article = (
        <CreateContent
          onSubmit={function (_title, _desc) {
            //add content to this.state.contents
            this.max_content_id += 1
            // push를 사용하는 방법
            // this.state.contents.push({id:this.max_content_id, title:_title, desc:_desc});
            // concat을 사용하는 방법
            // var _contents = this.state.contents.concat({
            //   id: this.max_content_id,
            //   title: _title,
            //   desc: _desc,
            // })

            // Arrya.from을 사용하는 방법
            // 수정하려고 하는 객체 또는 배열은 복제
            var _contents = Array.from(this.state.contents)
            _contents.push({
              id: this.max_content_id,
              title: _title,
              desc: _desc,
            })
            this.setState({
              contents: _contents,
              mode: "welcome",
              selected_content_id: this.max_content_id,
            })
            console.log(_title, _desc)
          }.bind(this)}
        ></CreateContent>
      )
    } else if (this.state.mode === "update") {
      _content = this.getReadContent()
      _article = (
        <UpdateContent
          data={_content}
          onSubmit={function (_title, _desc, _id) {
            // this.max_content_id += 1 update에서는 필요 없다
            // concat 기존데이터 추가용 , 수정하려면
            // contents를 복사 --> Array.from
            // var _contents = this.state.contents.concat({
            //   id: this.max_content_id,
            //   title: _title,
            //   desc: _desc,
            // })
            var _contents = Array.from(this.state.contents)
            var i = 0
            while (i < _contents.length) {
              if (_contents[i].id === _id) {
                _contents[i] = { id: _id, title: _title, desc: _desc }
                break
              }
              i += 1
            }
            this.setState({
              contents: _contents,
              mode: "welcome",
            })
            console.log(_title, _desc)
          }.bind(this)}
        ></UpdateContent>
      )
    }
    return _article
  }
  render() {
    console.log("App render")

    return (
      <div className="App">
        <Subject
          title={this.state.subject.title}
          sub={this.state.subject.sub}
          onChangePage={function () {
            if (this.state.mode === "read") {
              this.setState({ mode: "welcome" })
            } else {
              this.setState({ mode: "read" })
            }
          }.bind(this)}
        ></Subject>

        <TOC
          onChangePage={function (id) {
            this.setState({ mode: "welcome", selected_content_id: Number(id) })
          }.bind(this)}
          data={this.state.contents}
        ></TOC>
        <Control
          onChangeMode={function (_mode) {
            if (_mode === "delete") {
              if (window.confirm("really?")) {
                var _content = Array.from(this.state.contents)
                var i = 0
                while (i < this.state.contents.length) {
                  if (_content[i].id === this.state.selected_content_id) {
                    // i 원소로부터 1개를 지우겠다.
                    _content.splice(i, 1)
                    break
                  }
                  i += 1
                }
                this.setState({
                  mode: "read",
                  contents: _content,
                })
                alert("deleted !")
              }
            } else {
              this.setState({
                mode: _mode,
              })
            }
          }.bind(this)}
        ></Control>
        {this.getContent()}
      </div>
    )
  }
}

export default App

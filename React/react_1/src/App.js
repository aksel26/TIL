import React, { Component } from "react"
// import logo from "./logo.svg"

import TOC from "./components/toc"
import ReadContent from "./components/ReadContent"
import CreateContent from "./components/CreateContent"
import Subject from "./components/subject"
import Control from "./components/control"
import "./App.css"

// 클래스형
// 컴포넌트를 만드느 코드부분
class App extends Component {
  constructor(props) {
    super(props)
    this.state = {
      selected_content_id: 2,
      mode: "create",
      subject: { title: "WEB", sub: "World Wide Web (state)" },
      welcome: { title: "welcome", desc: "Hello, React!" },
      contents: [
        { id: 1, title: "HTML", desc: "HTML is hypertext ... " },
        { id: 2, title: "CSS", desc: "CSS is for design ... " },
        { id: 3, title: "JavaScript", desc: "JS is for interactive ... " },
      ],
    }
  }
  render() {
    console.log("App render")
    var _title,
      _desc,
      _article = null
    if (this.state.mode === "read") {
      _title = this.state.welcome.title
      _desc = this.state.welcome.desc
      _article = <ReadContent title={_title} desc={_desc}></ReadContent>
    } else if (this.state.mode === "welcome") {
      var i = 0
      while (i < this.state.contents.length) {
        var data = this.state.contents[i]
        if (data.id === this.state.selected_content_id) {
          _title = data.title
          _desc = data.desc
          break
        }
        i += 1
      }
      _article = <ReadContent title={_title} desc={_desc}></ReadContent>
      // _title = this.state.contents[0].title
      // _desc = this.state.contents[0].desc
    } else if (this.state.mode === "create") {
      _article = (
        <CreateContent
          onSubmit={function (_title, _desc) {
            //add content to this.state.contents
            console.log(_title, _desc)
          }.bind(this)}
        ></CreateContent>
      )
    }
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
            this.setState({
              mode: _mode,
            })
          }.bind(this)}
        ></Control>
        {_article}
      </div>
    )
  }
}

export default App

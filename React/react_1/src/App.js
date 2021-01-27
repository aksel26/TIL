import React, { Component } from "react"
// import logo from "./logo.svg"

import TOC from "./components/toc"
import Content from "./components/content"
import Subject from "./components/subject"
import "./App.css"

// 클래스형
// 컴포넌트를 만드느 코드부분
class App extends Component {
  constructor(props) {
    super(props)
    this.state = {
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
  render() {
    console.log("App render")
    var _title,
      _desc = null
    if (this.state.mode === "welcome") {
      _title = this.state.welcome.title
      _desc = this.state.welcome.desc
    } else if (this.state.mode === "read") {
      _title = this.state.contents[0].title
      _desc = this.state.contents[0].desc
    }
    return (
      <div className="App">
        <Subject
          title={this.state.subject.title}
          sub={this.state.subject.sub}
          onChangePage={function () {
            alert("hihi")
            this.setState({ mode: "welcome" })
          }.bind(this)}
        ></Subject>

        {/* <header>
          <h1>
            <a
              href="/"
              onClick={function (e) {
                e.preventDefault()

                // this.state.mode = "welcome"
                this.setState({
                  mode: "welcome",
                })
              }.bind(this)}
            >
              {this.state.subject.title}
            </a>
          </h1>
          {this.state.subject.sub}
        </header> */}
        <TOC
          onChangePage={function () {
            alert("hi")
            this.setState({ mode: "welcome" })
          }.bind(this)}
          data={this.state.contents}
        ></TOC>
        <Content title={_title} desc={_desc}></Content>
      </div>
    )
  }
}

export default App

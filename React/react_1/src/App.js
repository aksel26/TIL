import React, { Component } from "react"
// import logo from "./logo.svg"

import "./App.css"
//subject라는 컴포넌트를 만든다
class Subject extends Component {
  //render 필수
  render() {
    return (
      // 중요 ! 컴포넌트는 하나의 최상위 태그만 있을 수 있다.
      <header>
        <h1>WEB</h1>
        world wide web!
      </header>
    )
  }
}

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

class Content extends Component {
  render() {
    return (
      <article>
        <h2>HTML</h2>
        HTML is HyperText Markup Language.
      </article>
    )
  }
}
// 클래스형
// 컴포넌트를 만드느 코드부분
class App extends Component {
  render() {
    return (
      <div className="App">
        <Subject></Subject>
        <TOC></TOC>
        <Content></Content>
      </div>
    )
  }
}
// 유사 자바스크립트 (!= 자바스크립트)
// : JSX
// create-react-app이 JSX로 JS언어로 컨버팅해줌

// 함수형
// function App() {
//   return <div className="App">hello react.</div>
// }

export default App

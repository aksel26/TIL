import React, { Component } from "react"
// import logo from "./logo.svg"

import TOC from "./components/toc"
import Content from "./components/content"
import Subject from "./components/subject"
import "./App.css"

//subject라는 컴포넌트를 만든다
// class Subject extends Component {
//   //render 필수
//   render() {
//     return (
//       // 중요 ! 컴포넌트는 하나의 최상위 태그만 있을 수 있다.
//       <header>
//         <h1>{this.props.title}</h1>
//         {this.props.sub}
//       </header>
//     )
//   }
// }

// class TOC extends Component {
//   render() {
//     return (
//       <nav>
//         <ul>
//           <li>
//             <a href="1.html"></a>HTML
//           </li>
//           <li>
//             <a href="3.html"></a>CSS
//           </li>
//           <li>
//             <a href="2.html"></a>JS
//           </li>
//         </ul>
//       </nav>
//     )
//   }
// }

// class Content extends Component {
//   render() {
//     return (
//       <article>
//         <h2>{this.props.title}</h2>
//         {this.props.desc}
//       </article>
//     )
//   }
// }

// 클래스형
// 컴포넌트를 만드느 코드부분
class App extends Component {
  render() {
    return (
      <div className="App">
        <Subject title="WEB" sub="world wide web! by props"></Subject>
        <TOC></TOC>
        <Content
          title="HTML"
          desc="HTML is HyperText Markup Language (by props)"
        ></Content>
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

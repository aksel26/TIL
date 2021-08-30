import logo from "./logo.svg"
// import "./App.css"
import "./ValidationSample.css"
// import EventPractice from "./EventPractice"
import ValidationSample from "./ValidationSample"
import ScrollBox from "./ScrollBox"
import IterationSample from "./map22"
import { Component } from "react"
import LifeCycleSample from "./LifeCycleSample"
import ErrorBoundary from "./ErrorBoundary"
import React, { useState, useEffect } from "react"
import HooksSample from "./HooksSample"
import Counter from "./Counter"
import Info from "./Info"
import Average from "./Average"

// function getRandomColor() {
//   return "#" + Math.floor(Math.random() * 16777215).toString(16)
// }
// class App extends Component {
//   state = {
//     color: "#000000",
//   }

//   handleClick = () => {
//     this.setState({
//       color: getRandomColor(),
//     })
//   }
//   render() {
//     return (
//       <div>
//         {/* <EventPractice></EventPractice> */}
//         {/* <ValidationSample></ValidationSample> */}
//         {/* <ScrollBox
//           ref={(ref) => {
//             console.log(ref)
//             this.scrollBox = ref
//           }}
//         ></ScrollBox>
//         <button onClick={() => this.scrollBox.scrollToBottom()}>
//           맨 밑으로
//         </button> */}
//         {/* <IterationSample></IterationSample> */}
//         {/* <LifeCycleSample></LifeCycleSample> */}
//         {/* <button onClick={this.handleClick}>랜덤색상</button>
//         <ErrorBoundary>
//           <LifeCycleSample color={this.state.color} />
//         </ErrorBoundary> */}
//         <HooksSample></HooksSample>
//       </div>
//     )
//   }
// }

// export default App

export default function App() {
  const [visible, setVisible] = useState(false)

  return (
    <div>
      {/* <button
        onClick={() => {
          setVisible(!visible)
        }}
      >
        {visible ? "숨기기" : "보이기"}
      </button>
      <hr />
      {visible && <HooksSample />} */}

      {/* <Counter /> */}
      {/* <Info /> */}
      <Average />
    </div>
  )
}

import logo from "./logo.svg"
// import "./App.css"
import "./ValidationSample.css"
// import EventPractice from "./EventPractice"
import ValidationSample from "./ValidationSample"
import ScrollBox from "./ScrollBox"
import IterationSample from "./map22"
import { Component } from "react"
import LifeCycleSample from "./LifeCycleSample"

class App extends Component {
  render() {
    return (
      <div>
        {/* <EventPractice></EventPractice> */}
        {/* <ValidationSample></ValidationSample> */}
        {/* <ScrollBox
          ref={(ref) => {
            console.log(ref)
            this.scrollBox = ref
          }}
        ></ScrollBox>
        <button onClick={() => this.scrollBox.scrollToBottom()}>
          맨 밑으로
        </button> */}
        {/* <IterationSample></IterationSample> */}
        <LifeCycleSample></LifeCycleSample>
      </div>
    )
  }
}

export default App

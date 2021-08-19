import logo from "./logo.svg"
// import "./App.css"
import "./ValidationSample.css"
// import EventPractice from "./EventPractice"
import ValidationSample from "./ValidationSample"
import ScrollBox from "./ScrollBox"
import { Component } from "react"

class App extends Component {
  render() {
    return (
      <div>
        {/* <EventPractice></EventPractice> */}
        {/* <ValidationSample></ValidationSample> */}
        <ScrollBox
          ref={(ref) => {
            console.log(ref)
            this.scrollBox = ref
          }}
        ></ScrollBox>
        <button onClick={() => this.scrollBox.scrollToBottom()}>
          맨 밑으로
        </button>
      </div>
    )
  }
}

export default App

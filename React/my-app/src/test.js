import React, { Component } from "react"

class Test extends Component {
  constructor(props) {
    super(props)
    this.state = {
      number: 0,
      fixedNumber: 0,
    }
  }

  state = {
    num: 0,
    fixed: 2,
  }

  render() {
    const { number, fixedNumber } = this.state

    return (
      <div>
        <h3>{number}</h3>
        <h4>바뀌지 않음{fixedNumber}</h4>
        <button
          onClick={() => {
            this.setState({ number: number + 1 }, () => {
              console.log("setState가 호출되고난 후 내가 나왔다")
            })
          }}
          // this.setState({ number: this.state.number + 1 })
          //     this.setState((prevState) => {
          //       return { number: prevState.number + 1 }
          //     })
          //     this.setState((prevState) => ({ number: prevState.number + 1 }))
          //   }

          // }
        >
          +1
        </button>
      </div>
    )
  }
}

export default Test

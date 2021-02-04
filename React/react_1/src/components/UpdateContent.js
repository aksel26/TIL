import React, { Component } from "react"

class UpdateContent extends Component {
  constructor(props) {
    super(props)
    this.state = {
      id: this.props.data.id /* <--- */,
      title: this.props.data.title,
      desc: this.props.data.desc,
    }
    this.inputFormHandler = this.inputFormHandler.bind(this)
  }

  inputFormHandler(e) {
    this.setState({
      [e.target.name]: e.target.value,
    })
  }
  render() {
    console.log("UpdateContent render")
    console.log(this.props.data)
    return (
      <article>
        <h2>Update</h2>
        <form
          action="/create_process"
          method="post"
          onSubmit={function (e) {
            e.preventDefault()
            this.props.onSubmit(
              this.state.title,
              this.state.desc,
              this.state.id /* <--- */
            )
          }.bind(this)}
        >
          {/* 식별자를 위한 코드부분 */}
          <input type="hidden" name="id" value={this.state.id}></input>
          <p>
            <input
              type="text"
              name="title"
              placeholder="title"
              value={this.state.title}
              // onChange={this.inputFormHandler.bind(this)}
              onChange={this.inputFormHandler}
            ></input>
          </p>
          <p>
            {/* <textarea name="desc" placeholder="description">
              {this.state.desc}
            </textarea> */}
            <textarea
              name="desc"
              placeholder="description"
              value={this.state.desc}
              // onChange={this.inputFormHandler.bind(this)}
              onChange={this.inputFormHandler}
            ></textarea>
          </p>
          <p>
            <input type="submit"></input>
          </p>
        </form>
      </article>
    )
  }
}

export default UpdateContent

import { Route, Switch, NavLink, Link, useParams } from "react-router-dom"
import React, { Component } from "react"
import "./App.css"
function Home() {
  return (
    <div>
      <h2>Home</h2>
      Home....
    </div>
  )
}

let contents = [
  { id: 1, title: "HTML", desc: "HTML is..." },
  { id: 2, title: "JS", desc: "JS is..." },
  { id: 3, title: "React", desc: "React is..." },
]

function Topic() {
  var params = useParams()
  var topic_id = params.topic_id
  var selected_topic = {
    title: "No data",
    desc: "Not found",
  }
  for (var i = 0; i < contents.length; i++) {
    if (contents[i].id === Number(topic_id)) {
      selected_topic = contents[i]
      break
    }
  }
  console.log("params:", params, "params.topic_id", params.topic_id)
  return (
    <div>
      <h3>{selected_topic.title}</h3>
      {selected_topic.desc}
    </div>
  )
}
function Topics() {
  let lis = []

  for (var i = 0; i < contents.length; i++) {
    lis.push(
      <li>
        <NavLink to={"/topics/" + contents[i].id}>{contents[i].title}</NavLink>
      </li>
    )
  }
  return (
    <div>
      <h2>Topics</h2>
      <ul>{lis}</ul>
      <Route path="/topics/:topic_id">
        <Topic></Topic>
      </Route>
    </div>
  )
}
function Contact() {
  return (
    <div>
      <h2>Contact</h2>
      Contact....
    </div>
  )
}

class App extends Component {
  render() {
    return (
      <div className="App">
        <h1>React Router DOM Example</h1>
        <ul>
          <li>
            <Link to="/">Home</Link>
          </li>
          <li>
            <Link to="/topics">Topics</Link>
          </li>
          <li>
            <Link to="/contact">Contact</Link>
          </li>
        </ul>
        <Switch>
          <Route exact path="/">
            <Home></Home>
          </Route>
          <Route path="/topics">
            <Topics></Topics>
          </Route>
          <Route path="/contact">
            <Contact></Contact>
          </Route>
          <Route path="/">Not Found 404</Route>
        </Switch>
      </div>
    )
  }
}

export default App

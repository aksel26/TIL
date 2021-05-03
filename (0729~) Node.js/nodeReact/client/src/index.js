import React from "react"
import ReactDOM from "react-dom"
import "./index.css"
import App from "./App"
import reportWebVitals from "./reportWebVitals"
import "antd/dist/antd.css"
import { Provider } from "react-redux"
import { applyMiddleware, createStore } from "redux"
import promiseMiddleware from "redux-promise"
import ReduxThunk from "redux-thunk"
import Reducer from "./_reducers"
const createStoreWithMiddleware = applyMiddleware(
  promiseMiddleware,
  ReduxThunk
)(createStore)

ReactDOM.render(
  <Provider
    store={createStoreWithMiddleware(
      Reducer,

      //크롬에서 redux익스텐션 프로그램을 사용하기 위함
      window.__REDUX_DEVTOOLS_EXTENSION__ &&
        window.__REDUX_DEVTOOLS_EXTENSION__()
    )}
  >
    <React.StrictMode>
      <App />
    </React.StrictMode>
  </Provider>,
  document.getElementById("root")
)

// If you want to start measuring performance in your app, pass a function
// to log results (for example: reportWebVitals(console.log))
// or send to an analytics endpoint. Learn more: https://bit.ly/CRA-vitals
reportWebVitals()

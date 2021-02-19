/* eslint-disable*/

import React, { useState } from "react"
import logo from "./logo.svg"
import "./App.css"

function App() {
  let [title, titleChange] = useState([
    "남자 코트 추천",
    "강남구 맛집 지도",
    "음악 지도",
  ])
  let [따봉, 따봉변경] = useState(0)

  // modal스위치
  let [modal, modalChange] = useState(false)
  let [누른제목, 변경] = useState(0)
  let [입력값, 입력값변경] = useState("")

  //map함수(유사반복문) : array 내의 모든 데이터에 똑같은 작업을 시켜주고 싶을때 사용 (예시 )
  var array = [2, 3, 4]
  var newArray = array.map(function (array) {
    return array * 2
  })
  // console.log(newArray) //[4,6,8]

  // 일반적인 반복문
  function 반복문UI() {
    var array2 = []
    for (var i = 0; i < 3; i++) {
      array2.push(<div>안녕</div>)
    }
    return array2
  }

  function change() {
    var newArray = [...title]
    // var newArray = Array.from(title)
    newArray[0] = "여자코트 추천"
    titleChange(newArray)
  }

  return (
    <div className="App">
      <div className="black-nav">
        <div>개발 Blog</div>
      </div>
      <button onClick={change}>버튼</button>
      {/* <div className="list">
        <h3>
          {title[0]}
          <span
            onClick={() => {
              따봉변경((따봉 += 1))
            }}
          >
            👍
          </span>{" "}
          {따봉}
        </h3>
        <p>2월17일 발행</p>
        <hr />
      </div>
      <div className="list">
        <h3>{title[1]}</h3>
        <p>2월17일 발행</p>
        <hr />
      </div>
      <div className="list">
        <h3>{title[2]}</h3>
        <p>2월17일 발행</p>
        <hr />
      </div> */}

      {/* <button
        onClick={() => {
          변경(0)
        }}
      >
        버튼1
      </button>
      <button
        onClick={() => {
          변경(1)
        }}
      >
        버튼2
      </button>
      <button
        onClick={() => {
          변경(2)
        }}
      >
        버튼3
      </button> */}
      {/* {입력값}
      <input
        onChange={(e) => {
          입력값변경(e.target.value)
        }}
      /> */}

      <div className="publish">
        <input
          onChange={(e) => {
            입력값변경(e.target.value)
          }}
        />

        <button
          onClick={() => {
            // console.log(입력값)
            // title.map(function (입력값, i) {
            //   titleChange(입력값)
            // })
            var titleCopy = [...title]
            titleCopy.unshift(입력값)
            titleChange(titleCopy)
          }}
        >
          저장
        </button>
      </div>
      <button onClick={() => modalChange(!modal)}>모달!</button>

      {modal === true ? (
        <Modal title={title} 누른제목={누른제목}></Modal>
      ) : null}
      {반복문UI()}
      {
        // 변수 , 함수(), 반복문(for(x), map())

        // title.map(function () {
        //   return <div>안녕</div>
        // })

        // i라는 parameter는 title 에서의 내용을 의미한다.
        title.map(function (title, i) {
          return (
            <div className="list" key={i}>
              <h3
                onClick={() => {
                  변경(i)
                }}
              >
                {title}
                <span onClick={() => 따봉변경(따봉 + 1)}>👍</span> {따봉}
              </h3>
              <p>2월17일 발행</p>
              <hr />
            </div>
          )
        })
      }
    </div>
  )
}

function Modal(props) {
  return (
    <div>
      <h3>{props.title[props.누른제목]}</h3>
    </div>
  )
}
// 1. 컴포넌트 만들기
//    이름을 대문자로 시작할
//    소괄호 안에 같은 html태그들이 나란히 나올 수 없다.
//    fragment문법 div를 사용하지 않고 return ()내부를 묶을 때 : <> </>

// 2. 컴포넌트를 만들면 좋은 경우
//    반복출현하는 HTML 덩어리들
//    자주 변경되는 HTML UI들
//    다른 페이지 만들때도

// 2-1. 단점
//    state를 쓸때 복잡해짐 --> props를 활용해야 한다.

export default App

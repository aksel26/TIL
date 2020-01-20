import React from 'react';
import ReactDOM from "react-dom";
import App from "./App"


// 오류
// import Potato from "./test"; 
// ReactDOM.render(<App /><Potato/>, document.getElementById('root'));
// 리액트 어플리케이션이 하나의 component만을 rendering해야하기 때문임.
// 그 component가 App임. 


ReactDOM.render(<App />, document.getElementById('root'));


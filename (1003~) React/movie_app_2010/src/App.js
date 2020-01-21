import React from 'react';
import PropTypes from "prop-types"



class App extends React.Component{
  state = {
    count : 0

  }


  add = () =>{
    console.log("add")
  }
  minus = () =>{
    console.log("minus")
  };
  render(){
    // return <h1> im a class component</h1 >;
    return(
      <div>
        {/* render에서 count를 사용하는 방법 */}
        <h1> The number is : {this.state.count}</h1 > 
        <button onClick={this.add}>Add</button>
        <button onClick={this.minus}>Minus</button>
      </div>
    )
  }
}

export default App;



import React from 'react';
import PropTypes from "prop-types"



class App extends React.Component{
  state = {
    isLoading:true


  };

  componentDidMount(){
    setTimeout(()=>{
      this.setState({isLoading:false});
    },2000);
  }

  
  render(){
    const{isLoading} = this.state;
    return(
      <div>
        {/* {
        this.state.isLoading ? "loading..." : "we are ready"
        } */}

        
        {isLoading ? "loading " : "we are ready"}

        
      </div>
    )
  }
}

export default App;
import React from 'react';
import PropTypes from "prop-types"
import axios from "axios";


class App extends React.Component{
  state = {
    isLoading:true,
    movies : []

  };


  getMovies= async() => {
    const movies = await axios.get("https://yts-proxy.now.sh/list_movies.json")

  }
  componentDidMount(){
    this.getMovies();



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
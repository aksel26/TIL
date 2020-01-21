import React from 'react';
import PropTypes from "prop-types"

const foodILike = [
  {
    id:1,
    name: "Kimchi",
    image:
      "http://aeriskitchen.com/wp-content/uploads/2008/09/kimchi_bokkeumbap_02-.jpg",
    rating:8
    },
  {
    id:2,
    name: "Samgyeopsal",
    image:
      "https://3.bp.blogspot.com/-hKwIBxIVcQw/WfsewX3fhJI/AAAAAAAAALk/yHxnxFXcfx4ZKSfHS_RQNKjw3bAC03AnACLcBGAs/s400/DSC07624.jpg",
      rating:8.5
  },
  {
    id:3,
    name: "Bibimbap",
    image:
      "http://cdn-image.myrecipes.com/sites/default/files/styles/4_3_horizontal_-_1200x900/public/image/recipes/ck/12/03/bibimbop-ck-x.jpg?itok=RoXlp6Xb",
      rating:5.7
  },
  {
    id:4,
    name: "Doncasu",
    image:
      "https://s3-media3.fl.yelpcdn.com/bphoto/7F9eTTQ_yxaWIRytAu5feA/ls.jpg",
      rating:2.3
  },
  {
    id:5,
    name: "Kimbap",
    image:
      "http://cdn2.koreanbapsang.com/wp-content/uploads/2012/05/DSC_1238r-e1454170512295.jpg",
      rating:5.3

  }
];


// props -> object -> fav
function Food({name,image,rating}){
  

  // object는 component로 전달된 모든 prop들
  return (
  
    <div> 
      <h1> I like {name}</h1>
      <h4>{rating}/10.0</h4>
      <img src={image} alt={name}/>

    </div>
  );
}




// JS - Map
// array의 각 item에서 function을 실행하는 array를 가지는 javascript function이며
// function의 result를 갖는 array를 반환


Food.propTypes ={
  name : PropTypes.string.isRequired,
  image : PropTypes.string.isRequired,
  rating: PropTypes.number.isRequired


}; 

function App() {
  return  (
  <div>
    {/* Food Component에 kimchi라는 value로 prop name을 줌 */}
    {/* prop ; property */}

    {/* string, boolean, array로 정보를 보낼 수 있다. */}
    {/* dish는 object!! */}
    {foodILike.map(dish => ( 
      <Food 
        key={dish.id} 
        name={dish.name} 
        image={dish.image} 
        rating={dish.rating}/>
      ))}
  </div>
  );
 }

export default App;


// 1.  component는 HTML을 반환하는 함수
// javascript와 HTML사이의 조합을 jsx라고 한다.


// 2. component에 정보를 보낼 수 있다.
//     children parent개념
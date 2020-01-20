import React from 'react';


// props -> object -> fav
function Food({name,image}){
  

  // object는 component로 전달된 모든 prop들
  return (
  
    <div> 
      <h1> I like {name}</h1>
      <img src={image} alt={name}/>
    </div>
  );
}


const foodILike = [
  {
    id:1,
    name: "Kimchi",
    image:
      "http://aeriskitchen.com/wp-content/uploads/2008/09/kimchi_bokkeumbap_02-.jpg"
  },
  {
    id:2,
    name: "Samgyeopsal",
    image:
      "https://3.bp.blogspot.com/-hKwIBxIVcQw/WfsewX3fhJI/AAAAAAAAALk/yHxnxFXcfx4ZKSfHS_RQNKjw3bAC03AnACLcBGAs/s400/DSC07624.jpg"
  },
  {
    id:3,
    name: "Bibimbap",
    image:
      "http://cdn-image.myrecipes.com/sites/default/files/styles/4_3_horizontal_-_1200x900/public/image/recipes/ck/12/03/bibimbop-ck-x.jpg?itok=RoXlp6Xb"
  },
  {
    id:4,
    name: "Doncasu",
    image:
      "https://s3-media3.fl.yelpcdn.com/bphoto/7F9eTTQ_yxaWIRytAu5feA/ls.jpg"
  },
  {
    id:5,
    name: "Kimbap",
    image:
      "http://cdn2.koreanbapsang.com/wp-content/uploads/2012/05/DSC_1238r-e1454170512295.jpg"
  }
];

// JS - Map
// array의 각 item에서 function을 실행하는 array를 가지는 javascript function이며
// function의 result를 갖는 array를 반환




function App() {
  return  (
  <div>
    {/* Food Component에 kimchi라는 value로 prop name을 줌 */}
    {/* prop ; property */}

    {/* string, boolean, array로 정보를 보낼 수 있다. */}
    {/* dish는 object!! */}
    {foodILike.map(dish => ( 
      <Food key={dish.id} name={dish.name} image={dish.image}/>
      ))}
  </div>
  );
 }

export default App;


// 1.  component는 HTML을 반환하는 함수
// javascript와 HTML사이의 조합을 jsx라고 한다.


// 2. component에 정보를 보낼 수 있다.
//     children parent개념
import React from 'react';


// props -> object -> fav
function Food({fav}){
  

  // object는 component로 전달된 모든 prop들
  return <h1> i like {fav}</h1>
}




function App() {
  return  (<div>
    <h1>Hello</h1>

    {/* Food Component에 kimchi라는 value로 prop name을 줌 */}
    {/* prop ; property */}

    {/* string, boolean, array로 정보를 보낼 수 있다. */}
    <Food fav="Kimchi" />
    <Food fav="ramen" />
    <Food fav="pasta" />
    <Food fav="Chicken" />

    </div>
  );
 }

export default App;


// 1.  component는 HTML을 반환하는 함수
// javascript와 HTML사이의 조합을 jsx라고 한다.


// 2. component에 정보를 보낼 수 있다.
//     children parent개념
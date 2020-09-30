# Selector

```css
/* selector {
  property : value;
} */

* {
  color : green;
}

li {
  
  color : blue;
}

/* 태그에만 한정 */
li #special {
  color: pink;
}

.red{
  background : yellow;
  width : 100px;
  height : 100px;
}

/* : state */
button:hover {
  color : red;
  background:beige;
  
}

/* google로 시작하는 */
a[href^="google"]{
  color : purple;
}


/* .com으로 끝나는 */
a[href $=".com"]{
  color : red;
}
```

<br/> 

# Padding & Margin

```c++
.red{
  width : 100px;
  height: 100px;
  background : yellow;
/*   padding: 20px;   
  padding-top : 100px;
  padding-right : 100px;
   */  
  
  /* padding : 20px 20px 200px 300px; */
  
  padding : 20px 0px;
  
/*   padding : 컨텐츠 안에 들어가는 spacing */
  
  margin: 20px;
  /*   컨텐츠 바깥에 들어가는 spacing */
  
  border-width : 2px;
  border-style : solid;
  border-color:pink;
  
/* 한줄로
  border : 2px dashed red; */
}
```


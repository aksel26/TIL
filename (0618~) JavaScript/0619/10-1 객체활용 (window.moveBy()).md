```html

<!DOCTYPE html>
<html lang="ko">
<head>
  <meta charset="UTF-8">
  <title>Window.move</title>
  <script>
    window.onload = function (){
      document.getElementById("up").onclick= function(){
        window.moveBy(0,-50);
      }
      document.getElementById("left").onclick= function(){
        window.moveBy(-50,0);
      }
      document.getElementById("right").onclick= function(){
        window.moveBy(50,0);
      }
      document.getElementById("down").onclick= function(){
        window.moveBy(0,50);
      }
    }

  </script>
</head>
<body>
  <h3>js12.html</h3>
&nbsp;&nbsp;&nbsp;&nbsp;<input type="button" id="up" value="    UP    "><br>
&nbsp;&nbsp;&nbsp;&nbsp;<input type="button" id="left" value="    LEFT    "><br>
&nbsp;&nbsp;&nbsp;&nbsp;<input type="button" id="right" value="    RIGHT    "><br>
&nbsp;&nbsp;&nbsp;&nbsp;<input type="button" id="down" value="    DOWN    ">
</body>
</html>

```


function range(start, end, step) {
    var arr = [];
    if(start<end){
      for(var i = start ; i< end ; i = i+step){
        arr.push(i)
      }
    }else{
      for(var i = start ; i> end ; i = i+step){
        arr.push(i)
      }
    }
    return arr;
}

// 테스트 코드
console.log(range(1, 10, 1));
console.log(range(-1, 10, 3));
console.log(range(10, -10, -4));

//  출력

// [1, 2, 3, 4, 5, 6, 7, 8, 9]
// [ -1, 2, 5, 8 ]
// [ 10, 6, 2, -2, -6 ]
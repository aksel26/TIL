function getSecondBiggestNumber(arr) {
    var num1; 
    var tmp;
    
    for(var i = 0; i< arr.length ; i++){
      for(var j = 0 ; j<arr.length-1; j++){
          if(arr[j]<arr[j+1]){
          tmp = arr[j];
          arr[j] = arr[j+1];
          arr[j+1] = tmp;
          
        // console.log(arr)
        }    
      }
  }
    return arr[1];  
}



//  ====== sort 이용 ======

//     arr.sort(function(a,b){
//       return b-a;
//     })
    
//     return arr[1];
// }



// 테스트 코드
console.log(getSecondBiggestNumber([4, 7, 2, 1, 9, 3, 6, 5]));
console.log(getSecondBiggestNumber([80, 2, 44, 21, 92, 3, 51]));
console.log(getSecondBiggestNumber([4, 7, 6, 5]));


// 출력
// 7
// 80
// 6

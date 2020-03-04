var arr1 = [[2, 1], [4, 3]];
var arr2 = [[3, 2, 1], [5, 4], [6]];
var arr3 = [[3], [4, 5], [6], [7], [8, 9, 10]];

function restoreArray(arr) {
    var returnArr = [];
    var idx1=0;

for(var i = 0; i<arr.length ; i++){

//  내가 한 방법 (reverse 사용)
  arr[i].reverse()
//   해설지 방법
//   for(var j = arr[i].length-1 ;j >= 0 ; j --){
  for(var j = 0 ;j < arr[i].length ; j ++){
    returnArr[idx1] = arr[i][j]
    idx1++;
  returnArr[idx1]
    
  }
}
    return returnArr;
}

console.log(restoreArray(arr1));
console.log(restoreArray(arr2));
console.log(restoreArray(arr3));

// 출력

// [ 1, 2, 3, 4 ]

// [ 1, 2, 3, 4, 5, 6 ]

// [
//   3,  5, 4, 6,
//   7, 10, 9, 8
// ]
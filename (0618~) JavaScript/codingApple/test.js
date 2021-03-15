function game(num) {
  //   if (num % 9 == 0) {
  //     console.log("박수*2")
  //   } else if (num % 9 == 0) {
  //     console.log("박수")
  //   } else {
  //     console.log("통과")
  //   }

  if (num % 10 == 3 || num % 10 == 6 || num % 10 == 9) {
    console.log("박수")
  } else {
    console.log("통과")
  }
}

var num = 2
game(num)

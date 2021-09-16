function solution(n) {
  var answer = ""

  while (n !== 0) {
    let temp = n % 3

    switch (temp) {
      case 1:
        answer = "1" + answer
        n = Math.floor(n / 3)
        break
      case 2:
        answer = "2" + answer
        n = Math.floor(n / 3)
        break

      default:
        answer = "4" + answer
        n = n / 3 - 1
        break
    }

    // 실패코드
    //     if (temp === 1) {
    //       temp = 1
    //     } else if (temp === 2) {
    //       temp = 2
    //     } else if (temp === 0) {
    //       temp = 4
    //     }

    //     answer += temp
    //     if (n % 3 === 0) n -= 1
    //     n = Math.floor(n / 3)
  }
  //     answer = answer.split("").reverse().join("")

  return answer
}
// solution(4)
console.log("solution(4): ", solution(500000000))

function solution(n) {
  var answer = 0
  let limit = Math.floor(n / 2)
  let cnt = 0
  for (let index = 0; index <= limit; index++) {
    let start = index
    let sum = 0
    while (sum <= n) {
      start++
      sum += start
      if (sum === n) {
        cnt++
        console.log("sum: ", sum)
      }
    }
  }

  answer = cnt + 1
  return answer
}

solution(15)

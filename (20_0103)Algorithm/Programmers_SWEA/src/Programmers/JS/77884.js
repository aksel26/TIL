function counter(input) {
  let cnt = 1

  for (let i = 1; i <= Math.floor(input / 2); i++) {
    if (input % i === 0) {
      cnt++
    }
  }

  return cnt
}

function solution(left, right) {
  var answer = 0

  for (let i = left; i <= right; i++) {
    var tt = counter(i)

    if (tt % 2 === 0) answer += i
    else answer -= i
  }

  return answer
}

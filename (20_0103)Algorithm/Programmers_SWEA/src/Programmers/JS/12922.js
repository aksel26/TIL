function solution(n) {
  var answer = ""

  var sam = "수박"
  var cnt = n / 2
  if (n % 2 === 0) {
    while (cnt--) {
      answer += sam
    }
  } else {
    cnt = Math.floor(cnt)
    while (cnt--) {
      answer += sam
    }
    answer += sam.charAt(0)
  }

  return answer
}

console.log(solution(7))

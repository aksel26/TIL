function solution(n) {
  var answer = []

  var stringNum = n.toString()
  var idx = stringNum.length
  while (idx--) {
    answer.push(Number(stringNum.charAt(idx)))
  }

  return answer
}

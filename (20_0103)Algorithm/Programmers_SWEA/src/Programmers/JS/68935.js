function solution(n) {
  var answer = 0

  var res = n.toString(3).split("").reverse()

  var powNum = res.length - 1

  for (let i = 0; i < res.length; i++) {
    answer += res[i] * Math.pow(3, powNum)

    powNum--
  }

  return answer
}

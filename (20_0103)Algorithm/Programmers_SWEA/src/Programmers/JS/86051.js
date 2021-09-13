function solution(numbers) {
  var answer = 0
  numbers.sort()

  var tt = new Array(10).fill(0)
  for (let i = 0; i < numbers.length; i++) {
    var temp = numbers[i]
    tt[temp] = -1
  }

  tt.map((v, index) => (v === 0 ? (answer += index) : (answer += 0)))

  return answer
}

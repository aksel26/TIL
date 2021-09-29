function solution(priorities, location) {
  var answer = 0
  let tt = []

  let ranking = 0

  while (priorities.length !== 0) {
    if (Math.max(...priorities) > priorities[0]) {
      if (--location < 0) location = priorities.length - 1
      priorities.push(priorities.shift())
    } else {
      ranking++
      if (--location < 0) return ranking
      priorities.shift()
    }
  }

  console.log("answer: ", ranking)
  answer = ranking
  return answer
}
// solution([2, 1, 3, 2], 2)
console.log(
  "solution([1, 1, 9, 1, 1, 1], 0): ",
  solution([1, 1, 9, 1, 1, 1], 0)
)

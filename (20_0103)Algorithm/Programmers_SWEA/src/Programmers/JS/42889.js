function solution(N, stages) {
  if (stages.length === 0) return [0]
  else {
    let answer = Array(N).fill(0)
    let res = []

    let idx = 1

    while (idx !== N + 1) {
      let first = stages.filter((v) => v === idx).length
      let second = stages.filter((v) => v >= idx).length

      let failRate = first / second
      if (isNaN(failRate)) failRate = 0

      answer[idx - 1] = failRate

      idx++
    }

    while (res.length !== N) {
      let maxNum = Math.max(...answer)
      let indexMax = answer.indexOf(maxNum)
      answer[indexMax] = -1

      res.push(indexMax + 1)
    }
    if (res.length > 0) answer = []
    return res
  }
}

// solution(5, [2, 1, 2, 6, 2, 4, 3, 3])
// solution(4, [4, 4, 4, 4])
solution(5, [1, 2, 2, 1, 3])
console.log("solution(5, [1, 2, 2, 1, 3]): ", solution(5, [1, 2, 2, 1, 3]))

function solution(answers) {
  var answer = []

  var student = [
    [1, 2, 3, 4, 5],
    [2, 1, 2, 3, 2, 4, 2, 5],
    [3, 3, 1, 1, 2, 2, 4, 4, 5, 5],
  ]
  let idx = 0
  let cnt = 0
  let result = []
  for (let k = 0; k < student.length; k++) {
    for (let i = 0; i < student[k].length; i++) {
      if (idx === answers.length) {
        idx = 0
      }
      if (answers[idx] === student[k][i]) {
        cnt++
      }
      idx++
    }
    result.push(cnt)
    cnt = 0
    idx = 0
  }

  let max = -100

  for (let i = 0; i < result.length; i++) {
    if (max <= result[i]) {
      max = result[i]
      answer.push(i + 1)
    }
  }

  answer.sort()
  return answer
}

solution([1, 3, 2, 4, 2])
// solution([1, 2, 3, 4, 5])

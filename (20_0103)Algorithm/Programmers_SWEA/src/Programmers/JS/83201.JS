// 등급을 메기는 함수
function grading(input) {
  const res = input
    .map((v) => {
      if (v >= 90) {
        return "A"
      } else if (v >= 80 && v < 90) {
        return "B"
      } else if (v >= 70 && v < 80) {
        return "C"
      } else if (v >= 50 && v < 70) {
        return "D"
      } else {
        return "F"
      }
    })
    .join("")
  return res
}

function solution(scores) {
  let person = []
  let selfScore = 0
  let result = []
  let div = scores.length

  for (let i = 0; i < scores.length; i++) {
    for (let j = 0; j < scores[i].length; j++) {
      if (i === j) {
        selfScore = scores[j][i]
      }
      person.push(scores[j][i])
    }

    // 각 행의 총합 구하기
    let sum = person.reduce((acc, cur) => (acc += cur))

    // 각 행의 최대값 구하기
    let maxNum = person.reduce(function (a, b) {
      return Math.max(a, b)
    })

    // 각 행의 최소값 구하기
    let minNum = person.reduce(function (a, b) {
      return Math.min(a, b)
    })

    if (maxNum === selfScore) {
      // 최대점수가 2개 이상일 경우
      let dup = person.filter((v) => v === maxNum).length
      if (dup >= 2) {
        div
        sum
      } else {
        div--
        sum -= maxNum
      }
    } else if (minNum === selfScore) {
      // 최소점수가 2개 이상일 경우
      let dup = person.filter((v) => v === minNum).length
      if (dup >= 2) {
        div
        sum
      } else {
        div--
        sum -= minNum
      }
    }

    result.push(sum / div)
    person = []
    selfScore = 0
    sum = 0
    div = scores.length
  }

  var answer = grading(result)
  return answer
}

solution([
  [70, 49, 90],
  [68, 50, 38],
  [73, 31, 100],
])

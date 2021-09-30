function solution(citations) {
  var answer = 0

  citations.sort((a, b) => b - a)

  let cnt = 0
  for (let i = 0; i <= citations.length; i++) {
    let crit = i + 1

    for (let j = 0; j <= citations.length; j++) {
      if (citations[i] >= crit) cnt++

      if (cnt === crit) {
        answer = cnt
        break
      }
    }
  }

  return answer
}

solution([3, 0, 6, 1, 5])

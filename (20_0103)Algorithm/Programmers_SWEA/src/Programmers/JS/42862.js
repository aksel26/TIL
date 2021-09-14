function solution(n, lost, reserve) {
  var answer = 0
  lost.sort()
  reserve.sort()
  let arr = new Array(n).fill(1)
  for (let i = 0; i < lost.length; i++) {
    arr[lost[i] - 1] -= 1
  }

  for (let i = 0; i < reserve.length; i++) {
    arr[reserve[i] - 1] += 1
  }

  for (let i = 0; i < n - 1; i++) {
    if (
      (arr[i] === 0 && arr[i + 1] === 2) ||
      (arr[i] === 2 && arr[i + 1] === 0)
    ) {
      arr[i] = 1
      arr[i + 1] = 1
    }
  }
  arr.map((v) => (v !== 0 ? answer++ : answer))
  console.log(answer)
  return answer
}

solution(5, [2, 4], [3])

function primeNum(num) {
  if (num === 2) return true
  for (let i = 2; i <= Math.floor(Math.sqrt(num)); i++) {
    if (num % i === 0) {
      return false
    }
  }
  return true
}

function combination(arr, selectNum) {
  const result = []
  if (selectNum === 1) return arr.map((v) => [v])
  arr.forEach((v, idx, arr) => {
    const fixed = v
    const restArr = arr.slice(idx + 1)
    const combinationArr = combination(restArr, selectNum - 1)
    const combineFix = combinationArr.map((v) => [fixed, ...v])
    result.push(...combineFix)
  })
  return result
}

function solution(nums) {
  var answer = 0
  var sum = 0
  var tt = combination(nums, 3)
  var res = []
  for (let i = 0; i < tt.length; i++) {
    for (let j = 0; j < tt[i].length; j++) {
      sum += tt[i][j]
    }
    res.push(primeNum(sum))
    sum = 0
  }
  res.map((v) => (v === true ? answer++ : answer))
  return answer
}

solution([1, 2, 7, 6, 4])

function comb(input) {
  let set = new Set()
  numOfCase(input, "")
  function numOfCase(arr, str) {
    if (arr.length) {
      for (let i = 0; i < arr.length; i++) {
        let copy = [...arr]
        copy.splice(i, 1)
        numOfCase(copy, str + arr[i])
      }
    }
    if (str > 0) set.add(Number(str))
  }
  return Array.from(set)
}

function prime(nums) {
  console.log("nums: ", nums)

  let res = new Array(nums.length).fill(true)

  let cnt = 0
  for (let i = 0; i < nums.length; i++) {
    let number = nums[i]
    if (number === 2) {
      res[i] = true
      continue
    } else if (number === 1) {
      res[i] = false
      continue
    }
    for (let j = 2; j <= Math.floor(Math.sqrt(number)); j++) {
      if (number % j === 0) res[i] = false
    }
  }
  console.log(res)
  res.map((v) => (v === true ? cnt++ : cnt))
  return cnt
}

function solution(numbers) {
  const nums = numbers.split("").map((v) => Number(v))
  const combiRes = comb(nums)
  const answer = prime(combiRes)
  return answer
}

solution("17")

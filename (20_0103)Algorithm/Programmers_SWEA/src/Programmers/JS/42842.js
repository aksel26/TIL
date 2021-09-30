function divNums(nums) {
  nums.reverse()

  nums.map((v) => {
    if (v < 3) {
      nums.pop()
      nums.shift()
    }
  })
  let idxL = 0
  let idxR = nums.length - 1
  let div = []
  while (idxL <= idxR) {
    let temp = []

    temp.push(nums[idxL++])
    temp.push(nums[idxR--])

    div.push(temp)
  }

  return div
}

function solution(brown, yellow) {
  var answer = []

  let size = brown + yellow
  // 약수 담는 nums
  let nums = []

  for (let i = 1; i <= size; i++) {
    if (size % i === 0) nums.push(i)
  }

  let div = divNums(nums)
  for (let i = 0; i < div.length; i++) {
    let element = div[i]

    let bb = element[0] * 2 + element[1] * 2 - 4
    let yy = size - bb

    if (bb === brown && yy === yellow) answer = element
  }

  return answer
}

solution(8, 1)

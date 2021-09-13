function solution(nums) {
  var answer = -1000

  const tt = new Set()

  for (const number of nums) {
    tt.add(number)
  }

  if (tt.size < nums.length / 2) {
    answer = tt.size
  } else {
    answer = nums.length / 2
  }

  return answer
}

solution([3, 3, 3, 2, 2, 4])

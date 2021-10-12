function solution(clothes) {
  var answer = 1

  let obj = {}

  for (let cloth of clothes) {
    if (obj[cloth[1]]) {
      obj[cloth[1]]++
    } else {
      obj[cloth[1]] = 1
    }
  }
  console.log(Object.keys(obj))

  for (let i of Object.keys(obj)) {
    answer *= obj[i] + 1
  }
  console.log(answer)
  return answer - 1
}

solution([
  ["yellowhat", "headgear"],
  ["bluesunglasses", "eyewear"],
  ["green_turban", "headgear"],
])

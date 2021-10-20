function fib(n) {
  let ans = [0, 1]

  if (n <= 1) return ans[n]

  for (let i = 2; i < n + 1; i++) {
    ans.push((ans[i - 2] + ans[i - 1]) % 1234567)
  }
  return ans[n]
}

function solution(n) {
  var answer = 0

  answer = fib(n)

  return answer
}

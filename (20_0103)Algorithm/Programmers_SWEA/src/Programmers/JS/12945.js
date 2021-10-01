function fib(n) {
  if (n <= 1) return n

  return fib(n - 1) + fib(n - 2)
}

function solution(n) {
  var answer = 0

  answer = fib(n) % 1234567
  return answer
}

// solution(10)
console.log("solution(3): ", solution(6))

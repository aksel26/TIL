let mem = new Array(10).fill(0)

function fib(n) {
  if (n <= 2) {
    return 1
  }
  if (mem[n] !== 0) {
    return mem[n] % 1234567
  } else {
    mem[n] = fib(n - 1) + fib(n - 2)
  }
  return mem[n]
}

fib(5)
console.log("fib(5): ", fib(5))

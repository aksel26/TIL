function solution(n, m) {
  var answer = []

  let nn = n
  let mm = m

  while (m != 0) {
    let r = n % m
    n = m
    m = r
  }
  let gcd = n

  let lcm = (nn * mm) / gcd

  answer.push(gcd)
  answer.push(lcm)

  return answer
}

solution(3, 12)

function solution(A, B) {
  let sortedA = A.sort((a, b) => {
    return a - b
  })

  let sortedB = B.sort((a, b) => {
    return b - a
  })

  let sum = 0
  for (let i = 0; i < sortedA.length; i++) {
    sum += sortedA[i] * sortedB[i]
  }

  return sum
}

solution([1, 2], [3, 4])

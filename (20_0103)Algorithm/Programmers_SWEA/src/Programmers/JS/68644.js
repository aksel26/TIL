function solution(numbers) {
  var answer = []

  for (let i = 0; i < numbers.length; i++) {
    for (let j = i + 1; j < numbers.length; j++) {
      answer.push(numbers[i] + numbers[j])
    }
  }

  answer.sort((a, b) => a - b)
  var res = new Set(answer)
  answer = [...res]

  return answer
}

solution([5, 0, 2, 7])

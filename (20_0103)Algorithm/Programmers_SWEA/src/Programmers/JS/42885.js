function solution(people, limit) {
  let answer = 0

  people.sort((a, b) => b - a)
  console.log("people: ", people)

  for (let i = 0, j = people.length - 1; i <= j; i++, answer++) {
    if (people[i] + people[j] <= limit) j--
  }

  console.log(answer)
  return answer
}
// solution([70, 50, 80, 50], 100)
// solution([70, 80, 50], 100)

solution([70, 80, 40, 43, 45, 50, 50, 96], 100)

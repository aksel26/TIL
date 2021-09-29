function solution(priorities, location) {
  // 순위 초기화
  let ranking = 0

  // 대기목록이 다 비워질 때 까지
  while (priorities.length) {
    // 대기목록 첫번째 요소 배열 최대값보다 작은 경우
    if (priorities[0] < Math.max(...priorities)) {
      // 첫번째 요소가 자신일 경우 location을 배열 마지막으로 옮김
      console.log("location: ", location)
      if (--location < 0) location = priorities.length - 1

      // 제일 앞 요소를 뺴서 제일 뒤에 넣는다
      priorities.push(priorities.shift())
    } else {
      // 순위를 업데이트 해줌
      ranking++
      console.log("ranking: ", ranking)
      // 배열을 빠져나가는 게 자신일 경우 멈추고 순위를 return
      if (--location < 0) return ranking
      // 자신이 아니면 제일 앞의 요소 빼낸다.
      console.log("priorities: ", priorities)
      priorities.shift()
    }
  }
  return answer
}
// solution([2, 1, 3, 2], 2)
solution([1, 1, 9, 1, 1, 1], 0)

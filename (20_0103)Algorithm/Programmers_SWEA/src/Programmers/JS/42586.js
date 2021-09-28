function solution(progresses, speeds) {
  var answer = []

  const queue = []

  for (let i = 0; i < progresses.length; i++) {
    queue.push(Math.ceil((100 - progresses[i]) / speeds[i]))
  }

  let cnt = 0

  let st = []

  while (queue.length !== 0) {
    let queueNum = queue[0]

    st.push(queueNum)
    queue.shift()

    if (queue[0] <= st[0]) {
      st.push(queueNum)
      cnt++
    } else {
      cnt++
      answer.push(cnt)
      st = []
      cnt = 0
    }
  }

  return answer
}

solution([95, 90, 99, 99, 80, 99], [1, 1, 1, 1, 1, 1])
// solution([93, 30, 55], [1, 30, 5])

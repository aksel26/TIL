function solution(bridge_length, weight, truck_weights) {
  var answer = 0
  let queue = []

  for (let i = 0; i < bridge_length; i++) {
    queue.push(0)
  }

  let queueSum = []

  let now_truck = truck_weights.shift()

  queue.unshift(now_truck)
  queue.pop()

  console.log(queue)

  queueSum += now_truck

  answer++

  while (queueSum) {
    console.log("queue: ", queue)
    queueSum -= queue.pop()

    console.log("queueSum: ", queueSum)
    now_truck = truck_weights.shift()

    if (now_truck + queueSum <= weight) {
      queue.unshift(now_truck)
      queueSum += now_truck
    } else {
      queue.unshift(0)
      truck_weights.unshift(now_truck)
    }
    answer++
  }

  return answer
}

solution(2, 10, [7, 4, 5, 6])
// console.log("solution(2, 10, [7, 4, 5, 6]): ", solution(100, 100, [10]))
// solution(100, 100, [10])

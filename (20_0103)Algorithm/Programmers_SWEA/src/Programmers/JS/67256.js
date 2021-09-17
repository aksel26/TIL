function dist(input, left, right, hand) {
  const pad = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9],
    ["*", 0, "#"],
  ]

  let target = []
  let leftIndex = []
  let rightIndex = []

  for (let i = 0; i < pad.length; i++) {
    for (let j = 0; j < pad[i].length; j++) {
      if (input === pad[i][j]) {
        target.push(i)
        target.push(j)
      }
      if (left === pad[i][j]) {
        leftIndex.push(i)
        leftIndex.push(j)
      }
      if (right === pad[i][j]) {
        rightIndex.push(i)
        rightIndex.push(j)
      }
    }
  }
  const leftDist =
    Math.abs(leftIndex[0] - target[0]) + Math.abs(leftIndex[1] - target[1])

  const rightDist =
    Math.abs(rightIndex[0] - target[0]) + Math.abs(rightIndex[1] - target[1])

  if (rightDist > leftDist) {
    return "L"
  } else if (rightDist < leftDist) {
    return "R"
  } else if (rightDist === leftDist) {
    if (hand === "right") return "R"
    else return "L"
  }
}
function solution(numbers, hand) {
  let res = ""
  let left = "*"
  let right = "#"
  for (let i = 0; i < numbers.length; i++) {
    if (
      numbers[i] === 1 ||
      numbers[i] === 4 ||
      numbers[i] === 7 ||
      numbers[i] === "*"
    ) {
      res += "L"
      left = numbers[i]
    } else if (
      numbers[i] === 3 ||
      numbers[i] === 6 ||
      numbers[i] === 9 ||
      numbers[i] === "#"
    ) {
      res += "R"
      right = numbers[i]
    } else if (
      numbers[i] === 2 ||
      numbers[i] === 5 ||
      numbers[i] === 8 ||
      numbers[i] === 0
    ) {
      const temp = dist(numbers[i], left, right, hand)
      if (temp === "L") {
        left = numbers[i]
        res += temp
      } else {
        right = numbers[i]
        res += temp
      }
    }
  }

  var answer = res
  return answer
}

solution([1, 2, 3, 4, 5, 6, 7, 8, 9, 0], "right")

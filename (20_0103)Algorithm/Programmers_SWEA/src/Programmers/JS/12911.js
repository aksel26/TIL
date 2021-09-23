function converToBin(n) {
  return n
    .toString(2)
    .split("")
    .filter((v) => v !== "0").length
}

function solution(n) {
  var answer = 0
  let input = converToBin(n)
  let res = 0
  let inputNum = n + 1
  while (1) {
    res = converToBin(inputNum)

    if (res === input) {
      break
    }
    inputNum++
  }

  return inputNum
}

solution(15)

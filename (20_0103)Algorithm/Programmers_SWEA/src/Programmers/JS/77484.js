function result(input) {
  switch (input) {
    case 6:
      return 1
    case 5:
      return 2
    case 4:
      return 3
    case 3:
      return 4
    case 2:
      return 5

    default:
      return 6
  }
}

function solution(lottos, win_nums) {
  let answer = []

  win_nums.sort((a, b) => a - b)
  lottos.sort((a, b) => a - b)

  let cntSame = 0
  let cnt0 = 0

  lottos.map((v) => {
    win_nums.map((item) => {
      if (v === item) {
        cntSame++
      }
    })
    if (v === 0) cnt0++
  })

  //   최고점수 = cntSame + cnt0
  //   최저점수 = cntSame
  const input = cntSame + cnt0

  const best = result(input)

  const worst = result(cntSame)

  answer.push(best)
  answer.push(worst)

  return answer
}

// solution([45, 4, 35, 20, 3, 9], [20, 9, 3, 45, 4, 35])
console.log(
  "solution([45, 4, 35, 20, 3, 9], [20, 9, 3, 45, 4, 35]): ",
  solution([45, 4, 35, 20, 3, 9], [20, 9, 3, 45, 4, 35])
)

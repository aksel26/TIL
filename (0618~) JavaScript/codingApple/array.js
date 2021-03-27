// var 출석부 = ["흥민", "영희", "철수", "재석"]
// function 이름찾기(name) {
//   출석부.forEach(function (i) {
//     if (name == i) console.log(name)
//     else console.log("")
//   })
// }

// 이름찾기("명수")
// for (var i = 2; i < 9; i++) {
//   for (var j = 1; j < 9; j++) {
//     console.log(i * j)
//   }
//   console.log(" ")
// }

function 목표량계산기(판매실적, 월별판매량) {
  let sum = 0
  let result = 0
  판매실적.forEach(function (i) {
    sum += i
  })

  result = 월별판매량 * 6 - sum
  console.log(`12월엔 ${result}개를 팔아야 합니다.`)
}

// 목표량계산기([10, 20, 30, 40, 50], 35)
목표량계산기([11, 6, 2, 3, 5], 10)

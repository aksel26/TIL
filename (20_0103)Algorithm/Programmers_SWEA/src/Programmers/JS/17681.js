function toMap(n, input) {
  var arr1Bin = []

  let temp = []
  let tt = []

  for (let i = 0; i < input.length; i++) {
    arr1Bin.push(input[i].toString(2))
  }

  for (let i = 0; i < n; i++) {
    tt = arr1Bin[i].split("")
    if (tt.length !== n) {
      tt = tt.join("").padStart(n, "0").split("")
    }
    temp.push(tt)
  }

  for (let i = 0; i < temp.length; i++) {
    for (let j = 0; j < temp[i].length; j++) {
      if (temp[i][j] === "1") temp[i][j] = "#"
    }
  }

  return temp
}

function solution(n, arr1, arr2) {
  var answer = []

  var res1 = toMap(n, arr1)
  var res2 = toMap(n, arr2)

  let temp = []

  for (let i = 0; i < res1.length; i++) {
    for (let j = 0; j < res1.length; j++) {
      if (res1[i][j] === res2[i][j]) {
        temp.push(res1[i][j])
      } else temp.push("#")
    }
    answer.push(temp)
    temp = []
  }
  var answer2 = []
  for (let i = 0; i < answer.length; i++) {
    var ttt = answer[i].map((v) => {
      if (v === "0") return " "
      else return v
    })
    answer2.push(ttt.join(""))
  }
  return answer
}

solution(6, [46, 33, 33, 22, 31, 50], [27, 56, 19, 14, 14, 10])

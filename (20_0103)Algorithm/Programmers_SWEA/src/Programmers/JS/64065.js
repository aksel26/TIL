function solution(s) {
  var answer = []
  let t = []
  t = [...s.split("}").filter((v) => v !== "")]

  let gg = t.map((v) => {
    if (v.includes("{")) {
      return v.replace("{", "").substring(1)
    }
  })

  let min = -100
  let lengthEl = []
  gg.map((v) => {
    return lengthEl.push(v.length)
  })

  while (gg.length !== 0) {
    let target = lengthEl.indexOf(Math.min(...lengthEl))

    if (answer.length !== 0) {
    }
    answer.push(gg[target])

    gg.splice(target, 1)
    lengthEl.splice(target, 1)
  }

  let res = answer.map((v) => {
    return v.split(",")
  })
  let ans = []

  for (let i = 0; i < res.length; i++) {
    for (let j = 0; j < res[i].length; j++) {
      if (i === 0 && j === 0) {
        ans.push(res[i][i])
        continue
      }
      let put = res[i][j]
      if (ans.includes(put) || put === ans[ans.length - 1]) {
        continue
      } else {
        ans.push(put)
      }
    }
  }
  return ans.map((v) => Number(v))
}

// solution(s)

// solution("{{2},{2,1},{2,1,3},{2,1,3,4}}")
// solution("{{1,2,3},{2,1},{1,2,4,3},{2}}")
solution("{{20,111},{111}}")
// solution("{{123}}")
// solution("{{4,2,3},{3},{2,3,4,1},{2,3}}")

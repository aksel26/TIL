function solution(s) {
  let answer = true
  if (s[0] === ")") {
    return false
  }

  let st = []
  let splt = s.split("")

  splt.map((v) => {
    if (v === "(") st.push("(")
    else {
      if (st[st.length - 1] === "(") st.pop()
    }
  })

  st.length !== 0 ? (answer = false) : answer
  return answer
}

solution("(()(")

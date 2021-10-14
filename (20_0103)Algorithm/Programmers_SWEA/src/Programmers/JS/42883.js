function solution(number, k) {
  const nums = number.split("")
  let answer = ""

  let st = []

  for (let i = 0; i < number.length; i++) {
    const element = number[i]

    while (k > 0 && st[st.length - 1] < element) {
      st.pop()
      k--
    }

    st.push(element)
  }
  st.splice(st.length - k, k)
  answer = st.join("").toString()
  return answer
}

// solution("1231234", 3)
solution("4177252841", 4)

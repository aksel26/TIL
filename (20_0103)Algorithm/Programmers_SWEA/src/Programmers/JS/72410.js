function step1(input) {
  const tt = input.toLowerCase()
  return tt
}

function step2(input) {
  let tt = input.split("")
  const ttt = tt.map((v) => {
    if (
      v === "-" ||
      v === "_" ||
      v === "." ||
      (v.charCodeAt(0) >= 97 && v.charCodeAt(0) <= 122) ||
      (v.charCodeAt(0) >= 48 && v.charCodeAt(0) <= 57)
    ) {
      return v
    } else {
      return ""
    }
  })
  return ttt.join("")
}

function step3(input) {
  let tt = input.replace("...", ".")
  tt = tt.replace("..", ".")
  return tt
}

function step4(input) {
  if (input.indexOf(".") === 0) {
    input = input.slice(1, input.length)
  }
  if (input.lastIndexOf(".") + 1 === input.length) {
    input = input.slice(0, input.length - 1)
  }
  return input
}

function step5(input) {
  let res = input
  if (input.length === 0) {
    res += "a"
  }
  return res
}

function step6(input) {
  let st = input
  if (input.length >= 16) {
    st = input.substring(0, 15)
  }
  if (st.lastIndexOf(".") === st.length - 1) {
    st = step4(st)
  }
  return st
}

function step7(input) {
  let lengthInput = input.length
  let res = input
  if (lengthInput <= 2) {
    const tt = res.charAt(res.length - 1)
    while (res.length !== 3) {
      res += tt
    }
  }
  return res
}
function solution(new_id) {
  var answer = ""
  answer = step1(new_id)
  answer = step2(answer)
  answer = step3(answer)
  answer = step4(answer)
  answer = step5(answer)
  answer = step6(answer)
  answer = step7(answer)

  return answer
}

solution("...!@BaT#*..y.abcdefghijklm")

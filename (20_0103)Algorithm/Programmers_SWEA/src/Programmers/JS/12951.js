function solution(s) {
  var answer = ""

  let vv = s.toLowerCase().split(" ")
  let bb = vv.map((v) => {
    return v.replace(v.charAt(0), v.charAt(0).toUpperCase())
  })

  answer = bb.join(" ")
  return answer
}

solution("3people unFollowed me")

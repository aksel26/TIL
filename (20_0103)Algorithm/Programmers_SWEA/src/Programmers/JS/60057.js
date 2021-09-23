function filter(origin, idx) {
  let bb = []
  let str = 0

  while (1) {
    let vvv = origin.substr(str, idx)

    bb.push(vvv)

    str = idx + str
    if (str >= origin.length) break
  }

  let cnt = 1

  for (let i = 0; i < bb.length; i++) {
    let comp = bb[i]
    for (let j = i + 1; j < bb.length; j++) {
      if (bb[j] === comp) {
        cnt++
        bb[i] = cnt
        if (bb[j + 1] === comp) bb[j] = ""
      } else {
        // bb[j] = cnt
        break
      }
    }
    cnt = 1
  }
  return bb.join("").length
  //   for (let i = 0; i < origin.length / 2; i++) {
  //     if (nn === origin[i]) {
  //       cnt++
  //     } else {
  //       cnt = 0
  //     }

  //     if (cnt >= 2) {
  //       origin.splice(origin[i], 0, cnt)
  //     }
  //   }
}

function solution(s) {
  var answer = 0
  let half = Math.floor(s.length / 2)

  let min = 100100
  for (let i = 1; i <= half; i++) {
    let res = filter(s, i)
    if (res < min) {
      min = res
    }
  }

  answer = min
  return answer
}

// solution("aabbaccc")
// solution("ababcdcdababcdcd")
// solution("abcabcdede")
// solution("abcabcabcabcdededededede")
solution("xababcdcdababcdcd")
console.log('solution("xababcdcdababcdcd"): ', solution("xababcdcdababcdcd"))

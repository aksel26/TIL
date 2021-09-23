function solution(s) {
  var answer = 0
  let half = Math.floor(s.length / 2)

  let arr = []

  let min = 100100
  for (let i = 1; i <= half; i++) {
    let str = s.substr(0, i)
    let cnt = 1

    for (let j = i; j <= s.length - i; j = j + i) {
      if (s.substr(j - i, i) === s.substr(j, i)) {
        cnt++
        if (s.length - j - i < i) {
          str += cnt
        }
      } else {
        if (cnt !== 1) {
          str += cnt
          str += s.substr(j, i)
        } else {
          str += s.substr(j, i)
        }
        cnt = 1
      }
    }
    str += s.substr(s.length - 1 - (s.length % i), s.length % i)
    arr.push(str)
  }

  for (let i = 0; i < arr.length; i++) {
    if (arr[i].length < min) {
      min = arr[i].length
    }
  }

  if (s.length === 1) min = 1

  answer = min
  // console.log("answer: ", answer)
  return answer
}

solution("aabbaccc")
console.log('solution("aabbaccc"): ', solution("aabbaccc"))
// solution("ababcdcdababcdcd")
// solution("abcabcdede")
// solution("abcabcabcabcdededededede")
// solution("xababcdcdababcdcd")
// console.log('solution("xababcdcdababcdcd"): ', solution("xababcdcdababcdcd"))

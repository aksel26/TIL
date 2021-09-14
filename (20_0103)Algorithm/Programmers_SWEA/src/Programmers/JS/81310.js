function solution(s) {
  var answer = 0
  const words = [
    "zero",
    "one",
    "two",
    "three",
    "four",
    "five",
    "six",
    "seven",
    "eight",
    "nine",
  ]

  s.indexOf(words[1])
  for (let i = 0; i < words.length; i++) {
    for (let j = 0; j < words.length; j++) {
      if (s.indexOf(words[j]) != -1) {
        let res = words[j]
        s = s.replace(res, j)
        //   s.replace(res, i)
      }
    }
  }
  answer = Number(s)

  // 다른사람꺼
  //   var answer = s

  //   for (let i = 0; i < words.length; i++) {
  //     let arr = answer.split(words[i])
  //     console.log("arr: ", arr)
  //     answer = arr.join(i)
  //   }

  return answer
}

solution("one4seveneight")

function solution(input) {
  const filteredNum = input.split(/[0-9]/)
  const filteredChar = input.split(/[A-Z*#]/)

  const numbers = filteredNum.filter((v) => v !== "")
  const chars = filteredChar.filter((v) => v !== "")

  let res = []
  let num = 0

  for (let i = 0; i < chars.length; i++) {
    const number = numbers[i]
    if (chars[i].includes("S")) {
      num = Math.pow(number, 1)
    } else if (chars[i].includes("D")) {
      num = Math.pow(number, 2)
    } else if (chars[i].includes("T")) {
      num = Math.pow(number, 3)
    }
    if (chars[i].includes("#")) {
      num *= -1
    } else if (chars[i].includes("*")) {
      if (i === 0) {
        num *= 2
      } else {
        num *= 2
        res[i - 1] = res[i - 1] * 2
      }
    }
    res.push(num)
  }

  return res.reduce((acc, cur) => (acc += cur))
}

// solution("1D2S#10S")
// solution("1D2S0T")
// solution("1S*2T*3S")
// solution("1D#2S*3S")
// solution("1T2D3D#")
// solution("1D2S3T*")

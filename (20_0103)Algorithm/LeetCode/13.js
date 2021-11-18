/**
 * @param {string} s
 * @return {number}
 */
var romanToInt = function (s) {
  let res = 0

  for (let i = 0; i < s.length; i++) {
    if (s[i] === "I") {
      if (s[i + 1] === "V") {
        res += 4
        i = i + 1
      } else if (s[i + 1] === "X") {
        res += 9
        i = i + 1
      } else {
        res += 1
      }
    } else if (s[i] === "V") {
      res += 5
    } else if (s[i] === "X") {
      if (s[i + 1] === "L") {
        res += 40
        i = i + 1
      } else if (s[i + 1] === "C") {
        console.log(i)
        res += 90
        i = i + 1
      } else {
        res += 10
      }
    } else if (s[i] === "L") {
      res += 50
    } else if (s[i] === "C") {
      if (s[i + 1] === "D") {
        res += 400
        i = i + 1
      } else if (s[i + 1] === "M") {
        console.log(i)
        res += 900
        i = i + 1
      } else {
        res += 100
      }
    } else if (s[i] === "D") {
      res += 500
    } else if (s[i] === "M") {
      res += 1000
    }
  }
  console.log(res)
  return res
}

romanToInt("III")

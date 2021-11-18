/**
 * @param {string[]} strs
 * @return {string}
 */
var longestCommonPrefix = function (strs) {
  let cnt = 0
  let tt = []

  let len = 10000

  for (let i = 0; i < strs.length; i++) {
    tt.push([...strs[i]])
    if (len > tt[i].length) {
      len = tt[i].length
    }
  }

  let ans = []

  for (let i = 0; i < len; i++) {
    cnt = 0
    for (let j = 0; j < tt.length; j++) {
      let word = tt[0][i]
      if (word === tt[j][i]) {
        cnt++
        if (cnt === tt.length) {
          ans.push(tt[j][i])
        }
      } else {
        i = len
        break
      }
    }
  }

  return ans.join("")
}
// longestCommonPrefix(["flower", "flow", "flight"])

// longestCommonPrefix(["dog", "racecar", "car"])

longestCommonPrefix(["cir", "car"])
console.log(
  'longestCommonPrefix(["cir","car"]): ',
  longestCommonPrefix(["cir", "car"])
)

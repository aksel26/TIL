/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLastWord = function (s) {
  //   let tt = s.split(" ").filter((v) => v !== "")

  //   return tt[tt.length - 1].length

  return s.trim().split(" ").pop().length
}

// lengthOfLastWord("   fly me   to   the moon  ")
console.log(
  'lengthOfLastWord("   fly me   to   the moon  "): ',
  lengthOfLastWord("   fly me   to   the moon  ")
)

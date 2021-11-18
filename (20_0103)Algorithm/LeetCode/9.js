/**
 * @param {number} x
 * @return {boolean}
 */
var isPalindrome = function (x) {
  let input = x
  let tt = x.toString()
  let res = [...tt].reverse().join("")
  let ans = Number(res)

  if (input === ans) return true
  else return false
}

isPalindrome(121)
console.log("isPalindrome(122): ", isPalindrome(121))

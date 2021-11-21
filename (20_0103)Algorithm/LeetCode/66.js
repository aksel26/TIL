/**
 * @param {number[]} digits
 * @return {number[]}
 */
var plusOne = function (digits) {
  let num = digits.join("")
  console.log("num: ", num)

  let res = BigInt(num) + 1n
  console.log("res: ", res + 1n)
  let result = res.toString().split("")
  console.log("result: ", result)
}

plusOne([6, 1, 4, 5, 3, 9, 0, 1, 9, 5, 1, 8, 6, 7, 0, 5, 5, 4, 3])

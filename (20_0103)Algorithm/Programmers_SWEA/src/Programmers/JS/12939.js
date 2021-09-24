function solution(s) {
  var answer = ""

  let nums = s.split(" ")
  console.log("nums: ", nums)

  let max = Math.max(...nums).toString()
  let min = Math.min(...nums).toString()

  answer = min + " " + max
  console.log("answer: ", answer)

  return answer
}

solution("-1 -2 -3 -4")

// 	"1 4"
// "-1 -2 -3 -4"	"-4 -1"
// "-1 -1"

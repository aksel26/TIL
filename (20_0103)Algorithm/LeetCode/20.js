/**
 * @param {string} s
 * @return {boolean}
 */
var isValid = function (s) {
  let st = []

  let tt = [...s]
  let answer = true
  let size = tt.length

  while (size--) {
    let out = tt.shift()

    if (out === "(" || out === "{" || out === "[") {
      st.push(out)
    } else {
      if (st[st.length - 1] === "(") {
        if (out === ")") {
          st.pop()
        } else {
          answer = false
          break
        }
      } else if (st[st.length - 1] === "{") {
        if (out === "}") {
          st.pop()
        } else {
          answer = false
          break
        }
      } else if (st[st.length - 1] === "[") {
        if (out === "]") {
          st.pop()
        } else {
          answer = false
          break
        }
      } else {
        answer = false
      }
    }
  }

  if (st.length === 0) return answer
  else return (answer = false)
}

// isValid("()")
console.log('isValid("()"): ', isValid("["))
// console.log('isValid("()"): ', isValid("]"))
// console.log('isValid("()"): ', isValid("(]"))
// console.log('isValid("()"): ', isValid("()[]{}"))
// console.log('isValid("()"): ', isValid("([)]"))
// console.log('isValid("()"): ', isValid("{[]}"))

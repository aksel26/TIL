function solution(new_id) {
  let answer = new_id
    .toLowerCase()
    .replace(/[^\.a-z0-9-_]/g, "")
    .replace(/\.+/g, ".")
    .replace(/^\.|\.+$/, "")

  if (answer === "") answer = "a"

  answer = answer.slice(0, 15).replace(/\.+$/, "")

  return answer.length > 2
    ? answer
    : answer.padEnd(3, answer[answer.length - 1])
}

console.log(solution("...!@BaT#*..y.abcdefghijklm"))

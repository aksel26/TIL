function calcScore(lan, index, languages, preference) {
  languages.indexOf(lan)
  const indexLan = languages.indexOf(lan)
  let sum = 0

  if (indexLan !== -1) {
    const prefScore = preference[indexLan]
    sum = prefScore * index
    return sum
  } else {
    return sum
  }
}

function work(new_table, maxIndex) {
  let anaswer = []

  maxIndex.map((v) => {
    if (v !== -1) {
      anaswer.push(new_table[v][0])
    }
  })

  anaswer.sort()
  return anaswer[0]
}
function solution(table, languages, preference) {
  let answer = ""
  let newTable = []
  let scores = []
  let result = []
  table.map((v) => {
    newTable.push(v.split(" "))
  })

  for (let i = 0; i < newTable.length; i++) {
    for (let j = 1; j <= newTable[i].length - 1; j++) {
      scores.push(
        calcScore(newTable[i][j], newTable[i].length - j, languages, preference)
      )
    }
    let res = scores.reduce((acc, cur) => acc + cur)
    result.push(res)
    scores = []
  }

  const max = Math.max(...result)

  result.indexOf(max)
  let maxIndex = result.map((v, index) => (v === max ? index : -1))
  answer = work(newTable, maxIndex)

  return answer
}

solution(
  [
    "SI JAVA JAVASCRIPT SQL PYTHON C#",
    "CONTENTS JAVASCRIPT JAVA PYTHON SQL C++",
    "HARDWARE C C++ PYTHON JAVA JAVASCRIPT",
    "PORTAL JAVA JAVASCRIPT PYTHON KOTLIN PHP",
    "GAME C++ C# JAVASCRIPT C JAVA",
  ],
  ["PYTHON", "C++", "SQL"],
  [7, 5, 5]
)

// solution(
//   [
//     "SI JAVA JAVASCRIPT SQL PYTHON C#",
//     "CONTENTS JAVASCRIPT JAVA PYTHON SQL C++",
//     "HARDWARE C C++ PYTHON JAVA JAVASCRIPT",
//     "PORTAL JAVA JAVASCRIPT PYTHON KOTLIN PHP",
//     "GAME C++ C# JAVASCRIPT C JAVA",
//   ],
//   ["JAVA", "JAVASCRIPT"],
//   [7, 5]
// )

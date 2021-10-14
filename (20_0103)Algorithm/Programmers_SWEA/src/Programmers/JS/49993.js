function solution(skill, skill_trees) {
  var answer = skill_trees.length
  let st = []
  let arr = []

  for (let i = 0; i < skill_trees.length; i++) {
    let element = skill_trees[i].split("")
    st = []

    for (let j = 0; j < element.length; j++) {
      if (skill.includes(element[j])) {
        st.push(element[j])
      }
    }
    arr.push(st)
  }

  for (let i = 0; i < arr.length; i++) {
    for (let j = 0; j < arr[i].length; j++) {
      if (arr[i][j] !== skill.charAt(j)) {
        answer--
        break
      }
    }
  }
  return answer
}

solution("CBD", ["BACDE", "CBADF", "AECB", "BDA"])

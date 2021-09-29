function solution(priorities, location) {
  var list = priorities.map((t, i) => ({
    my: i === location,
    val: t,
  }))

  console.log(list)
  var count = 0
  while (true) {
    var cur = list.shift()
    console.log("cur: ", cur)

    if (list.some((t) => t.val > cur.val)) {
      list.push(cur)
    } else {
      count++
      console.log(count)
      if (cur.my) return count
    }
  }
}

// solution([1, 1, 9, 1, 1, 1], 0)
console.log(
  "solution([1, 1, 9, 1, 1, 1], 0): ",
  solution([1, 1, 9, 1, 1, 1], 0)
)

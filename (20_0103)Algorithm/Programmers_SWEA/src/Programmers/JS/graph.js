const depthFristPrint = (graph, source) => {
  const stack = [source]

  while (stack.length > 0) {
    const current = stack.pop()

    console.log(current)

    for (let neighbor of graph[current]) {
      stack.push(neighbor)
    }
  }
}

// 재귀함수 방법
const depthFristPrint = (graph, source) => {
  console.log(source)
  for (let neighbor of graph[source]) {
    depthFristPrint(graph, neighbor)
  }
}
// DFS
// depthFristPrint(graph, "a")

breadthFirstPrint = (graph, source) => {
  const queue = [source]

  while (queue.length > 0) {
    const current = queue.shift()

    console.log(current)

    for (let neightbor of graph[current]) {
      queue.push(neightbor)
    }
  }
}

const graph = {
  a: ["c", "b"],
  b: ["d"],
  c: ["e"],
  d: ["f"],
  e: [],
  f: [],
}

// BFS
breadthFirstPrint(graph, "a")

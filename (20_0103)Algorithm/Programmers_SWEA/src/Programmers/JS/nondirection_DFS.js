const edges = [
  ["i", "j"],
  ["k", "i"],
  ["m", "k"],
  ["k", "l"],
  ["o", "n"],
]

const undirectedPath = (edges, nodeA, nodeB) => {
  const graph = buildGraph(edges)

  return hasPath(graph, nodeA, nodeB, new Set())
}

const hasPath = (graph, src, dst, visited) => {
  if (visited.has(src)) return false
  if (src === dst) return true

  visited.add(src)
  console.log(visited)

  for (let neighbor of graph[src]) {
    if (hasPath(graph, neighbor, dst, visited) === true) {
      return true
    }
  }

  return false
}

// 인접행렬로 변환
const buildGraph = (edges) => {
  const graph = {}

  for (let edge of edges) {
    const [a, b] = edge
    if (!(a in graph)) graph[a] = []
    if (!(b in graph)) graph[b] = []

    graph[a].push(b)
    graph[b].push(a)
  }

  return graph
}

undirectedPath(edges, "j", "m")

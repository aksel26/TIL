function popFunc(bucket) {
  let cnt = 0

  return bucket, cnt
}

function solution(board, moves) {
  var answer = 0
  let cnt = 0

  let bucket = []
  for (let i = 0; i < moves.length; i++) {
    let row = moves[i]

    for (let j = 0; j < board.length; j++) {
      let pick = board[j][row - 1]
      if (pick !== 0) {
        bucket.push(pick)
        board[j][row - 1] = 0

        if (bucket[bucket.length - 1] === bucket[bucket.length - 2]) {
          bucket.pop()
          cnt++
          bucket.pop()
          cnt++
        }
        break
      }
    }
  }

  return cnt
}

solution(
  [
    [0, 0, 0, 0, 0],
    [0, 0, 1, 0, 3],
    [0, 2, 5, 0, 1],
    [4, 2, 4, 4, 2],
    [3, 5, 1, 3, 1],
  ],
  [1, 5, 3, 5, 1, 2, 1, 4]
)

// 4 3 1 3 4

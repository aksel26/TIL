function check(board, row, col, sizeY, sizeX) {
  let sum = 0

  for (let i = row; i <= sizeX; i++) {
    for (let j = col; j <= sizeY; j++) {
      if (board[i][j] === undefined || board[i][j] === 0) return
      else sum += board[i][j]
    }
  }
  return sum
}

function solution(board) {
  var answer = 1234

  //   const x = [0, 1, 0, -1]
  //   const y = [1, 0, -1, 0]

  let mm = []

  for (let k = 1; k < board.length; k++) {
    for (let i = 0; i < board.length - 1; i++) {
      // check(board, i, size)
      for (let j = 0; j < board[i].length - 1; j++) {
        if (check(board, i, j, j + k, i + k) !== undefined)
          mm.push(check(board, i, j, j + k, i + k))
      }
    }
  }

  // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
  answer = Math.max(...mm)

  return answer
}

solution([
  [0, 1, 1, 1],
  [1, 1, 1, 1],
  [1, 1, 1, 1],
  [0, 0, 1, 0],
])

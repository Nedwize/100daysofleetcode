// 36. Valid Sudoku

function isValidSudoku(board: string[][]): boolean {
  const map: Map<string, true> = new Map();

  for (let i = 0; i < 9; i++) {
    for (let j = 0; j < 9; j++) {
      if (board[i][j] !== '.') {
        if (
          map.has(`${board[i][j]} present in row ${i}`) ||
          map.has(`${board[i][j]} present in column ${j}`) ||
          map.has(
            `${board[i][j]} present in box ${Math.floor(i / 3)}-${Math.floor(
              j / 3
            )}`
          )
        ) {
          return false;
        } else {
          map.set(`${board[i][j]} present in row ${i}`, true);
          map.set(`${board[i][j]} present in column ${j}`, true);
          map.set(
            `${board[i][j]} present in box ${Math.floor(i / 3)}-${Math.floor(
              j / 3
            )}`,
            true
          );
        }
      }
    }
  }
  return true;
}

console.log(
  isValidSudoku([
    ['.', '.', '.', '.', '5', '.', '.', '1', '.'],
    ['.', '4', '.', '3', '.', '.', '.', '.', '.'],
    ['.', '.', '.', '.', '.', '3', '.', '.', '1'],
    ['8', '.', '.', '.', '.', '.', '.', '2', '.'],
    ['.', '.', '2', '.', '7', '.', '.', '.', '.'],
    ['.', '1', '5', '.', '.', '.', '.', '.', '.'],
    ['.', '.', '.', '.', '.', '2', '.', '.', '.'],
    ['.', '2', '.', '9', '.', '.', '.', '.', '.'],
    ['.', '.', '4', '.', '.', '.', '.', '.', '.'],
  ])
);

//72. Set Matrix Zeroes - Daily Challenge
// Revisit

/**
 Do not return anything, modify matrix in-place instead.
 */

function setZeroes(matrix: number[][]): void {
  let row: number[] = new Array(matrix.length);
  let column: number[] = new Array(matrix[0].length);

  for (let i = 0; i < matrix.length; i++) {
    for (let j = 0; j < matrix[i].length; j++) {
      if (matrix[i][j] === 0) {
        row[i] = 0;
        column[j] = 0;
      }
    }
  }

  for (let i = 0; i < matrix.length; i++) {
    for (let j = 0; j < matrix[i].length; j++) {
      if (row[i] === 0 || column[j] === 0) {
        matrix[i][j] = 0;
      }
    }
  }
}

console.log(
  setZeroes([
    [1, 1, 1],
    [1, 0, 1],
    [1, 1, 1],
  ])
);

console.log(
  setZeroes([
    [0, 1, 2, 0],
    [3, 4, 5, 2],
    [1, 3, 1, 5],
  ])
);

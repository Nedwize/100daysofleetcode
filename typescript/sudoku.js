let puzzle = [
  ['5', '3', '.', '.', '7', '.', '.', '.', '.'],
  ['6', '.', '.', '1', '9', '5', '.', '.', '.'],
  ['.', '9', '8', '.', '.', '.', '.', '6', '.'],
  ['8', '.', '.', '.', '6', '.', '.', '.', '3'],
  ['4', '.', '.', '8', '.', '3', '.', '.', '1'],
  ['7', '.', '.', '.', '2', '.', '.', '.', '6'],
  ['.', '6', '.', '.', '.', '.', '2', '8', '.'],
  ['.', '.', '.', '4', '1', '9', '.', '.', '5'],
  ['.', '.', '.', '.', '8', '.', '.', '7', '9'],
];

console.log(puzzle);

function findEmpty(puzzle) {
  for (let i = 0; i < puzzle.length; i++) {
    for (let j = 0; j < puzzle[i].length; j++) {
      if (puzzle[i][j] === 0 || puzzle[i][j] === '.') {
        return {
          row: i,
          col: j,
        };
      }
    }
  }
  return 1;
}

function findValid(puzzle, number, position) {
  // Check Rows
  for (let i = 0; i < puzzle[0].length; i++) {
    if (Number(puzzle[position.row][i]) === number && position.col != i) {
      return false;
    }
  }

  // Check Columns
  for (let i = 0; i < puzzle.length; i++) {
    if (Number(puzzle[i][position.col]) === number && position.row != i) {
      return false;
    }
  }

  // Check Square Grid
  let boxX = Math.floor(position.row / 3);
  let boxY = Math.floor(position.col / 3);

  for (let i = boxX * 3; i < boxX * 3 + 3; i++) {
    for (let j = boxY * 3; j < boxY * 3 + 3; j++) {
      if (Number(puzzle[i][j]) === number && !samePosition(i, j, position)) {
        return false;
      }
    }
  }
  return true;
}

function samePosition(i, j, position) {
  if (i === position.row && j === position.col) {
    return true;
  } else {
    return false;
  }
}

function solve(puzzle) {
  if (findEmpty(puzzle) !== 1) {
    var position = findEmpty(puzzle);
  } else {
    console.log(puzzle);
    return true;
  }

  for (let i = 1; i <= 9; i++) {
    if (findValid(puzzle, i, position)) {
      puzzle[position.row][position.col] = i.toString();

      if (solve(puzzle)) {
        return true;
      }

      puzzle[position.row][position.col] = 0;
    }
  }

  return false;
}
solve(puzzle);

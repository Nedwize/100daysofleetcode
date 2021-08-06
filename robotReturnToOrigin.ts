// 657. Robot Return to Origin

function judgeCircle(moves: string): boolean {
  let x = 0;
  let y = 0;

  for (let i = 0; i < moves.length; i++) {
    switch (moves[i]) {
      case 'U':
        y++;
        break;
      case 'D':
        y--;
        break;
      case 'L':
        x--;
        break;
      case 'R':
        x++;
        break;
    }
  }

  return x === 0 && y === 0;
}

console.log(judgeCircle('LDRRLRUULR'));
console.log(judgeCircle('UD'));

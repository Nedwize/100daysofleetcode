// 1784. Check if Binary String Has at Most One Segment of Ones

function checkOnesSegment(s: string): boolean {
  let count = 0;

  for (let i = 0; i < s.length; i++) {
    if (s[i] === '1' && s[i + 1] === '1') {
      if (count === 1) {
        return false;
      } else {
        count++;
      }
    }
  }

  return count === 1;
}

console.log(checkOnesSegment('10001'));

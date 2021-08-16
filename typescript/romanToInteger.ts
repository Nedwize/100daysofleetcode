// 13. Roman to Integer

function romanToInt(s: string): number {
  const getValue = (r: string) => {
    if (r == 'I') return 1;
    if (r == 'V') return 5;
    if (r == 'X') return 10;
    if (r == 'L') return 50;
    if (r == 'C') return 100;
    if (r == 'D') return 500;
    if (r == 'M') return 1000;
    return -1;
  };

  let total = 0;

  for (let i = 0; i < s.length; i++) {
    let s1 = getValue(s.charAt(i));

    if (!(i + 1 < s.length)) {
      total += s1;
    } else {
      let s2 = getValue(s.charAt(i + 1));
      // if value of current is greater or equal to current
      // then pass on
      if (s1 >= s2) {
        total += s1;
      } else {
        // id value of next is greater
        // then subtract current from the next
        total = total + s2 - s1;
        i++;
      }
    }
  }
  return total;
}

console.log(romanToInt('MCMXCIV'));

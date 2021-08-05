// 1844. Replace All Digits with Characters

function replaceDigits(s: string): string {
  const shift = (c: string, x: number): string => {
    return String.fromCharCode(c.charCodeAt(0) + x);
  };

  let len = s.length;
  let result = '';
  for (let i = 0; i < len; i++) {
    if (i % 2 === 0) {
      result += s[i];
    } else {
      result += shift(s[i - 1], Number(s[i]));
    }
  }

  return result;
}

console.log(replaceDigits('a1c1e1'));
console.log(replaceDigits('a1b2c3d4e'));

function lengthOfLastWord(s: string): number {
  let len: number = s.length;
  let i: number = len - 1;
  let lastWord: string = '';

  s = s.trim();

  if (s === '') {
    return 0;
  }

  while (i >= 0) {
    if (s.charAt(i) === ' ') {
      lastWord = s.substring(i);
      return lastWord.trim().length;
    }
    i--;
  }

  return s.length;
}

console.log(lengthOfLastWord('Nakshatra'));
console.log(lengthOfLastWord('Nakshatra Saxena'));
console.log(lengthOfLastWord('Hello World'));
console.log(lengthOfLastWord('a '));
console.log(lengthOfLastWord('   '));
console.log(lengthOfLastWord(' '));

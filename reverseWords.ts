// 151. Reverse Words in a String

function reverseWords(str: string) {
  return str
    .split(' ')
    .filter((item) => item !== '')
    .reverse()
    .join(' ');
}

// reverseWords('the  sky is blue');
console.log(reverseWords('the   sky is blue'));
console.log(reverseWords('  hello world  '));
console.log(reverseWords('a good   example'));
console.log(reverseWords('  Bob    Loves  Alice   '));
console.log(reverseWords('Alice does not even like bob'));

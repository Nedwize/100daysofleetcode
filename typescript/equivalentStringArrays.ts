// 1662. Check If Two String Arrays are Equivalent

function arrayStringsAreEqual(word1: string[], word2: string[]): boolean {
  return word1.join('') === word2.join('');
}

console.log(arrayStringsAreEqual(['ab', 'c'], ['a', 'bc']));
console.log(arrayStringsAreEqual(['a', 'cb'], ['ab', 'c']));
console.log(arrayStringsAreEqual(['abc', 'd', 'defg'], ['abcddefg']));

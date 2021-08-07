// 1768. Merge Strings Alternately

function mergeAlternately(word1: string, word2: string): string {
  let len = Math.max(word1.length, word2.length),
    result = '';

  for (let i = 0; i < len; i++) {
    result += word1[i] || '';
    result += word2[i] || '';
  }

  return result;
}

console.log(mergeAlternately('ab', 'pqrs'));

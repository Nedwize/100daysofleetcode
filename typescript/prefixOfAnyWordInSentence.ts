// 1455. Check If a Word Occurs As a Prefix of Any Word in a Sentence

function isPrefixOfWord(sentence: string, searchWord: string): number {
  let count = 0;
  sentence = ' ' + sentence + ' ';

  for (let i = 0; i < sentence.length; i++) {
    if (sentence[i] === ' ') {
      count++;
      let word = sentence.substring(i + 1, i + 1 + searchWord.length);
      if (word.trim() === searchWord) {
        return count;
      }
    }
  }
  return -1;
}

console.log(isPrefixOfWord('i love eating burger', 'burg'));
console.log(isPrefixOfWord('this problem is an easy problem', 'pro'));
console.log(isPrefixOfWord('i am tired', 'pro'));

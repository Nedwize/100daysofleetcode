"use strict";
// 1768. Merge Strings Alternately
function mergeAlternately(word1, word2) {
    let len = Math.max(word1.length, word2.length), result = '';
    for (let i = 0; i < len; i++) {
        result += word1[i] || '';
        result += word2[i] || '';
    }
    return result;
}
console.log(mergeAlternately('ab', 'pqrs'));

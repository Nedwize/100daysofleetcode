"use strict";
// 1880. Check if Word Equals Summation of Two Words
function isSumEqual(firstWord, secondWord, targetWord) {
    const getCode = (s) => {
        return (s.charCodeAt(0) - 97).toString();
    };
    let sum = '';
    let first = '';
    let second = '';
    const len = Math.max(firstWord.length, secondWord.length, targetWord.length);
    for (let i = 0; i < len; i++) {
        if (firstWord[i]) {
            first += getCode(firstWord[i]);
        }
        if (secondWord[i]) {
            second += getCode(secondWord[i]);
        }
        if (targetWord[i]) {
            sum += getCode(targetWord[i]);
        }
    }
    return Number(first) + Number(second) === Number(sum);
}
console.log(isSumEqual('acb', 'cba', 'cdb'));
console.log(isSumEqual('aaa', 'a', 'aab'));
console.log(isSumEqual('aaa', 'a', 'aaaa'));

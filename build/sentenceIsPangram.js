"use strict";
// 1832. Check if the Sentence Is Pangram
// Rewrite with HashMaps / HashTable
function checkIfPangram(sentence) {
    const alphabetArray = Array.from(Array(26), (_, i) => i + 96 + 1);
    let resultArray = [];
    let len = sentence.length;
    let code = 0;
    for (let i = 0; i < len; i++) {
        code = sentence.charCodeAt(i);
        if (resultArray.indexOf(code) === -1)
            resultArray.push(code);
    }
    resultArray.sort((a, b) => a - b);
    return resultArray.join('') === alphabetArray.join('');
}
console.log(checkIfPangram('thequickbrownfoxjumpsoverthelazydog'));

"use strict";
// 1859. Sorting the Sentence
function sortSentence(s) {
    let result = [];
    let mark = 0;
    s = ' ' + s + ' ';
    let len = s.length;
    for (let i = 0; i < len; i++) {
        if (s[i] === ' ') {
            result[Number(s[i - 1])] = s.substring(mark + 1, i - 1);
            mark = i;
        }
    }
    return result.join(' ').trim();
}
console.log(sortSentence('is2 sentence4 This1 a3'));
console.log('This is a sentence'.length);

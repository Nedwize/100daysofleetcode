"use strict";
// 1816. Truncate Sentence
function truncateSentence(s, k) {
    let m = 0;
    let result = '';
    s = s + ' ';
    for (let i = 0; i < s.length; i++) {
        if (s[i] === ' ') {
            m++;
            if (m === k) {
                result = s.substring(0, i);
                break;
            }
        }
    }
    return result;
}
console.log(truncateSentence('Hello how are you Contestant', 4));

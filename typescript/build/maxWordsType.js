"use strict";
// 1935. Maximum Number of Words You Can Type
// Unsolved
function canBeTypedWords(text, brokenLetters) {
    const map = new Map();
    text = text + ' ';
    let count = 0;
    let flag = false;
    for (let i = 0; i < brokenLetters.length; i++) {
        if (!map.has(brokenLetters[i]))
            map.set(brokenLetters[i], true);
    }
    for (let i = 0; i < text.length; i++) {
        if (map.has(text[i])) {
            flag = true;
        }
        if (text[i] === ' ') {
            if (!flag)
                count++;
            flag = false;
        }
    }
    return count;
}
console.log(canBeTypedWords('hello world', 'ad'));
console.log(canBeTypedWords('leet code', 'lt'));
console.log(canBeTypedWords('leet code', 'e'));

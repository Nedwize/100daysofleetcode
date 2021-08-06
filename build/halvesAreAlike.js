"use strict";
// 1704. Determine if String Halves Are Alike
function halvesAreAlike(s) {
    const isVowel = (c) => {
        if (c === 'a' || c === 'e' || c === 'i' || c === 'o' || c === 'a') {
            console.log('char', c);
            return true;
        }
        else {
            return false;
        }
    };
    let len = s.length;
    s = s.toLowerCase();
    let left = 0;
    let right = 0;
    for (let i = 0; i < len; i++) {
        console.log(i);
        if (isVowel(s[i])) {
            console.log(i, len / 2 - 1);
            if (i <= len / 2 - 1) {
                left++;
            }
            else {
                right++;
            }
        }
    }
    return left === right;
}
// console.log(halvesAreAlike('Book'));
// console.log(halvesAreAlike('textBook'));
// console.log(halvesAreAlike('MerryChristmas'));
// console.log(halvesAreAlike('AbCdEfGh'));
console.log(halvesAreAlike('Uo'));

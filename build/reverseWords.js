"use strict";
// 151. Reverse Words in a String
function reverseWords(s) {
    let len = s.length;
    let arr = [];
    s = s.trim();
    s = ' ' + s;
    let lastIndex = len + 1;
    for (let i = len; i >= 0; i--) {
        if (s[i] === ' ') {
            if (s[i + 1] === ' ') {
                i--;
            }
            console.log(s.substring(i, lastIndex));
            lastIndex = i;
        }
    }
    return '';
}
function reverseString(str) {
    return str.trim().split(' ').filter(Boolean).reverse().join(' ');
}
// reverseWords('the  sky is blue');
console.log(reverseString('the   sky is blue'));
console.log(reverseString('  hello world  '));
console.log(reverseString('a good   example'));
console.log(reverseString('  Bob    Loves  Alice   '));
console.log(reverseString('Alice does not even like bob'));

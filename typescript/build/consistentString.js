"use strict";
// 1684. Count the Number of Consistent Strings
function countConsistentStrings(allowed, words) {
    let len = words.length;
    let allowedArr = allowed.split('');
    let flag = true;
    let result = 0;
    for (let i = 0; i < len; i++) {
        let len2 = words[i].length;
        flag = true;
        for (let j = 0; j < len2; j++) {
            if (allowedArr.indexOf(words[i][j]) === -1) {
                flag = false;
                break;
            }
        }
        if (flag === true) {
            result++;
        }
    }
    return result;
}
console.log(countConsistentStrings('abc', ['a', 'b', 'c', 'ab', 'ac', 'bc', 'abc']));
console.log(countConsistentStrings('cad', [
    'cc',
    'acd',
    'b',
    'ba',
    'bac',
    'bad',
    'ac',
    'd',
]));

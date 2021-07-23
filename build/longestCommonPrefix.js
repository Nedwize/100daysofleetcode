"use strict";
function longestCommonPrefix(strs) {
    let res = '';
    for (let j = 1; j < strs.length; j++) {
        let item = strs[j];
        if (j === 1)
            res = item;
        for (let i = 0; i < res.length; i++) {
            if (item[i] === strs[0][i]) {
                console.log(item, item[i]);
                res += item[i];
            }
            else {
                break;
            }
        }
    }
    return res;
}
// console.log(longestCommonPrefix(['flower', 'flow', 'flight']));
// console.log(longestCommonPrefix(['dog', 'racecar', 'car']));
// console.log(longestCommonPrefix(['flower', 'flow', 'flight']));
console.log(longestCommonPrefix(['naksh', 'nak', 'nakshatra']));

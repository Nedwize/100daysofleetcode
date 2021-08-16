"use strict";
// 14. Longest Common Prefix
// Revisit
function longestCommonPrefix(strs) {
    let commonPrefix = strs[0];
    for (let i = 0; i < strs.length; i++) {
        let result = '';
        for (let j = 0; j < commonPrefix.length; j++) {
            if (commonPrefix[j] === strs[i][j]) {
                result += commonPrefix[j];
            }
            else {
                commonPrefix = result;
                break;
            }
        }
        if (!commonPrefix)
            return '';
    }
    return commonPrefix;
}
console.log(longestCommonPrefix(['naksh', 'nak', 'nakshatra']));
console.log(longestCommonPrefix(['flower', 'flow', 'flight']));
console.log(longestCommonPrefix(['dog', 'racecar', 'car']));

"use strict";
// function longestCommonPrefix(strs: string[]): string {
//   let res: string = '';
//   for (let j = 1; j < strs.length; j++) {
//     let item = strs[j];
//     if (j === 1) res = item;
//     for (let i = 0; i < res.length; i++) {
//       if (item[i] === strs[0][i]) {
//         console.log(item, item[i]);
//         res += item[i];
//       } else {
//         break;
//       }
//     }
//   }
//   return res;
// }
// console.log(longestCommonPrefix(['flower', 'flow', 'flight']));
// console.log(longestCommonPrefix(['dog', 'racecar', 'car']));
// console.log(longestCommonPrefix(['flower', 'flow', 'flight']));
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

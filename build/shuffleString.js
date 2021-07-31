"use strict";
function restoreString(s, indices) {
    let result = [];
    for (let i = 0; i < s.length; i++) {
        result[indices[i]] = s[i];
    }
    return result.join('');
}
console.log(restoreString('aaiougrt', [4, 0, 2, 6, 7, 3, 1, 5]));
console.log(restoreString('codeleet', [4, 5, 6, 7, 0, 2, 1, 3]));

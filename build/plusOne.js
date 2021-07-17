"use strict";
// 66. Plus One
function plusOne(digits) {
    console.log(Number.MAX_SAFE_INTEGER, digits.length);
    if (digits.length >= Number.MAX_SAFE_INTEGER) {
        console.log(digits);
    }
    let num = Number(digits.toString().replace(/,/g, ''));
    num++;
    let toNum = (num) => Number(num);
    var intArr = Array.from(String(num), toNum);
    return intArr;
}
console.log(plusOne([1, 2, 3]));
console.log(plusOne([4, 3, 2, 1]));
console.log(plusOne([9]));
console.log(plusOne([4, 3, 2, 9]));
console.log(plusOne([6, 1, 4, 5, 3, 9, 0, 1, 9, 5, 1, 8, 6, 7, 0, 5, 5, 4, 3]));

"use strict";
// 66. Plus One
function plusOne(digits) {
    if (digits.length >= 16) {
        let i = digits.length - 1;
        let flag = true;
        while (i >= 0) {
            if (digits[i] === 9) {
                digits[i] = 0;
            }
            else {
                digits[i] = ++digits[i];
                flag = false;
                break;
            }
            i--;
        }
        if (flag === true) {
            return [1, ...digits];
        }
        return digits;
    }
    else {
        let num = Number(digits.toString().replace(/,/g, ''));
        num++;
        let toNum = (num) => Number(num);
        var intArr = Array.from(String(num), toNum);
        return intArr;
    }
}
// console.log(plusOne([1, 2, 3]));
// console.log(plusOne([4, 3, 2, 1]));
// console.log(plusOne([9]));
// console.log(plusOne([4, 3, 2, 9]));
console.log(plusOne([6, 1, 4, 5, 3, 9, 0, 1, 9, 5, 1, 8, 6, 7, 0, 5, 5, 9, 9]));
console.log(plusOne([9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9]));

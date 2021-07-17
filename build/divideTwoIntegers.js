"use strict";
// 29. Divide Two Integers
function divide(dividend, divisor) {
    let result = Math.trunc(dividend / divisor);
    if (result > 2 ** 31 - 1 || result < -(2 ** 31))
        return 2 ** 31 - 1;
    return result;
}
console.log(divide(10, 3));
console.log(divide(7, -3));
console.log(divide(0, 1));
console.log(divide(1, 1));

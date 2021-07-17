"use strict";
// 50. Pow(x, n)
// Medium
// Implement pow(x, n), which calculates x raised to the power n (i.e., xn).
function myPow(x, n) {
    let total = 1;
    let power = Math.abs(n);
    if (x === 1)
        return x;
    if (x === -1) {
        if (power % 2 === 0) {
            return Math.abs(x);
        }
        else {
            return x;
        }
    }
    for (let i = 1; i <= power; i++) {
        total *= x;
    }
    if (n < 0) {
        return 1 / total;
    }
    else {
        return total;
    }
}
console.log(myPow(2.0, 10));
console.log(myPow(2.1, 3));
console.log(myPow(2.0, -2));
console.log(myPow(-1, 2147483647));
console.log(myPow(-1, -2147483648));

"use strict";
// 1742. Maximum Number of Balls in a Box
function countBalls(lowLimit, highLimit) {
    const arr = new Array(43).fill(0);
    let max = 0;
    let n = 0;
    for (let i = lowLimit; i <= highLimit; i++) {
        ++arr[getSum(i)];
    }
    function getSum(n) {
        let ret = 0;
        while (n > 0) {
            ret += n % 10;
            n = Math.floor(n / 10);
        }
        return ret;
    }
    return Math.max(...arr);
}
// console.log(countBalls(1, 10));
console.log(countBalls(5, 15));
console.log(countBalls(19, 28));

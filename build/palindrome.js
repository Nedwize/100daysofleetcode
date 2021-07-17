"use strict";
function isPalindrome1(x) {
    let n = x;
    let remainder = 1;
    let reverse = 0;
    if (x < 0) {
        return false;
    }
    while (x != 0) {
        remainder = x % 10;
        reverse = reverse * 10 + remainder;
        x = (x / 10) | 0;
    }
    if (n === reverse) {
        return true;
    }
    else {
        return false;
    }
}
console.log(isPalindrome1(-121));

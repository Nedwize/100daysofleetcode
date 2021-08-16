"use strict";
function reverse(x) {
    let remainder = 1;
    let reverse = 0;
    while (x != 0) {
        remainder = x % 10;
        reverse = reverse * 10 + remainder;
        x = (x / 10) | 0;
    }
    if (Math.abs(reverse) > 2 ** 31 - 1) {
        return 0;
    }
    return reverse;
}
console.log(reverse(123));
console.log(reverse(-123));
console.log(reverse(120));
console.log(reverse(-2147483648));

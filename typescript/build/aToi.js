"use strict";
// 15th JULY 2021
// 8. String to Integer (atoi)
// The algorithm for myAtoi(string s) is as follows:
// Read in and ignore any leading whitespace.
// Check if the next character (if not already at the end of the string) is '-' or '+'. Read this character in if it is either. This determines if the final result is negative or positive respectively. Assume the result is positive if neither is present.
// Read in next the characters until the next non-digit charcter or the end of the input is reached. The rest of the string is ignored.
// Convert these digits into an integer (i.e. "123" -> 123, "0032" -> 32). If no digits were read, then the integer is 0. Change the sign as necessary (from step 2).
// If the integer is out of the 32-bit signed integer range [-231, 231 - 1], then clamp the integer so that it remains in the range. Specifically, integers less than -231 should be clamped to -231, and integers greater than 231 - 1 should be clamped to 231 - 1.
// Return the integer as the final result.
function myAtoi(s) {
    let len = s.length;
    let i = 0;
    let num = '';
    s = s.trim();
    if (!s)
        return 0;
    if (s.charAt(0) === '-' || s.charAt(0) === '+')
        i++;
    while (i < len) {
        if (/\D/.test(s.charAt(i))) {
            num = s.substring(0, i);
            break;
        }
        i++;
    }
    num = s.substring(0, i);
    if (Number(num) > 2 ** 31 - 1)
        return 2 ** 31 - 1;
    if (Number(num) < -(2 ** 31))
        return -(2 ** 31);
    let result = Number(num);
    if (isNaN(result)) {
        return 0;
    }
    else {
        return result;
    }
}
console.log(myAtoi('words and 987'));
console.log(myAtoi('4193 with words'));
console.log(myAtoi('   -42s'));
console.log(myAtoi('42'));
console.log(myAtoi('-91283472332'));
console.log(myAtoi('91283472332'));
console.log(myAtoi('+-12'));

"use strict";
function isNumber(s) {
    const isInteger = (s) => {
        s = s.trim();
        if (s === '')
            return false;
        let flag = true;
        let len = s.length;
        let i = 0;
        if (s.charAt(0) === '+' || s.charAt(0) === '-')
            i++;
        while (i < len) {
            if (/\D/.test(s.charAt(i))) {
                flag = false;
                return flag;
            }
            i++;
        }
        return flag;
    };
    const isDecimal = () => {
        s = s.trim();
        if (s === '')
            return false;
        let flag = true;
        let len = s.length;
        let i = 0;
        if (s.charAt(0) === '+' || s.charAt(0) === '-')
            i++;
        while (i < len) {
            if (/\D/.test(s.charAt(i))) {
                flag = false;
                return flag;
            }
            i++;
        }
        return flag;
    };
    console.log(isInteger(''));
    console.log(isInteger('932430'));
    console.log(isInteger('+9234320'));
    console.log(isInteger('-902343'));
    console.log(isInteger('dsdf'));
    console.log(isInteger('+sajd789'));
    console.log(isInteger('-32423g'));
    console.log(isInteger('+9e455'));
    console.log(isInteger('9e0'));
    console.log(isInteger('9.7870'));
    return true;
}
isNumber('s');

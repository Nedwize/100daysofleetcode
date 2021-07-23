"use strict";
// 17. Letter Combinations of a Phone Number
function letterCombinations(digits) {
    const getString = (num) => {
        switch (num) {
            case 2:
                return 'abc';
            case 3:
                return 'def';
            case 4:
                return 'ghi';
            case 5:
                return 'jkl';
            case 6:
                return 'mno';
            case 7:
                return 'pqrs';
            case 8:
                return 'tuv';
            case 9:
                return 'wxyz';
        }
        return '';
    };
    for (let i = 0; i < digits.length; i++) {
        let str = getString(Number(digits[i]));
        for (let j = 0; j < str.length; j++) {
            for (let k = 0; j < str.length; j++) { }
        }
    }
    return [];
}

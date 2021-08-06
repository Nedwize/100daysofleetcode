"use strict";
// 1309. Decrypt String from Alphabet to Integer Mapping
function freqAlphabets(s) {
    const getAlphabet = (num) => {
        return String.fromCharCode(num + 96);
    };
    let len = s.length;
    let result = '';
    for (let i = 0; i < len; i++) {
        if (s[i + 2] === '#') {
            result += getAlphabet(Number(s.substring(i, i + 2)));
            i += 2;
        }
        else {
            result += getAlphabet(Number(s[i]));
        }
    }
    return result;
}
console.log(freqAlphabets('10#11#12'));
console.log(freqAlphabets('1326#'));
console.log(freqAlphabets('25#'));
console.log(freqAlphabets('12345678910#11#12#13#14#15#16#17#18#19#20#21#22#23#24#25#26#'));

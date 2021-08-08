"use strict";
// 824. Goat Latin
function toGoatLatin(sentence) {
    const isVowel = (c) => {
        if (c === 'a' ||
            c === 'e' ||
            c === 'i' ||
            c === 'o' ||
            c === 'u' ||
            c === 'A' ||
            c === 'E' ||
            c === 'I' ||
            c === 'O' ||
            c === 'U') {
            return true;
        }
        else {
            return false;
        }
    };
    sentence = sentence + ' ';
    let length = sentence.length;
    let flag = 0, count = 0, result = '';
    for (let i = 0; i < length; i++) {
        let char = sentence[i];
        if (char === ' ') {
            count++;
            if (isVowel(sentence[flag])) {
                result += sentence.substring(flag, i) + 'ma' + 'a'.repeat(count) + ' ';
            }
            else {
                result +=
                    sentence.substring(flag + 1, i) +
                        sentence[flag] +
                        'ma' +
                        'a'.repeat(count) +
                        ' ';
            }
            flag = i + 1;
        }
    }
    return result;
}
console.log(toGoatLatin('I speak Goat Latin'));
console.log(toGoatLatin('The quick brown fox jumped over the lazy dog'));

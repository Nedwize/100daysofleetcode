"use strict";
// 804. Unique Morse Code Words
function uniqueMorseRepresentations(words) {
    const getMorseCode = (c) => {
        const morse = [
            '.-',
            '-...',
            '-.-.',
            '-..',
            '.',
            '..-.',
            '--.',
            '....',
            '..',
            '.---',
            '-.-',
            '.-..',
            '--',
            '-.',
            '---',
            '.--.',
            '--.-',
            '.-.',
            '...',
            '-',
            '..-',
            '...-',
            '.--',
            '-..-',
            '-.--',
            '--..',
        ];
        return morse[c.charCodeAt(0) - 97];
    };
    let result = '', count = 0;
    let map = new Map();
    for (let i = 0; i < words.length; i++) {
        result = '';
        for (let j = 0; j < words[i].length; j++) {
            result += getMorseCode(words[i][j]);
        }
        if (!map.has(result)) {
            map.set(result, true);
        }
    }
    return map.size;
}
console.log(uniqueMorseRepresentations(['gin', 'zen', 'gig', 'msg']));

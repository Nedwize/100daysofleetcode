"use strict";
// 1678. Goal Parser Interpretation
function interpret(command) {
    let result = '';
    for (let i = 0; i < command.length; i++) {
        if (command[i] === 'G')
            result += 'G';
        if (command[i] === '(' && command[i + 1] === ')') {
            i++;
            result += 'o';
        }
        else if (command[i] === '(' && command[i + 1] === 'a') {
            i += 3;
            result += 'al';
        }
    }
    return result;
}
console.log(interpret('G()(al)'));
console.log(interpret('G()()()()(al)'));
console.log(interpret('(al)G(al)()()G'));

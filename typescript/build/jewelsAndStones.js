"use strict";
function numJewelsInStones(jewels, stones) {
    let result = 0;
    let jewelArr = [];
    for (let i = 0; i < jewels.length; i++) {
        jewelArr.push(jewels[i]);
    }
    for (let i = 0; i < stones.length; i++) {
        if (jewelArr.indexOf(stones[i]) !== -1)
            result++;
    }
    return result;
}
console.time('1');
console.log(numJewelsInStones('aA', 'aAAbbbb'));
console.timeEnd('1');
console.log(numJewelsInStones('z', 'ZZ'));
console.log(numJewelsInStones('nak', 'nakshatranak'));

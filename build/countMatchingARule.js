"use strict";
// 1773. Count Items Matching a Rule
function countMatches(items, ruleKey, ruleValue) {
    const len = items.length;
    let key = 0;
    let result = 0;
    if (ruleKey === 'type')
        key = 0;
    if (ruleKey === 'color')
        key = 1;
    if (ruleKey === 'name')
        key = 2;
    for (let i = 0; i < len; i++) {
        if (items[i][key] === ruleValue)
            result++;
    }
    return result;
}
console.log(countMatches([
    ['phone', 'blue', 'pixel'],
    ['computer', 'silver', 'lenovo'],
    ['phone', 'gold', 'iphone'],
], 'color', 'silver'));
console.log(countMatches([
    ['phone', 'blue', 'pixel'],
    ['computer', 'silver', 'phone'],
    ['phone', 'gold', 'iphone'],
], 'type', 'phone'));

"use strict";
// Remove Duplicates from Sorted Array
function removeDuplicates(nums) {
    const map = new Map();
    let counter = 0;
    const len = nums.length;
    for (let i = 0; i < len; i++) {
        if (!map.has(nums[i])) {
            map.set(nums[i], i);
            nums[counter] = nums[i];
            counter++;
        }
    }
    return map.size;
}
console.log(removeDuplicates([0, 0, 1, 1, 1, 2, 2, 3, 3, 4]));

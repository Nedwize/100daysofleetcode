"use strict";
// 1920. Build Array from Permutation
function buildArray(nums) {
    return nums.map((i) => nums[i]);
}
console.log(buildArray([0, 2, 1, 5, 3, 4]));
console.log(buildArray([5, 0, 1, 2, 3, 4]));

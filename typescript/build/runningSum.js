"use strict";
// 1480. Running Sum of 1d Array
function runningSum(nums) {
    let ans = [];
    ans[0] = nums[0];
    for (let i = 1; i < nums.length; i++) {
        ans[i] = ans[i - 1] + nums[i];
    }
    return ans;
}
console.log(runningSum([1, 2, 3, 4]));
console.log(runningSum([1, 1, 1, 1, 1]));
console.log(runningSum([3, 1, 2, 10, 1]));

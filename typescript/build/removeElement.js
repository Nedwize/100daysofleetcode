"use strict";
// 27. Remove Element
function removeElement(nums, val) {
    nums = nums.filter((item) => item !== val);
    console.log(nums);
    return nums.length;
}
// Input: nums = [0,1,2,2,3,0,4,2], val = 2
// Expected Output = 5
console.log(removeElement([0, 1, 2, 2, 3, 0, 4, 2], 2));
console.log(removeElement([3, 2, 2, 3], 3));

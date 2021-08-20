"use strict";
// 34. Find First and Last Position of Element in Sorted Array
function searchRange(nums, target) {
    return [nums.indexOf(target), nums.lastIndexOf(target)];
}
console.log(searchRange([5, 5, 6, 7, 7, 7, 7, 8, 8, 10], 7));

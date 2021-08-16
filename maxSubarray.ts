// 53. Maximum Subarray

// Kadane's Algorithm - O(n)
function maxSubArray(nums: number[]): number {
  let currentSum = nums[0],
    maxSum = nums[0];

  for (let i = 1; i < nums.length; i++) {
    currentSum = Math.max(currentSum + nums[i], nums[i]);
    maxSum = Math.max(currentSum, maxSum);
  }
  return maxSum;
}

console.log(maxSubArray([-2, 1, -3, 4, -1, 2, 1, -5, 4]));
console.log(maxSubArray([5, 4, -1, 7, 8]));
console.log(maxSubArray([-1]));
console.log(maxSubArray([1]));

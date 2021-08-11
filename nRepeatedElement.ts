// 961. N-Repeated Element in Size 2N Array

function repeatedNTimes(nums: number[]): number {
  const map: any = {};

  const n = nums.length / 2;
  // Let length be 10
  // Then n = 5;
  // Unique elements = 6 = n + 1;
  // One is repeated n times = 5;

  for (let i = 0; i < nums.length; i++) {
    if (map[nums[i]]) {
      return nums[i];
    } else {
      map[nums[i]] = true;
    }
  }

  return 1;
}

console.log(repeatedNTimes([1, 2, 3, 3]));
console.log(repeatedNTimes([2, 1, 2, 5, 3, 2]));
console.log(repeatedNTimes([5, 1, 5, 2, 5, 3, 5, 4]));

function findDuplicate(nums: number[]): number {
  const map: Map<number, number> = new Map();

  for (let i = 0; i < nums.length; i++) {
    if (map.has(nums[i])) {
      return nums[i];
    } else {
      map.set(nums[i], 1);
    }
  }
  return -1;
}

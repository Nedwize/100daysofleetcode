// 1748. Sum of Unique Elements

function sumOfUnique(nums: number[]): number {
  let map: Map<number, number> = new Map();
  let count = 0;
  let result = 0;

  for (let i = 0; i < nums.length; i++) {
    count = map.get(nums[i]) || 0;
    if (count < 2) {
      result = count === 1 ? result - nums[i] : result + nums[i];
    }
    map.set(nums[i], count + 1);
  }
  return result;
}

console.log(sumOfUnique([1, 2, 3, 2]));

console.log(sumOfUnique([1, 1, 1, 1, 1]));

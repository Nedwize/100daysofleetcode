//  5850. Find Greatest Common Divisor of Array

function findGCD(nums: number[]): number {
  function gcd(x: number, y: number) {
    x = Math.abs(x);
    y = Math.abs(y);
    while (y) {
      var t = y;
      y = x % y;
      x = t;
    }
    return x;
  }

  let min = nums[0];
  let max = nums[0];
  for (let i = 0; i < nums.length; i++) {
    min = Math.min(nums[i], min);
    max = Math.max(nums[i], max);
  }
  return gcd(min, max);
}

console.log(findGCD([2, 5, 6, 9, 10]));
console.log(findGCD([7, 5, 6, 8, 3]));
console.log(findGCD([3, 3]));

// 1929. Concatenation of Array

function getConcatenation(nums: number[]): number[] {
  let ans = [];
  let n = nums.length;

  for (let i = 0; i < nums.length; i++) {
    ans[i] = nums[i];
    ans[i + n] = nums[i];
  }

  return ans;
}

console.log(getConcatenation([1, 3, 2, 1]));
console.log(getConcatenation([1, 2, 1]));

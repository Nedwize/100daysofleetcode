// 11. Container With Most Water

function maxArea(height: number[]): number {
  let len = height.length;
  let area: number = 0;
  for (let i = 0; i < len; i++) {
    for (let j = i + 1; j < len; j++) {
      area = Math.max(area, Math.min(height[j], height[i]) * (j - i));
    }
  }
  return area;
}

console.log(maxArea([1, 8, 6, 2, 5, 4, 8, 3, 7]));
console.log(maxArea([4, 3, 2, 1, 4]));
console.log(maxArea([1, 2, 1]));
console.log(maxArea([1, 1]));

// 1431. Kids With the Greatest Number of Candies

function kidsWithCandies(candies: number[], extraCandies: number): boolean[] {
  let max = candies[0];
  for (let i = 0; i < candies.length; i++) {
    max = Math.max(max, candies[i]);
  }

  let result: boolean[] = candies.map((candy) => {
    if (candy + extraCandies >= max) {
      return true;
    } else {
      return false;
    }
  });

  return result;
}

console.log(kidsWithCandies([2, 3, 5, 1, 3], 3));
console.log(kidsWithCandies([4, 2, 1, 1, 2], 1));

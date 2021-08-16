// 1742. Maximum Number of Balls in a Box

function countBalls(lowLimit: number, highLimit: number): number {
  const map: Map<number, number> = new Map();
  let max: number | undefined = 0;
  let n = 0;

  for (let i = lowLimit; i <= highLimit; i++) {
    n = getSum(i);
    if (map.has(n)) {
      map.set(n, map.get(n)! + 1);
      if (max < map.get(n)!) {
        max = map.get(n)!;
      }
    } else {
      map.set(n, 1);
    }
  }

  function getSum(n: number) {
    var sum = 0;
    while (n != 0) {
      sum = sum + (n % 10);
      n = Math.floor(n / 10);
    }
    return sum;
  }
  return Math.max(...map.values());
}

// console.log(countBalls(1, 10));
console.log(countBalls(5, 15));
// console.log(countBalls(19, 28));

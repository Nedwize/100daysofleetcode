// 1672. Richest Customer Wealth

function maximumWealth(accounts: number[][]): number {
  let sum = 0;
  let max = 0;
  for (let i = 0; i < accounts.length; i++) {
    sum = 0;
    for (let j = 0; j < accounts[i].length; j++) {
      sum += accounts[i][j];
    }
    max = Math.max(max, sum);
  }
  return max;
}

console.log(
  maximumWealth([
    [1, 2, 3],
    [3, 2, 1],
  ])
);
console.log(
  maximumWealth([
    [1, 5],
    [7, 3],
    [3, 5],
  ])
);

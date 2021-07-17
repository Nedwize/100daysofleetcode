// 66. Plus One

function plusOne(digits: number[]): number[] {
  console.log(Number.MAX_SAFE_INTEGER, digits.length);
  if (digits.length >= Number.MAX_SAFE_INTEGER) {
    console.log(digits);

    // If an integer is greater than MAX_SAFE_INTEGER
    // Run a while loop from the end of the array to the start
    // Check if digit is 9 then carry 1
    // If digit is !9 then add one
  }

  let num: string | number = Number(digits.toString().replace(/,/g, ''));
  num++;
  let toNum = (num: string) => Number(num);
  var intArr = Array.from(String(num), toNum);
  return intArr;
}

console.log(plusOne([1, 2, 3]));
console.log(plusOne([4, 3, 2, 1]));
console.log(plusOne([9]));
console.log(plusOne([4, 3, 2, 9]));
console.log(plusOne([6, 1, 4, 5, 3, 9, 0, 1, 9, 5, 1, 8, 6, 7, 0, 5, 5, 4, 3]));

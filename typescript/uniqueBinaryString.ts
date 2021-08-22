// 5851. Find Unique Binary String

function findDifferentBinaryString(nums: string[]): string {
  let length = nums.length;

  for (let i = 0; i < 2 ** length; i++) {
    let num = Number(i).toString(2).padStart(length, '0');
    if (nums.indexOf(num) === -1) {
      return num;
    }
  }
  return '';
}

console.log(findDifferentBinaryString(['000', '011', '001']));
console.log(findDifferentBinaryString(['0']));
console.log(findDifferentBinaryString(['10', '11']));

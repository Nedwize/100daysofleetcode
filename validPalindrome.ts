// 125. Valid Palindrome
// Given a string s, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.

// Two Pointer Approach
function isPalindrome(s: string): boolean {
  const clean = s.toLowerCase().replace(/[^a-z0-9]/g, ''); // Pass only alphanumeric values
  let leftPtr = 0;
  let rightPtr = clean.length - 1;

  while (leftPtr < rightPtr) {
    if (clean[leftPtr] !== clean[rightPtr]) {
      return false;
    }
    leftPtr++;
    rightPtr--;
  }
  return true;
}

console.log(isPalindrome('A man, a plan, a canal: Panama'));
console.log(isPalindrome('race a car'));

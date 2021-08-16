// Given two strings s and t, determine if they are isomorphic.
// Two strings s and t are isomorphic if the characters in s can be replaced to get t.
// All occurrences of a character must be replaced with another character while preserving the order of characters.
// No two characters may map to the same character, but a character may map to itself.

function isIsomorphic(s: string, t: string): boolean {
  if (s.length !== t.length) {
    return false;
  }
  for (let i = 0; i < s.length; i++) {
    const a: number = s.indexOf(s[i]);
    const b: number = t.indexOf(t[i]);
    if (t[a] !== t[i] || s[b] !== s[i]) {
      return false;
    }
  }
  return true;
}

console.log(isIsomorphic('egg', 'add'));
console.log(isIsomorphic('foo', 'bar'));
console.log(isIsomorphic('title', 'paper'));

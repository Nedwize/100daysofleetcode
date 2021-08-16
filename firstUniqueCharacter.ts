// 387. First Unique Character in a String
// HashMap - Whenever counting or keeping a track is required

function firstUniqChar(s: string): number {
  let map: Map<string, number> = new Map();

  for (let i = 0; i < s.length; i++) {
    if (map.has(s[i])) {
      map.set(s[i], map.get(s[i])! + 1);
    } else {
      map.set(s[i], 1);
    }
  }

  for (let i = 0; i < s.length; i++) {
    if (map.get(s[i]) === 1) {
      return i;
    }
  }
  return -1;
}

console.log(firstUniqChar('leetcode'));
console.log(firstUniqChar('loveleetcode'));
console.log(firstUniqChar('aabb'));

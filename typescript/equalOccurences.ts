// 1941. Check if All Characters Have Equal Number of Occurrences

function areOccurrencesEqual(s: string): boolean {
  let map: Map<string, number> = new Map();

  for (let i = 0; i < s.length; i++) {
    if (map.has(s[i])) {
      map.set(s[i], map.get(s[i])! + 1);
    } else {
      map.set(s[i], 0);
    }
  }

  for (let value of map.values()) {
    if (value !== map.get(s[0])) {
      return false;
    }
  }

  return true;
}

console.log(areOccurrencesEqual('aaabb'));

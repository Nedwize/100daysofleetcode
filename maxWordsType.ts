// 1935. Maximum Number of Words You Can Type
// Unsolved

function canBeTypedWords(text: string, brokenLetters: string): number {
  const map: Map<string, boolean> = new Map();

  for (let i = 0; i < brokenLetters.length; i++) {
    if (!map.has(brokenLetters[i])) map.set(brokenLetters[i], true);
  }

  for (let i = 0; i < text.length; i++) {}

  return 1;
}

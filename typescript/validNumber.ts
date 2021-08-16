function isNumber(s: string): boolean {
  const isInteger = (s: string) => {
    s = s.trim();
    if (s === '') return false;
    let flag: boolean = true;
    let len: number = s.length;
    let i: number = 0;

    if (s.charAt(0) === '+' || s.charAt(0) === '-') i++;

    while (i < len) {
      if (/\D/.test(s.charAt(i))) {
        flag = false;
        return flag;
      }
      i++;
    }
    return flag;
  };

  const isDecimal = () => {
    s = s.trim();
    if (s === '') return false;
    let flag: boolean = true;
    let len: number = s.length;
    let i: number = 0;

    if (s.charAt(0) === '+' || s.charAt(0) === '-') i++;

    while (i < len) {
      if (s.charAt(i) === '.') i++;
      if (/\D/.test(s.charAt(i))) {
        flag = false;
        return flag;
      }
      i++;
    }
    return flag;
  };

  console.log(isInteger(''));
  console.log(isInteger('932430'));
  console.log(isInteger('+923.4320'));
  console.log(isInteger('-902343'));
  console.log(isInteger('dsdf'));
  console.log(isInteger('+sajd789'));
  console.log(isInteger('-32423g'));
  console.log(isInteger('+9e455'));
  console.log(isInteger('9e0'));
  console.log(isInteger('9.7870'));
  return true;
}

isNumber('s');

function timeConversion(s: string) {
  let hours = Number(s.substr(0, 2));

  let leftOver = s.substring(2, 8);

  if (s[8] == 'P') {
    if (hours + 12 < 24) {
      hours += 12;
    } else if (hours == 12) {
      hours = 0;
    }
  }

  if (hours === 0) return '00' + leftOver;
  return hours.toString() + leftOver;
}

console.log(timeConversion('12:01:00PM'));
console.log(timeConversion('07:05:45PM'));

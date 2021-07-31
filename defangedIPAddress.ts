function defangIPaddr(address: string): string {
  return address.replace(/\./g, '[.]');
}

console.log(defangIPaddr('1.1.1.1'));

console.log(defangIPaddr('255.100.50.0'));

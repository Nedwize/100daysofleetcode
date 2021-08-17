"use strict";
// 1287. Element Appearing More Than 25% In Sorted Array
function findSpecialInteger(arr) {
    let minOccurence = Math.floor(0.25 * arr.length);
    for (let i = 0; i < arr.length; i++) {
        if (arr[i] === arr[i + minOccurence]) {
            return arr[i];
        }
    }
    return 0;
}
console.log(findSpecialInteger([1, 2, 2, 6, 6, 6, 6, 7, 10]));

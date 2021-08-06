"use strict";
// 1436. Destination City
function destCity(paths) {
    let leftArray = [];
    let rightArray = [];
    for (let i = 0; i < paths.length; i++) {
        leftArray.push(paths[i][0]);
        rightArray.push(paths[i][1]);
    }
    for (let i = 0; i < paths.length; i++) {
        if (leftArray.indexOf(rightArray[i]) === -1) {
            return rightArray[i];
        }
    }
    return rightArray[0];
}
console.log(destCity([
    ['B', 'C'],
    ['D', 'B'],
    ['C', 'A'],
]));
console.log(destCity([
    ['London', 'New York'],
    ['New York', 'Lima'],
    ['Lima', 'Sao Paulo'],
]));
console.log(destCity([['A', 'Z']]));

"use strict";
// 1812. Determine Color of a Chessboard Square
function squareIsWhite(coordinates) {
    return !((Number(coordinates[1]) % 2 === 0) ===
        (coordinates.charCodeAt(0) % 2 === 0));
}
console.log(squareIsWhite('a1'));
console.log(squareIsWhite('h3'));
console.log(squareIsWhite('c7'));
console.log(squareIsWhite('f8'));

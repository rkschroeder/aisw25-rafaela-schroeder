let value = 2;
// console.log(value);

const increase = 3;
// console.log(increase);

value = value + increase;
// console.log(value);
// console.log(increase);

// const newValue = value + increase;
// console.log(newValue);
// console.log(increase);

value = value + increase;
const increaseMinusOne = increase - 1;
value = value + increaseMinusOne;
console.log("result: " + value);

/*Option 2: using loop
let value = 2;
const increase = 3;
const maxValue = 10;

// Keep looping until value reaches or exceeds maxValue
while (value < maxValue) {
    value += increase;

    // Ensure value does not exceed maxValue
    if (value > maxValue) {
        value = maxValue;
    }
}

console.log("result: " + value);
*/
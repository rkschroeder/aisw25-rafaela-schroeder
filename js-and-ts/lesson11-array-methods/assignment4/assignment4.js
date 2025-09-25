/* Assignment 4, lesson 11 - JS & TS 

a. Create a function incrementAll that takes an array of numbers as a parameter and 
returns a new array where all of the array's elements have been incremented by one.
Think of a fitting array method to use for this task.

b. Create a function decrementAll that takes an array of numbers as a parameter and 
returns a new array where all of the array's elements have been decremented by one.
*/

function incrementAllElements(originalArray,incrementElement){
    return originalArray.map(num => num + incrementElement);
}

// Create an array of integers
const originalNumbers = [1, 2, 3, 4, 5];
console.log("Original array: ", originalNumbers);

// Task a. Increment all the elements by 1
const incrementNumbers = incrementAllElements(originalNumbers,1);
console.log("Array after incrementing each element by 1:", incrementNumbers);

// Task b. Decrement all the elements by 1
const decrementNumbers = incrementAllElements(originalNumbers,-1);
console.log("Array after decrementing each element by 1:",decrementNumbers);

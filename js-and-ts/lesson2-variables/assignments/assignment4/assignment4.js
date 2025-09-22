/*
A store is rising the price of a product and is not sure of the result.
Create a program that calculates the result for them: have two variables, price and increase. 
Based on these, calculate the final price into a variable named result.
Print the values of all of these variables on their own lines, with fitting explanations. 
For example, "Original price: 6.5".
EXTRA: Print the whole calculation in a single line, like price + increase = result
*/

const price=10;
const increase=1.3;
const result=price + increase;
console.log("The original price in euros is: " + price);
console.log("The increase in euros is: " + increase);
console.log("The final price in euros is: " + (price + increase));

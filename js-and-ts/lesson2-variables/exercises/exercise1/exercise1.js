/*Define two variables with some values using the let keyword and print the variables 
to the console using console.log.
What will be printed if you don't assign a value to a variable at all?
Change the values of the variables in the lines after the console.log and print out the
variables again.
Change one of the variable definitions to use the const keyword.
What happens when you try to change the value of the constant variable?
*/

// First part. I defined two variables var1 and var2. 
// I didn't assign a value to var2. Output: undefined
let var1=21;
//let var2=8;
let var2;
console.log(var1,var2)

//Change the values of the variables in the lines after the console.log and print again
var1=19;
var2=100;
console.log(var1,var2)

// Change one of the variable definitions to use the const keyword.
// Output: error message 
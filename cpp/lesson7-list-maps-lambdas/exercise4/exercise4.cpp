/*Exercise
Common use for lambda functions is vector mapping.
Make a function mapVector that takes in two parameters: std::vector<int> 
and a lambda function. Inside the function copy the vector and call the lambda 
function for every single element of the vector. This way we can do array operators 
using a function call instead of looping every time!
Try at least 2 different lambda operators. 
*/

#include <functional>
#include <iostream>
#include <vector>

// Function that takes a vector and a lambda (function) to modify each element,
// applies the lambda to a copy of the vector, and returns the modified vector
std::vector<int> mapVector(const std::vector<int>& inputVec, std::function<void(int&)> myfunc){
    // Make a copy of the vector
    std::vector<int> numbers = inputVec;

    // Range-based for loop: iterate over each element by reference
    // Using 'int& n' allows the lambda to modify the actual element in the copy
    // Equivalent in JS: For each
    for (int& n : numbers){
        myfunc(n); // Apply the lambda to modify the element
    }
    return numbers; // return the resulting vector
}

// Helper function to print all elements of a vector
void printVector(const std::vector<int>& vec){
    for (int n : vec){
        std::cout << n << " ";
    }
    std::cout << "\n";
}

int main(){
    std::vector<int> myVec = {1, 2, 3, 4, 5, 6};
    std::cout<<"Original vector: ";
    printVector(myVec);

    // First call: pass a lambda that increments each number by 1
    std::vector<int> incrementVec=mapVector(myVec,[](int& n) { ++n; });
    std::cout<<"Resulting vector after incrementing each number by 1: ";
    printVector(incrementVec);

    // Second call: pass a lambda that decrements each number by 1
    std::vector<int> decrementVec=mapVector(myVec,[](int& n) {--n; });
    std::cout<<"Resulting vector after decrementing each number by 1: ";
    printVector(decrementVec);

    return 0;
}
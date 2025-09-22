/*Exercise
Common use for lambda functions is vector mapping.
Make a function mapVector that takes in two parameters: std::vector<int> 
and a lambda function. Inside the function copy the vector and call the lambda 
function for every single element of the vector. This way we can do array operators 
using a function call instead of looping every time!
Try at least 2 different lambda operators. 
Examples: Add one to all elements in the array or multiply all elements in the array.
*/

#include <functional>
#include <iostream>
#include <vector>


void mapVector(const std::vector<int>& inputVec, std::function<void(int&)> myfunc){
    // Copy the vector
    std::vector<int> numbers = inputVec;
    std::cout<<"Let's modify the new vector."<<"\n";

    for (int i = 0; i < numbers.size(); i++) {
        // Show the original value
        std::cout<<"Original number in the vector: ";
        std::cout << numbers[i] << "\n";
        
        // Show the modified value
        std::cout<<"Modified number in the vector: ";
        myfunc(numbers[i]);
        std::cout<<numbers[i]<<"\n";
    }

}

int main(){
    std::vector<int> myVec = {1, 2, 3, 4, 5, 6};

    // First call: pass a lambda that increments each number by 1
    mapVector(myVec,[](int& n) { ++n; });

    // Second call: pass a lambda that squares each number
    mapVector(myVec,[](int& n) { n *= n;});
    return 0;
}
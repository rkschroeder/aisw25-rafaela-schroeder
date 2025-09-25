#include <iostream>
#include <vector>
#include <string>
#include <numeric>

int main(){
    std::vector<int> numbers = {1,2,3,5};

    /* New version
    Use std::accumulate to combine all elements into one string
    Start with an empty string (std::string())
    */
    auto print_string = [](std::string acc, int n) {
        return acc + std::string(n, 'a') + "\n";
    };

    std:: string result=std:: accumulate(numbers.begin(), numbers.end(),std::string(),print_string);
    std::cout<<result;

    /* Original version using for loop
    for (int i=0; i < numbers.size(); ++i){
        std::string print_var(numbers[i], 'a');  
        std::cout<<print_var<<"\n";
    }    
    */
}
/*
Create an array of your choice
Make a loop that prints the insides of your array like the following example
to an array consisting [1, 20, 5, 8]
*/

#include <iostream>
#include <array>

int main(){
    std::array<int, 5> a1{8, 5, 3, 9, 4}; 

    for (int i=0; i < a1.size(); ++i){
        std::cout << a1[i] << " ";
        int count = i;
        for (int j = count+1; j < a1.size(); ++j){
            std::cout << a1[j] << " ";   
        }
        std::cout << "\n";
    }
    return 0;
}
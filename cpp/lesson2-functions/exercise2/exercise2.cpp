#include <iostream>

void large_number(int a, int b, int c){
    // This function will just print the largest number
    // Thus, it is not returning a value
    // For this reason, I will use 'void 
    
    if (a>b && a>c){
        std::cout << "a is the largest number: " << a;
    }
    if (c>a && c>b){
        std::cout << "c is the largest number: " << c;
    } 
    else{
        std::cout << "b is the largest number: " << b;
    }
}

int main(){   
    // Input: 3 different numbers
    // Otherwise, it would be necessary to check if the numbers are equal. 
    int a, b, c;
    std::cout << "Enter three different numbers (a, b, c): ";
    std::cin >> a >> b >> c;

    large_number(a,b,c);
    return 0;
}
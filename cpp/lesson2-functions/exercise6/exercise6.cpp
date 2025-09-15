#include <iostream>

bool ValidNumber(int n){
    if (n < 0) {
        std::cout << "Number invalid. Please enter a non-negative number.";
        return false;
    }
    return true;
}

int factorial(int n){
    if (n == 0){ 
        return 1;
    }    
    return n * factorial(n - 1);
}

int main(){
    int numb;
    std::cout << "Select a number: ";
    std::cin >> numb;

    if (ValidNumber(numb)){
        int result = factorial(numb);
        std::cout << "Factorial of " << numb << " is " << result;
    }

    return 0;
}
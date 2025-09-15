#include <iostream>

int main(){
    int numb=1;
    int sum_numb=0;
    int max_numb=1000;

    while (true){
       // First, let's check the sum of the numbers
       // This can be done by using the
       // "Sum of First n Natural Numbers"
       sum_numb=numb*(numb + 1) / 2;
       if (sum_numb > max_numb) {
            std::cout << "Sum is: " << sum_numb << "\n";
            std::cout << "N is: " << numb << "\n";
            std::cout << "Bye bye...\n";
            break; 
        }
        std::cout << "Increasing n...\n";
        //incrementing numb
        ++numb;
    }
    return 0;
}
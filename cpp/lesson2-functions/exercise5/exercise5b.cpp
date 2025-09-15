#include <iostream>

int main(){
    int numb=1;
    int sum_numb=0;
    int max_numb=1000;

    while (true){
        if (numb % 3 == 0){   
            std::cout << "Multiple of 3. ";
            std::cout << "Skip iteration\n";
            ++numb;
            continue;
       }

       sum_numb += numb;
       std:: cout << "Increment " << numb << ", sum = " << sum_numb << "\n";

       if (sum_numb > max_numb) {
            std::cout << "The sum exceeds the target ";
            std::cout << "N is: " << numb << "\n";
            std::cout << "Bye bye...\n";
            break; 
        }
       ++numb;             
    }
    return 0;
}
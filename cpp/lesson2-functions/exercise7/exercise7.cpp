#include <iostream>

int main(){
    int numb = 3;
    int steps = 0;  
    int low_lim = 1;

    while (numb!=low_lim){
        if (numb%2!=0){
            std::cout<<"Odd number"<<"\n";
            numb = numb*3+1;
            std::cout<<"Number is: "<<numb<<"\n";
        }
        else{
            std::cout<<"Even number"<<"\n";
            numb= numb/2;
            std::cout<<"Number is: "<<numb<<"\n";
        }
        ++steps;
        std::cout<<"Number of steps: "<<steps << "\n";
    }
    return 0;
}
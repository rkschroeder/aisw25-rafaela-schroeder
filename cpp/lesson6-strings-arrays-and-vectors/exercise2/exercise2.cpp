/*
Create a program that checks if a string is a Finnish register plate
A finnish register plate has 3 letters, a dash and 1 to 3 numbers.
CYI-730
AKU-313
BMW-3
GTS-991
Invalid tests: abc-123, ABCD-123, ABC-1234, ABC123
*/

#include <iostream>
#include <string>

bool check_data_format(const std::string& plate){
    if (!isupper(plate[0]) || !isupper(plate[1]) || !isupper(plate[2])){
        return false;
    }
    if (plate[3] != '-'){
        return false;
    }

    for (size_t i = 4; i < plate.size(); ++i) {
        if (!isdigit(plate[i])){ 
            return false;
        }
    }    
    return true;
}

void check_plate(const std::string& plate){
    int max_length=7;
    std::cout<<plate<<" ";
    // Check it the number of characters is bigger from the standard (max_length)
    if (plate.size() > max_length){
        std::cout<<"is an invalid plate. The number of characters is bigger than the standard (7).";
    } 
    // Here the number or characters is right (less than 7), but I will check if it is in the right format.
    // 3 letters + dash + 1 to 3 numbers
    else if(check_data_format(plate)==false){
        std::cout<<"is an invalid plate. Wrong format.";
    }else{
        std::cout<<"is a valid plate. Tervetuloa!";
    }
    std::cout<<"\n";
}

int main(){
    std::cout<<"Let's check some plates!"<<"\n";
    
    std::string plate1 = std::string("CYI") + "-" + "730";
    std::string plate2 = std::string("BMW") + "-" + "2";
    std::string plate3 = std::string("AKU") + "-" + "31";
    std::string plate4 = std::string("GTS") + "-" + "991";
    std::string plate5 = std::string("ABCD") + "-" + "730";
    std::string plate6 = std::string("aBC") + "-" + "123";
    std::string plate7= std::string("DFG") + "730";
    std::string plate8= std::string("ABCD") + "730";
    std::string plate9 = std::string("VLP") + "?" + "123";
    std::string plate10= std::string("ARA") + "-" + "?23";
    std::string plate11 = std::string("R?P") + "-" + "487";

    check_plate(plate1);
    check_plate(plate2);
    check_plate(plate3);
    check_plate(plate4);
    check_plate(plate5);
    check_plate(plate6);
    check_plate(plate7);
    check_plate(plate8);
    check_plate(plate9);
    check_plate(plate10);
    check_plate(plate11);

    std::cout<<"Done. Bye bye!";
}
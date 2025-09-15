#include <iostream>
#include <string>

int main(){
    std:: string str1 = "banana";
    std:: string str2 = "bread";
    std:: string str3 = str1+str2;
    int max_length_str = 8;

    //str.size() and str.lenght() can be used for this task
    //the outcome is the same
    if (str1.size() <max_length_str){
        std::cout << "str1 length is smaller than 8: " << str1 << "\n";
    }
    if (str2.size() <max_length_str){
        std::cout << "str2 length is smaller than 8: " << str2 << "\n";
    }
    if (str3.size() <max_length_str){
        std::cout << "str3 length is smaller than 8: " << str3 << "\n";
    }
    return 0;
}
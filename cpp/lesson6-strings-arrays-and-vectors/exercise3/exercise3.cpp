/*
Fill out a vector with Finnish (or English or other language) numbers from 1 to 99 
using a loop and couple rules
*/
#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> numbers;

    // Names for 1–19
    std::vector<std::string> ones = {
        "zero", "one", "two", "three", "four",
        "five", "six", "seven", "eight", "nine",
        "ten", "eleven", "twelve", "thirteen", "fourteen",
        "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"
    };
    
    // Names for 20, 30, etc
    std::vector<std::string> tens = {
        "", "", "twenty", "thirty", "forty",
        "fifty", "sixty", "seventy", "eighty", "ninety"
    };

    // Fill numbers 1–99
    for (int i = 1; i < 100; i++) {
        if (i < 20) {
            numbers.push_back(ones[i]);
        } else if (i % 10 == 0) {
            numbers.push_back(tens[i / 10]);
        } else {
            numbers.push_back(tens[i / 10] + "-" + ones[i % 10]);
        }
    }

    for (int i = 0; i < numbers.size(); i++) {
        std::cout << (i+1) << " = " << numbers[i] << std::endl;
    }

    return 0;
}

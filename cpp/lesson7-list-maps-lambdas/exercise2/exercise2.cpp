/*
Make a phonebook with at least 3 places to test using unordered_map.
Get user input for the person / company and print the correct number.
Here are some actual numbers for Pizza places if you want to use them in your app:
Baabel 08 5522134
Santa Maria 08 344887
Turtles 08 5555595
*/

#include <iostream>
#include <string>
#include <unordered_map>

int main() {
    // Create an unordered_map of strings
    // Key: pizza place name (string)
    // Value: phone number (string, to preserve leading zeros)
    std::unordered_map<std::string, std::string> pizza_place; 
    
    // Add entries: map each pizza place name to its phone number
    pizza_place["Baabel"] = "085522134";
    pizza_place["Santa Maria"] = "08344887";
    pizza_place["Turtles"] = "085555595";

    /*
    Iterate and print key-value pairs of unordered_map. 
    Sintax: 
    Const: Prevents modification of the element inside the loop.
    std::pair<std::string, std::string>& : Type of the loop variable. 
    In an unordered_map<std::string, std::string>, each element is a key-value pair
    */
    for (const std::pair<std::string, std::string>& x : pizza_place){
        // Print the pizza place name (key) and its corresponding phone number (value)
        std::cout << "Names and numbers for " << x.first 
                  << " is " << x.second << "\n";  
    }

    return 0;
}


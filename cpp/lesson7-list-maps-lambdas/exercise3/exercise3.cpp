/*
Exercise
Make a set filled with std::strings of your choice.
Loop through them using a range-based loop
*/

#include <iostream>
#include <string>
#include <set>

int main()
{   // Declare a set of strings and initialize it with 4 names
    std::set<std::string> str = {"Antti", "Ari", "Ritva", "Riku"};

    // Range-based for loop to iterate over each element in the set
    // 'auto const &x' declares x as a const reference to each element
    // Using const & avoids copying the string and prevents modification
    for (auto const &x : str){
        std::cout << x<<"\n"; // Print each string followed by a newline
    }

    return 0;
}
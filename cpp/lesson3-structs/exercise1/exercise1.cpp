/*
Create a PlayingCard struct. 
Playing cards have 2 properties.
It's suit as a std::string (hearts, diamonds, clubs, spades) and it's value as an int (1-13).
Create a function that prints the data of the playing card in the following format. 
Remember to include special conditions for Ace (1), Jack(11), Queen(12) and King(13):

First of all, what is struct?
Structs are a way to group several related variables into one place.
Each variable in the structure is known as a member of the structure.
Unlike an array, a struct can contain many different data types: int, string, bool, etc
*/

#include <iostream>
#include <string>

// Define the struct
struct PlayingCard {
    std::string suit;  //hearts, diamonds, clubs, spades
    int value;         //numbers:1-13
};
 
/* I am using void because the function is not returning anything. It is just printing the card suit and value. 
I am passing by value: void printCard(PlayingCard card). 
In this case, it passes a copy of the card. This works fine for small structs.
Another option is to pass by reference. Then, the function accesses the same object without making a copy
 */

void printCard(PlayingCard card) {
    // String representation of the card value
    std::string valueStr;
    
    // Check for special values and assign corresponding string
    if (card.value == 1) {
        valueStr = "Ace";
    } else if (card.value == 11) {
        valueStr = "Jack";
    } else if (card.value == 12) {
        valueStr = "Queen";
    } else if (card.value == 13) {
        valueStr = "King";
    } else {
        // For all other numbers (2-10), convert integer to string using to_string
        valueStr = std::to_string(card.value); 
    }

    //Printing...
    std::cout << valueStr << " of " << card.suit << std::endl;
}

int main() {
    PlayingCard card1 = {"hearts", 1};     
    PlayingCard card2 = {"spades", 12};  
    PlayingCard card3 = {"diamonds", 3};

    printCard(card1);
    printCard(card2);
    printCard(card3);

    return 0;
}

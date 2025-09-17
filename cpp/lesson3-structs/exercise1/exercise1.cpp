#include <iostream>
#include <string>

struct PlayingCard {
    std::string suit;  
    int value;      
};

void printCard(const PlayingCard& card) {
    std::string valueStr;

    if (card.value == 1) {
        valueStr = "Ace";
    } else if (card.value == 11) {
        valueStr = "Jack";
    } else if (card.value == 12) {
        valueStr = "Queen";
    } else if (card.value == 13) {
        valueStr = "King";
    } else {
        valueStr = std::to_string(card.value); 
    }

    std::cout << valueStr << " of " << card.suit << std::endl;
}

int main() {
    PlayingCard card1 = {"hearts", 1};     
    PlayingCard card2 = {"spades", 7};  
    PlayingCard card3 = {"diamonds", 12};

    printCard(card1);
    printCard(card2);
    printCard(card3);

    return 0;
}

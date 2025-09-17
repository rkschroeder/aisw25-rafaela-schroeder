#include <iostream>
#include "bat.hpp"

int main() {
    AnimalBat::Bat MyAnimalBat{"Bento", 5, 2.5};
    SportBat::Bat MySportBat{"Wood", 1.0, 0.5};

    std::cout << "Animal Bat(Name: " << MyAnimalBat.name << ",  Weight (Kg): " << MyAnimalBat.weight<< ")\n";
    std::cout << "Sport Bat(Name: " << MySportBat.material << ",  Weight (Kg): " << MySportBat.weight<< ")\n";

    std::cout << "Bye bye bat"<<std::endl;

    return 0;
}
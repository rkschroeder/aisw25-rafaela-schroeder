#include <iostream>
#include "yard.hpp"

//Run: g++ -std=c++17 main.cpp rectangle.cpp -o rectangle -mconsole 
//./rectangle.exe
//Run: g++ -std=c++17 main.cpp rectangle.cpp yard.cpp -o yard -mconsole
// ./yard.exe

int main()
{
    Rectangle rect1;
    Rectangle rect2;

    rect1.x = 5.0;
    rect1.y = 1.5;
    rect1.width = 10.0;
    rect1.height = 18.0;

    rect2.x = 10.0;
    rect2.y = 11.0;
    rect2.width = 12.0;
    rect2.height = 10.0;

    std::cout << "Area of the rectangle1: " << rect1.area() << std::endl;
    std::cout << "Area of the rectangle2: " << rect2.area() << std::endl;

    if (overlap(rect1, rect2))
        std::cout << "Rectangles overlap!\n";
    else
        std::cout << "Rectangles do not overlap!\n" << "\n";

    Yard yard;
    yard.base = rect1;
    yard.shack = rect2;
    std::cout << "Relative shack size: ";
    std::cout << yard.relative_shack_size();    
    return 0;
}
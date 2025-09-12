#include <iostream>
#include <iomanip>

int main()
{
  bool AurinkoPaista = true;
  char NewChar ='c';
  int NewInt = 1;
  float PiFloat = 3.14159265358979323846f; 
  double PiDouble = 3.14159265358979323846;

  // Print bool, char and int variables
  std::cout << "AurinkoPaista = " << AurinkoPaista << "\n";
  std::cout << "NewChar = " << NewChar << "\n";
  std::cout << "NewInt = " << NewInt << "\n";
 

  // Print pi with different precision
  // The idea is to show the difference between the precision using float and double
    std::cout << std::fixed;
    std::cout << std::setprecision(7); //Maximum precision for float
    std::cout << "PiFloat  = " << PiFloat << "\n";

    std::cout << std::setprecision(15); //Maximum precision for double
    std::cout << "PiDouble = " << PiDouble << "\n";

  return 0;
}
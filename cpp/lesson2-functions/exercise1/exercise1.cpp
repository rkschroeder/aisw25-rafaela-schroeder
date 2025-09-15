#include <iostream>

float multiplication(int first, float second) {
    return first * second;
}

float print_result(float result){
    return std::cout << result << "\n", result;
}

int main() {
    float result=multiplication(2, 3.1456789);
    print_result(result);
    return 0;
}
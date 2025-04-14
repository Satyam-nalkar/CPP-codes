#include <iostream>
#include "que5.hpp"

int main() {
    double number;
    
    std::cout << "Enter a positive real number (I.F format): ";
    std::cin >> number;

    FractionConverter converter(number);
    converter.convertToFraction();
    converter.displayResult();

    return 0;
}

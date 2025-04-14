#include "que5.hpp"
#include <iostream>
#include <cmath>

// Constructor
FractionConverter::FractionConverter(double number) : number(number) {}

// Function to compute the Greatest Common Divisor (GCD)
int FractionConverter::gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to convert fractional part to reduced fraction form
void FractionConverter::convertToFraction() {
    int integerPart = static_cast<int>(number);
    double fractionalPart = number - integerPart;

    if (fractionalPart == 0) {
        result = std::to_string(integerPart);
        return;
    }

    // Convert fractional part to a ratio N/D
    const int precision = 1000000; // Precision factor
    int numerator = static_cast<int>(round(fractionalPart * precision));
    int denominator = precision;

    // Reduce the fraction
    int commonDivisor = gcd(numerator, denominator);
    numerator /= commonDivisor;
    denominator /= commonDivisor;

    // Construct output format
    if (integerPart > 0)
        result = std::to_string(integerPart) + " + " + std::to_string(numerator) + " / " + std::to_string(denominator);
    else
        result = std::to_string(numerator) + " / " + std::to_string(denominator);
}

// Function to display the final result
void FractionConverter::displayResult() const {
    std::cout << "Output: " << result << std::endl;
}

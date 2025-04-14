#ifndef FRACTIONCONVERTER_HPP
#define FRACTIONCONVERTER_HPP

#include <string>

class FractionConverter {
private:
    double number;
    std::string result;

    int gcd(int a, int b);

public:
    FractionConverter(double number);
    void convertToFraction();
    void displayResult() const;
};

#endif

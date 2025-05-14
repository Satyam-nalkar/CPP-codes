#include <iostream>
#include "factor.hpp"
#include <cmath>
using namespace std;

QuadraticFactorizer::QuadraticFactorizer(double a, double b, double c)
    : a(a), b(b), c(c) {}

void QuadraticFactorizer::computeRoots() {
    double D = b * b - 4 * a * c;
    complex<double> sqrtD = sqrt(complex<double>(D, 0));
    z1 = (-b + sqrtD) / (2 * a);
    z2 = (-b - sqrtD) / (2 * a);
}

void QuadraticFactorizer::printFactorizedForm() {
    if (a != 1)
        cout << "(" << a << "x";
    else
        cout << "(x";

    if (z1.real() != 0)
        cout << (z1.real() >= 0 ? "+" : " ") << z1.real();
    if (z1.imag() != 0)
        cout << (z1.imag() >= 0 ? "+" : " ") << z1.imag() << "i";
    cout << ")";

    cout << "(x";
    if (z2.real() != 0)
        cout << (z2.real() >= 0 ? "+" : " ") << z2.real();
    if (z2.imag() != 0)
        cout << (z2.imag() >= 0 ? "+" : " ") << z2.imag() << "i";
    cout << ")";
}

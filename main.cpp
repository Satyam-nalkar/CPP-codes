#include<iostream>
#include "factor.hpp"

int main() {
    double a,b,c;
    cin >> a >> b >> c;

    QuadraticFactorizer q(a,b,c);
    q.computeRoots();
    q.printFactorizedForm();
    cout << endl;
    return 0;

}
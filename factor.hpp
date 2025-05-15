#include<iostream>
#include <complex>
using namespace std;

class QuadraticFactorizer{
   private:
   double a,b,c;
   complex<double> z1, z2;
   public:
   QuadraticFactorizer(double a, double b, double c);
   void computeRoots();
   void printFactorizedForm();
   
   
};

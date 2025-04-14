#include<iostream>

using namespace std;
int main() {

 float c;
 float f;
 cout << "Enter temperature in Celsius: ";
 cin >> c;
//  f = (c * 9/5) + 32;
f=(1.8*c) + 32;
//  cout << "Temperature in Fahrenheit: " << f << endl;
cout<< f << endl;
 return 0;
  
}
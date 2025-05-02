#include<iostream>
using namespace std;
 
// function definition 

double sum(double a, double b){
 double s = a + b;
 return s;
}

int minOfTwo(int a, int b){
   if(a < b){
    return a;
   }    
   else{
    return b;
   }
}

int main()
{
    // function call
     cout << "min = " << minOfTwo(5,3) << endl; //arguments
     cout << sum(10.66,5.99);  
    return 0;
}


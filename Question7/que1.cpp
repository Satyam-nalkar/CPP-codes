#include<iostream>
using namespace std;

int sumOfDigits(int num){
    int digitSum = 0;

   
    while(num > 0){
        int lastDig = num % 10;
        num = num / 10;
        digitSum = digitSum + lastDig; 
    }
    return digitSum;
}

 int main(){
    cout << "sum = " << sumOfDigits(2356)<< endl;
  return 0;
}
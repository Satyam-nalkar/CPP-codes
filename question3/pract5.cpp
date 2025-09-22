#include<iostream>
using namespace std;

int main(){
    int n = 9;
    cout <<"Table of a number"<< endl;
    for(int i = 1; i <= 10; i++){
        int a = i * n;
        cout << a << endl;
    }
    return 0;
}
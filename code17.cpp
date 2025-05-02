#include<iostream>
using namespace std;
int main()
{
    int n = 5;
    int factor = 1;
    for(int i=n; i>=1; i--){
        factor *= i;
    }
    cout << factor << endl;
    return 0;  
} 
#include <iostream>
using namespace std;

int main(){
    try
    {
        int a,b;
        cout << "Enter the number for variable a" << endl;
        cin >> a; 
        cout << "Enter the number for variable b" << endl;
        cin >> b;

        if(b == 0)
            throw "Divide by zero not allowed";
        cout <<"Division = "<< a / b;
    }
    catch(const char* msg)
    {
        cout << msg;
    }
}
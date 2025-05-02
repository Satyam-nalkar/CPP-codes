#include<iostream>
using namespace std;
 
// function definition 
int printHello(){
    cout << "hello\n";
    return 3;
}
int main()
{
    // function call
    int val = printHello();
    cout << "val = " << val << endl;
    return 0;
}


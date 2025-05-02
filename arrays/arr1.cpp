#include<iostream>
using namespace std;
int main()
{
    int marks[5]={99,100,54,36,88};
    // double price[]={98.99,105.67,30.88};
    // cout << marks[0] << endl;
    // cout << marks[1] << endl;
    // cout << marks[2] << endl;
    // cout << marks[0] << endl;
    // cout << marks[4] << endl;
    int size = 5;
    // cout << sizeof(marks) / sizeof(int) << endl;
    for (int i = 0; i < size; i++)
    {
       cout << marks[i] << endl;
    }
    
    return 0;
}
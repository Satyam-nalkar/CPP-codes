#include<iostream>
using namespace std;
int main()
{     
    int n = 5;
    int sum =0;
    for(int i=1; i <=n; i++)
    {
        if(i%2 !=0)
        {
            cout << i << " "<<endl ; 
            sum += i;
        }
    }
    cout << "sum =" << sum <<endl; 
    return 0;
}
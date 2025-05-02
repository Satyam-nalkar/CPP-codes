#include<iostream>
using namespace std;
int main()
{     
    int n = 100;
    int sum =0;
//    for(int i = 1; i <=n; i++)
//    {
//       sum += i;
//    }
  int i;
    i=1;
    while(i <= n)  
    {
       sum += i;
       i++;
    }
   cout << "sum = "<< sum <<endl;
    return 0;
}
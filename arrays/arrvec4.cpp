#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {10, 20, 30, 40,50};
    
    // Accessing using operator[]
    cout << "Element at index 2 using []: " << v[2] << endl;
    cout << "Element at index 3 using []: " << v[3] << endl;
    cout << "Element at index 1 using []: " << v[1] << endl;
    cout << "Element at index 4 using []: " << v[4] << endl;
    
    // Accessing using at()
    cout << "Element at index 3 using at(): " << v.at(3) << endl;
    
    return 0;
}
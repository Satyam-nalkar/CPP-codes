#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {10, 20, 30, 40,50,60,1,2,3,4,5,6,7,8,9,10,11};
    
    // Accessing using operator[]
    cout << "Element at index 2 using []: " << v[2] << endl;
    cout << "Element at index 3 using []: " << v[3] << endl;
    cout << "Element at index 1 using []: " << v[1] << endl;
    cout << "Element at index 4 using []: " << v[4] << endl;
    cout << "Element at index 6 using []: " << v[6] << endl;
    cout << "Element at index 7 using []: " << v[7] << endl;
    cout << "Element at index 8 using []: " << v[8] << endl;
    cout << "Element at index 9 using []: " << v[9] << endl;
    cout << "Element at index 10 using []: " << v[10] << endl;
    cout << "Element at index 11 using []: " << v[11] << endl;
    cout << "Element at index 12 using []: " << v[12] << endl;
    cout << "Element at index 13 using []: " << v[13] << endl;
    cout << "Element at index 14 using []: " << v[14] << endl;
    cout << "Element at index 15 using []: " << v[15] << endl;
    cout << "Element at index 16 using []: " << v[16] << endl;
    cout << "Element at index 17 using []: " << v[17] << endl;
    cout << "Element at index 18 using []: " << v[18] << endl;
    // Accessing using at()
    cout << "Element at index 3 using at(): " << v.at(3) << endl;
    cout << "Element at index 1 using at(): " << v.at(1) << endl;
    cout << "Element at index 2 using at(): " << v.at(2) << endl;
    cout << "Element at index 4 using at(): " << v.at(4) << endl;
    cout << "Element at index 5 using at(): " << v.at(5) << endl;
    
    return 0;
}
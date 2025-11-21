#include <iostream>
#include <vector>
using namespace std;
int main() {
    
    vector<int> v1(3, 5);
    
    for (int x : v1) {
        cout << x << " ";
    }
    
    cout << endl;
    // Declares vector with given size
    // and fills it with a value
    vector<int> v2(5);  
    

    for (int x = 1 ; x <= v2.size(); x++) {
        cout << x << " ";
    }
    
    cout << endl;
    
    // Initializes vector using 
    // initializer list.
    vector<int> v3 = {1, 2, 3};  
    
    // Print items of v3
    for (int x : v3) {
        cout << x << " ";
    }

    cout << endl;

    vector<int> v4(3, 6);

    for (int x : v4) {
        cout << x << " ";
    }

    return 0;
}
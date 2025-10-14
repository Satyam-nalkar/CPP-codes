#include <iostream>
using namespace std;

int main() {
    // Declare and initialize an array of integers
    int numbers[7] = {10, 20, 30, 40, 50, 60, 70};

    // Access and display array elements
    cout << "Array elements: ";
    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";
    }

    cout << "\nThird element: " << numbers[2]; // Access by index
    return 0;
}

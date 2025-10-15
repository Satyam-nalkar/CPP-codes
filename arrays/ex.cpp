#include <iostream>
using namespace std;

int main() {
    // Declare and initialize an array of integers
    int numbers[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    // Access and display array elements
    cout << "Array elements: ";
    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";
    }

    cout << "\nThird element: " << numbers[2]; // Access by index
    cout << "\nsixth element: " << numbers[5]; // Access by index
    return 0;
}

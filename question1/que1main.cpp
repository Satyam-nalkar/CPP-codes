#include <stdio.h>
#include "que1.hpp"

int main() {
    int number, base;
    
    printf("Enter a positive integer and the base: ");
    scanf("%d %d", &number, &base);
    
    if (base < 2 || base > 16) {
        printf("Invalid base! Please enter a base between 2 and 16.\n");
        return 1;
    }

    convertToBase(number, base);
    return 0;
}

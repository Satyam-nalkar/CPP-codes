#include<stdio.h>
#include "que1.hpp"
void convertToBase(int number, int base){
    char result[50];
    int index = 0;

    char digits[] = "0123456789ACDEF";

    if(number == 0){
        printf("0\n");
        return;
    }

   while(number > 0){
    result[index++] = digits[number % base];
    number /= base;
   }
 
   for(int i = index -1; i >= 0; i--){
    printf("%c",result[i]);
    }
    printf("\n");
}

  
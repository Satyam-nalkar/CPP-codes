#include<stdio.h>
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

  int main(){
    int number,base;
     
    printf("enter a positive integer and the base:");
    scanf("%d %d",&number ,&base );
    if(base < 2 || base > 16){
        printf("Invalide base! Please enter a base between 2 and 16.\n");
        return 1;
    }

    convertToBase(number, base);
    return 0;
  }
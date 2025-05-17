#include "symmetric.hpp"
#include<iomanip>
#include<iostream>
using namespace std;

bool isValidDate(int day, int month, int year){
    int daysInMonth[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    if(month < 1 || month > 12) return false;
    if(year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
    daysInMonth[1]=29;
    if(day < 1 || day > daysInMonth[month -1]) return false;
    return true;
}

bool isSymmetric(int day, int month, int year){
    int d1 = day / 10 , d2 = day % 10;
    int m1 = month / 10, m2 = month % 10;
    int y1 = (year / 1000) % 10, y2 = (year / 100) % 10;
    int y3 = (year / 10) %10 , y4 = year % 10;

    return d1 == y4 && d2 == y3 && m1 == y2 && m2 == y1;
}


void SymmetricDateFinder::printSymmetricDates(){
  for(int year = 2001; year <= 2100 ; year++){
    for(int month = 1; month <=12; month ++){
        for(int day =1; day <= 31; day++){
            if(isValidDate(day, month,year)&& isSymmetric(day,month,year)){
                cout << setw(2) << setfill('0') << day << "-"
                << setw(2) << setfill('0') << month << "-"
                << year << endl;
            }
        }
    }
  }
}
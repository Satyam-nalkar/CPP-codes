#include<iostream>
#include "que2.hpp"
using namespace std;

int main(){
    string filename;
    cout << "enter the filename" << endl;
    cin >> filename;
    analyzeFile(filename);
    return 0;
}

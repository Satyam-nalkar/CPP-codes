#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout << "enter the character\n";
    cin >> ch;  
    
    //implicite conversion
    if(ch >= 97 && ch < 122){
    // if(ch >= 'a' && ch < 'z'){
    cout << "Lowercase chara\n";
    }else{
    cout << "Uppercase chara\n";     
    }

    return 0;
}
#include<iostream>
#include <vector>
using namespace std;

int main(){
    // vector<char> vec {'a','b','c','d','e'};
 
  
    // // for(char val : vec){
    // //     cout << val << " ";
    // // }   
    // // cout << endl;
    // // vector<int>vec;
    // cout << "size = " << vec.size() << endl;

  vector<int>vec;

  
  vec.push_back(25);
  vec.push_back(35);
  vec.push_back(45);
  vec.push_back(55);
  vec.push_back(65);
  vec.push_back(75);
  vec.push_back(85);
  vec.push_back(95);
  vec.push_back(105);
  vec.push_back(115);
  vec.push_back(120);
  cout << "after push back size = " << vec.size() << endl;
  vec.pop_back();
    // cout << val << endl;
    cout << vec.front() << endl;
    cout << vec.back() << endl;
  
     cout << vec.at(1) << endl;
    return 0;
}
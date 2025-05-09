#include<iostream>
#include<vector>
using namespace std;
int main(){

    // vector<int>vec = {1,2,3};
    // vector<int> vec(5,0);
    // cout << vec[0] << endl;
    // cout << vec[1] << endl;
    // cout << vec[2] << endl;
    // cout << vec[3] << endl;

    // vector<char> vec = {'a','b','c','d','e'};
    vector<int>vec;
    cout << "size = " << vec.size() << endl;
    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45);
    cout << "after push back size = " << vec.size() << endl;

    vec.pop_back(); // delete the last element 
    // for(int val : vec){
    //     cout << val << endl;
    // }
    cout <<"front value is = "<< vec.front() << endl;
    cout <<"back value is = "<< vec.back() << endl;
    cout <<"at index value = "<<vec.at(1) << endl;
    return 0;
}
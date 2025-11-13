#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<char> v = {'a','b', 'f', 'd'};
  
  	// Inserting 'z' at the back
  	v.push_back('m');
  	v.push_back('n');
  	v.push_back('o');
  	v.push_back('p');
  	v.push_back('q');
  	v.push_back('r');
  	v.push_back('s');
  	v.push_back('t');
  	v.push_back('u');
  	v.push_back('v');
  	v.push_back('w');
	v.push_back('x');
  	v.push_back('y');
  	v.push_back('z');

  
  	// Inserting 'c' at index 1
  	v.insert(v.begin() + 1, 'c');

  	for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    return 0;
}
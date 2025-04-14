#include<iostream>
#include<fstream>
#include "que2.hpp"
using namespace std;

void analyzeFile(const string &filename){
    ifstream file(filename);
    if(!file){
        cout << "Error opening file:" << filename <<endl;
    }
    int lineCount = 0,wordCount = 0,charCount = 0, sentenceCount = 0 ;
    string line;  
    bool inWord = false;

   while(getline(file, line)){
    lineCount ++ ;
    charCount += line.length() +1 ;

    for(char ch: line){
        if(isspace(ch)){
            inWord = false; 
        }
        else{
            if(!inWord){
                wordCount++;
                inWord = true; 
            }
        }
        if(ch == '.' || ch == '!' || ch == '?'){
            sentenceCount++;
        }
    }

   }
  file.close();

  cout << "Number of Lines:" << lineCount << endl;
  cout << "Number of Words:" << wordCount << endl;
  cout << "Number of Characters:" << charCount << endl;
  cout << "Number of Sentence:" << sentenceCount << endl;
 
}

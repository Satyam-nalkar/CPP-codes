#include<iostream>
#include<string>
using namespace std;

class Teacher{
private:
double salary;
 
  public:
  
    //proerties
    string name;
    string dept;
    string subject;
  Teacher(){
    dept = "Computer science";
  }

  Teacher(string name,string dept, string subject,double salary){
     this->name = name;
     this->dept = dept;
     this->subject = subject;
     this->salary = salary;
  }

  //copy constructor
 Teacher(Teacher & orgObj) {  //pass by reference
   this->name = orgObj.name;
   this-> dept = orgObj.dept;
   this-> subject= orgObj.subject;
   this-> salary= orgObj.salary;
 }

   
  //methods / member function
  void changeDept(string newDept){
    dept = newDept;
  }

   void getInfo(){
    cout << "name :" << name << endl;
    cout << "sunject :" << subject << endl;
   }

//  class Account {
//  private:
//    double balance ;
//    string password;

//   public:
//    string accountId;
//    string username;

//  }; 

};
int main() {
    Teacher t1("satyam","computer science","c++",20000);
    t1.getInfo();
    return 0;
}
 
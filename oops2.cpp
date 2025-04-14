#include<iostream>
#include<string>
using namespace std;

       class Teacher{
   //properties  //(atributes)
  private:
  double salary;


   public:
  string name;
  string dept;
  string subject;

//   Teacher(){  //non parameterized constructor
//     cout <<  "Hi I am construtor\n"; 
//   }

  Teacher(string name, string dept, string subject, double salary){  //parameterized constructor
      this->name = name;
      this->dept = dept;
      this->subject = subject;
      this->salary = salary; 
}
   Teacher(Teacher &orgObj){

   }


   //methods  //(member functin)
  void changeDept(string newDept){
    dept =  newDept; 
  }

    void getInfo(){
        cout << "name :" << name <<endl;
        cout << "subject :" << subject <<endl;

    }

  
};

 int main() {
    Teacher t1("satyam" , "computer science", "c++", 25000);
//   t1.getInfo();

  Teacher t2(t1);  // default copy constructor invoke
  t2.getInfo();
  return 0;
} 
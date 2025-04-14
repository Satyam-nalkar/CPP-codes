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



   //methods  //(member functin)
  void changeDept(string newDept){
    dept =  newDept; 
  }

  //setter
    void setSalary(double s){
      salary = s;
    }

    //getter
    double getSalary(){
      return salary;
    }
  
};


int main() {
    Teacher t1;
    t1.name = "satyam";
    t1.subject = "c++";
    t1.dept = "computer science";
    t1.setSalary(25000);

    cout << t1.name << endl;
    cout << t1.getSalary() << endl;
  return 0;
}
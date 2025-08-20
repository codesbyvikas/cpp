//Constructor: automatically  called when creating a object
// compiler can itself create a constructor
//constructor functions have same name as class
// they dont have a return type;
//called automatically once at object creation
//memory allocation happend when constructor is called 
//classes do not have memory memory only allocated to objects
#include<bits/stdc++.h>
using namespace std;

class Teacher {
private: 
    int salary;
public:
    //constructor: Non-paramatrizes
    Teacher() {
        cout<<"HI, Im a constructor" <<endl;
        college="DJSCE";
    }

    //constructor:paramatrizes
    Teacher(string name, string dept, string college, string subject) {
        this->name=name;
        this->dept=dept;
        this->college=college;
        this->subject=subject;
    }

    //copy constructor
    Teacher(Teacher &orgOb) {
        this->name=orgOb.name;
    }

    string name;
    string dept;
    string college;
    string subject;

    void changeDept(string newDept) {
        dept=newDept;
    }

    void setSalary(int newSalary) {
        salary=newSalary;
    }
    
    int getSalary() {
        return salary;
    }
};

int main() {
    Teacher t1("Divya","IT","DJSCE","Maths");
    Teacher t2;
    Teacher t3(t1);

    t1.name= "divya";
    t1.dept="computer";
    t1.changeDept("IT");
    t1.setSalary(50000);

    cout<<t1.getSalary()<<endl;

    cout<<t1.subject<<endl;
    cout << "name " << t2.name;


    return 0;
}


//new keyword is used to allocate  memory dynamically
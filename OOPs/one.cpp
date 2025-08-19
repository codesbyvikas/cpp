//Objects are entities in the real world
//class is like a blueprint of these entities

//syntax

#include<bits/stdc++.h>
using namespace std;

class Teacher {
private: 
    int salary;
public:
//public: data and methods are accessible to everyone
//private: only inside class
//protected: inside class and to its derived class
    //properties/attributes
    string name;
    string dept;
    string subject;

    //methods
    void changeDept(string newDept) {
        dept=newDept;
    }

    //setter: to set private values
    void setSalary(int newSalary) {
        salary=newSalary;
    }
    
    //getter: to get private values
    int getSalary() {
        return salary;
    }
};

int main() {
    Teacher t1;
    Teacher t2;
    Teacher t3;

    t1.name= "divya";
    t1.dept="computer";
    t1.changeDept("IT");
    t1.setSalary(50000);

    cout<<t1.getSalary()<<endl;

    cout<<t1.dept<<endl;


    return 0;
}

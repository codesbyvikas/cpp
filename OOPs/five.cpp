#include<bits/stdc++.h>

using namespace std;

class Student {
public:
    string name;
    double* cgpaPtr;

    Student(string name, double cgpa) {
        this->name=name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;

    }

    //shallow copy const
    // Student(Student &Obj) {
    //     this->name=Obj.name;
    //     this->cgpaPtr=Obj.cgpaPtr;
    // }

    //deep copy const
    Student(Student &Obj) {
        this->name=Obj.name;
        cgpaPtr= new double;
        *cgpaPtr=*Obj.cgpaPtr;
    }

    //Destructor
    //for dynamically allocated memory
    //avoid memory leak
    ~Student() {
        cout<<"deleted";
        delete cgpaPtr;
    }

    void getInfo() {
        cout<<"name: " << name <<endl;
        cout<<"cgpa: " << *cgpaPtr <<endl;

    }
};

int main() {
    Student s1("rahul kumar", 8.9);
    s1.getInfo();

    return 0;
}
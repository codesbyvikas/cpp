//Inheritence
//for code resuability

#include<bits/stdc++.h>

using namespace std;

class Person {
public:
    string name;
    int age;

    // Person(string name, int age) {
    //     this->name=name;
    //     this->age=age;
    // }

    //This will be called first
    Person(){
        cout<<"This is parent.."<<endl;
    }
    ~Person(){
        cout<<"This is parent dest.."<<endl;
    }

};

class Student: public Person {
public:
     int rollNo;

     void getInfo() {
        cout<<"name: "<<name<<endl;
        cout<<"rollNo: "<<rollNo<<endl;
        cout<<"age: "<<age<<endl;
     }

     Student() {
        cout<<"This is child.."<<endl;
     }

     //This will be called first
     ~Student() {
        cout<<"This is child dest.."<<endl;
     }
};

int main() {
    Student s1;
    s1.name="rahul";
    s1.age=21;
    s1.rollNo=1234;

    s1.getInfo();
    return 0;
}


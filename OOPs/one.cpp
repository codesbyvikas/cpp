//Objects are entities in the real world
//class is like a blueprint of these entities

//syntax

#include<bits/stdc++.h>
using namespace std;

class Teacher {
    //properties/attributes
    string name;
    string dept;
    string subject;

    //methods
    void changeDept(string newDept) {
        dept=newDept;
    }
};

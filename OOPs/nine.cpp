// What is an Abstract Class?

// An abstract class is a class that cannot be instantiated (you cannot create objects of it).

// It is meant to be a base class that defines a common interface but leaves some implementation details to derived (child) classes.

// It can have:

// Abstract methods (only declaration, no body).

// Normal methods (with body).

// Data members.

// 🔹 Abstract Class in C++

// C++ does not have a keyword abstract. Instead, you declare at least one pure virtual function to make a class abstract.

#include<bits/stdc++.h>
using namespace std;


class Animal {
public:
    virtual void sound() = 0;   // pure virtual function
    void eat() { cout << "Eating...\n"; }  // normal function
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Bark\n";
    }
};

int main() {
    // Animal a; ❌ Error: Cannot create object of abstract class
    Animal* a = new Dog();
    a->sound();  // Bark
    a->eat();    // Eating...
}

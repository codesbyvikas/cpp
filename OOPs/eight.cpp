//Polymorphism
// -ability of objects to take on diff forms or behave in diff ways depending on the context in which they are used

// 🔹 Types of Polymorphism
// 1. Compile-time Polymorphism (Static Binding / Early Binding)

// Decided at compile time.
// Achieved by:

// Function Overloading → same function name, different parameter list.

// Operator Overloading → redefining operators for user-defined types (C++ feature).

// 📌 Example (Function Overloading in C++):

#include<bits/stdc++.h>

using namespace std;

class Print {
public:
    void show(int x) {
        cout << "Integer: " << x << endl;
    }
    void show(string s) {
        cout << "String: " << s << endl;
    }
};


// 2. Run-time Polymorphism (Dynamic Binding / Late Binding)

// Decided at runtime.
// Achieved using:

// Method Overriding → base class function is redefined in derived class.

// Implemented in C++ using virtual functions.

// 📌 Example (Method Overriding in C++):

class Animal {
public:
    virtual void sound() {   // virtual for runtime binding
        cout << "Some sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Bark" << endl;
    }
};

class Cat : public Animal {
public:
    void sound() override {
        cout << "Meow" << endl;
    }
};

int main() {
    Animal* a;    // Base class pointer
    Dog d; Cat c;

    a = &d; a->sound();   // Bark
    a = &c; a->sound();   // Meow
}

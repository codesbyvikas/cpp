/*Types of Inheritence
    Single  child->parent
    multilevele: child->parent->grandparent
    multiple: once cleass inherits from multiple clasess child->father,mother
    hierarchical inheritence: multiple inherits from single
    hybrid: Combination of two or more types of inheritance.
    */

#include<bits/stdc++.h>

using namespace std;

// Multiple Inheritance

class Animal {
public:
    void eat() { cout << "Eating...\n"; }
};

class Dog : public Animal {
public:
    void bark() { cout << "Barking...\n"; }
};


// . Multilevel Inheritance

class Animal {
public:
    void eat() { cout << "Eating...\n"; }
};

class Mammal : public Animal {
public:
    void walk() { cout << "Walking...\n"; }
};

class Dog : public Mammal {
public:
    void bark() { cout << "Barking...\n"; }
};

// Hierarchical Inheritance

class Animal {
public:
    void eat() { cout << "Eating...\n"; }
};

class Dog : public Animal {
public:
    void bark() { cout << "Barking...\n"; }
};

class Cat : public Animal {
public:
    void meow() { cout << "Meowing...\n"; }
};


// . Hybrid Inheritance

class Animal {
public:
    void eat() { cout << "Eating...\n"; }
};

class Mammal : public virtual Animal {
public:
    void walk() { cout << "Walking...\n"; }
};

class Pet : public virtual Animal {
public:
    void play() { cout << "Playing...\n"; }
};

class Dog : public Mammal, public Pet {
public:
    void bark() { cout << "Barking...\n"; }
};
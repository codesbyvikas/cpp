#include <bits/stdc++.h>
using namespace std;

class A {
public:
    static int x;   // declaration
    void incX() {
        x += 1;
    }
};

// Definition (required)
int A::x = 0;

int main() {
    A obj1, obj2;

    obj1.incX();   // increases x to 1
    obj2.incX();   // increases x to 2

    cout << obj2.x<< endl; // Output: 2
}

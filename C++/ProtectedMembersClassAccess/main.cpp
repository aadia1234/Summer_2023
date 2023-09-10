#include <iostream>
#include "Base.h"
#include "Derived.h"
using namespace std;

int main() {
    cout << "=== Base member access from base objects ===" << endl;
    Base base;
    base.a = 100;
    // base.b = 200; // Compiler error
    // base.c = 300; // Compiler error

    cout << "=== Base member access from derived objects ===" << endl;
    Derived d;
    d.a = 100;
    // d.b = 200; // Compiler error
    // d.c = 300; // Compiler error

    cout << "\n===============\n" << endl;
    Base b {100};
    Derived dd {1000};

    return 0;
}
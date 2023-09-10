#include <iostream>
#include "Derived.h"

Derived::Derived(): Base {}, doubled_value {0} { std::cout << "Derived no-args constructor" << std::endl; }

Derived::Derived(int x): Base {x}, doubled_value {x * 2} { std::cout << "Derived (int) overloaded constructor" << std::endl; }

Derived::~Derived() { std::cout << "Derived destructor" << std::endl; }

void Derived::access_base_members() {
    a = 100;
    b = 200;
    // c = 300; // Compiler error
}
#include <iostream>
#include "Derived.h"

Derived::Derived(): Base {}, doubled_value {0} { std::cout << "Derived no-args constructor" << std::endl; }

Derived::Derived(int x): Base {x}, doubled_value {x * 2} { std::cout << "Derived (int) overloaded constructor" << std::endl; }

Derived::Derived(const Derived& other): Base {other} { std::cout << "Derived copy constructor " << std::endl; };

Derived::~Derived() { std::cout << "Derived destructor" << std::endl; }

Derived& Derived::operator=(const Derived& rhs) {
    std::cout << "Derived operator=" << std::endl;

    if (this != &rhs) {
        Base::operator=(rhs);
        this->doubled_value = rhs.doubled_value;
    }

    return *this;
}

void Derived::access_base_members() {
    a = 100;
    b = 200;
    // c = 300; // Compiler error
}
#include <iostream>
#include "Base.h"

Base::Base(): value {0} { std::cout << "Base no-args constructor" << std::endl; }

Base::Base(int x): value {x} { std::cout << "Base (int) overloaded constructor" << std::endl; }

Base::Base(const Base& other): value {other.value} { std::cout << "Base copy constructor" << std::endl; }

Base::~Base() { std::cout << "Base destructor" << std::endl; }

Base& Base::operator=(const Base& rhs) {
    std::cout << "Base operator= " << std::endl;

    if (this != &rhs) {
        this->value = rhs.value;
    }
        
    return *this;
}

void Base::display() { std::cout << a << ", " << b << c << std::endl;}
#include <iostream>
#include "Base.h"

Base::Base(): value {0} { std::cout << "Base no-args constructor" << std::endl; }

Base::Base(int x): value {x} { std::cout << "Base (int) overloaded constructor" << std::endl; }

Base::~Base() { std::cout << "Base destructor" << std::endl; }

void Base::display() { std::cout << a << ", " << b << c << std::endl;}
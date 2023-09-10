#include <iostream>
#include "Shallow.h"

Shallow::Shallow(const Shallow &source): data {source.data} { std::cout << "Copy constructor - shallow copy" << std::endl; }

Shallow::Shallow(int d) {
    data = new int;
    *data = d;
}

Shallow::~Shallow() {
    delete data;
    std::cout << "Destructor freeing data" << std::endl;
}

void Shallow::set_data_value(int d) { *data = d; }

int Shallow::get_data_value() { return *data; }
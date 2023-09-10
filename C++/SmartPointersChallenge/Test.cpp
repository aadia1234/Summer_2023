#include <iostream>
#include  "Test.h"

Test::Test(int data): data {data} { std::cout << "Test constructor (" << this->data << ")" << std::endl; }

Test::Test(): Test(0) {}

Test::~Test() { std::cout << "Test destructor (" << this->data << ")" << std::endl; }

int Test::get_data() const { return this->data; }
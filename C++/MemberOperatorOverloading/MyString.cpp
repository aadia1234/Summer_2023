#include <iostream>
#include <cstring>
#include "MyString.h"

MyString::MyString(const char* str): str {nullptr} {
    if (str == nullptr) {
        this->str = new char[1];
        *(this->str) = '\0';
    } else {
        this->str = new char[std::strlen(str) + 1];
        std::strcpy(this->str, str);
    }
}

// Copy constructor
MyString::MyString(const MyString &source): MyString::MyString(source.str) {}

// Move constructor
MyString::MyString(MyString &&source): str {source.str} { source.str = nullptr; }

MyString::MyString(): MyString::MyString(nullptr) {}

MyString::~MyString() { delete[] str; }

// Copy assignment
MyString &MyString::operator=(const MyString &rhs) {
    if (this != &rhs) {
        delete[] str;
        str = new char[std::strlen(rhs.str) + 1];
        std::strcpy(str, rhs.str);
    } 

    return *this;
}

// Move assignment
MyString &MyString::operator=(MyString &&rhs) {
    if (this != &rhs) {
        delete[] str;
        str = rhs.str;
        rhs.str = nullptr;
    }
    
    return *this;
}

// make string lowercase
MyString MyString::operator-() const {
    char* buff = new char[std::strlen(str) + 1];
    std::strcpy(buff, str);

    for (int i {0}; i < std::strlen(buff); i++) {
        buff[i] = std::tolower(buff[i]);
    }

    MyString temp {buff};
    delete[] buff;
    return temp;
}

// Comparing MyString
bool MyString::operator==(const MyString &rhs) const {
    return !std::strcmp(str, rhs.str);
}

// Concatenation of MyString
MyString MyString::operator+(const MyString &rhs) const {
    size_t buff_size = std::strlen(str) + std::strlen(rhs.str) + 1;
    char* buff = new char[buff_size];

    std::strcpy(buff, str);
    std::strcat(buff, rhs.str);

    MyString temp {buff};
    delete[] buff;
    return temp;
}

void MyString::display() const { std::cout << str << " : " << get_length() << std::endl; }

int MyString::get_length() const { return std::strlen(str); }

const char* MyString::get_str() const { return str; }
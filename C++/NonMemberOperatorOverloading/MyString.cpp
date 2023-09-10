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
MyString::MyString(const MyString& source): MyString::MyString(source.str) {}

// Move constructor
MyString::MyString(MyString&& source): str {source.str} { source.str = nullptr; }

MyString::MyString(): MyString::MyString(nullptr) {}

MyString::~MyString() { delete[] str; }

// Copy assignment
MyString& MyString::operator=(const MyString& rhs) {
    if (this != &rhs) {
        delete[] str;
        str = new char[std::strlen(rhs.str) + 1];
        std::strcpy(str, rhs.str);
    } 

    return *this;
}

// Move assignment
MyString& MyString::operator=(MyString&& rhs) {
    if (this != &rhs) {
        delete[] str;
        str = rhs.str;
        rhs.str = nullptr;
    }
    
    return *this;
}

void MyString::display() const { std::cout << str << " : " << get_length() << std::endl; }

int MyString::get_length() const { return std::strlen(str); }

const char* MyString::get_str() const { return str; }


// Non-member operators

// Make string lowercase
MyString operator-(const MyString& obj) {
    char* buff = new char[std::strlen(obj.str) + 1];
    std::strcpy(buff, obj.str);

    for (int i {0}; i < std::strlen(buff); i++) {
        buff[i] = std::tolower(buff[i]);
    }

    MyString temp {buff};
    delete[] buff;
    return temp;
}

// Comparing MyString
bool operator==(const MyString& lhs, const MyString& rhs) {
    return !std::strcmp(lhs.str, rhs.str);
}

// Concatenation of MyString
MyString operator+(const MyString& lhs, const MyString& rhs) {
    size_t buff_size = std::strlen(lhs.str) + std::strlen(rhs.str) + 1;
    char* buff = new char[buff_size];

    std::strcpy(buff, lhs.str);
    std::strcat(buff, rhs.str);

    MyString temp {buff};
    delete[] buff;
    return temp;
}

// Input (stream insertion)
std::ostream& operator<<(std::ostream& os, const MyString& obj) {
    os << obj.str;
    return os;
}


// Output (stream extraction)
std::istream& operator>>(std::istream& is, MyString& obj) {
    char* buff = new char[1000];
    is >> buff;
    obj = MyString {buff};
    delete[] buff;
    return is;
}
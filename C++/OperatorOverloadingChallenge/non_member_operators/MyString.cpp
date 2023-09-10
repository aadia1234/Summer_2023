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


MyString& MyString::operator=(const MyString& rhs) {
    if (this != &rhs) {
        delete[] str;
        str = new char[std::strlen(rhs.str) + 1];
        strcpy(str, rhs.str);
    }

    return *this;
}

MyString& MyString::operator=(MyString&& rhs) {
    if (this != &rhs) {
        delete[] str;
        str = rhs.str;
        rhs.str = nullptr;
    }

    return *this;
}

MyString operator-(const MyString& obj) {
    MyString temp;

    for (int i {0}; i < std::strlen(obj.str); i++) {
        temp.str[i] = std::tolower(obj.str[i]);
    }

    return temp;
}

MyString operator+(const MyString& lhs, const MyString& rhs) {
    return std::strcat(lhs.str, rhs.str);
}

MyString operator*(const MyString& obj, const int n) {
    MyString temp;

    for (int i {0}; i < n; i++) {
        temp = temp + obj;
    }

    return temp;
}


bool operator==(const MyString& lhs, const MyString& rhs) {
    return !std::strcmp(lhs.str, rhs.str);
}

bool operator!=(const MyString& lhs, const MyString& rhs) {
    return !(lhs == rhs);
}

bool operator<(const MyString& lhs, const MyString& rhs) {
    for (int i {0}; i < std::strlen(lhs.str) && i < std::strlen(rhs.str); i++) {
        if (lhs.str[i] != rhs.str[i]) {
            return lhs.str[i] < rhs.str[i];
        }
    }

    return false;
}

bool operator>(const MyString& lhs, const MyString& rhs) {
    for (int i {0}; i < std::strlen(lhs.str) && i < std::strlen(rhs.str); i++) {
        if (lhs.str[i] != rhs.str[i]) {
            return lhs.str[i] > rhs.str[i];
        }
    }

    return false;
}

MyString& operator+=(MyString& lhs, const MyString& rhs) {
    lhs = lhs + rhs;
    return lhs;
}

MyString& operator*=(MyString& obj, const int n) {
    obj = obj * n;
    return obj;
}

void MyString::display() const { std::cout << str << " : " << get_length() << std::endl; }

int MyString::get_length() const { return std::strlen(str); }

const char* MyString::get_str() const { return str; }


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
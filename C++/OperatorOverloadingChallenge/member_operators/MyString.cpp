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

MyString MyString::operator-() const {
    MyString temp;

    for (int i {0}; i < std::strlen(this->str); i++) {
        temp.str[i] = std::tolower(this->str[i]);
    }

    return temp;
}

MyString MyString::operator+(const MyString& rhs) const {
    MyString temp;
    
    std::strcat(temp.str, this->str);
    std::strcat(temp.str, rhs.str);

    return temp;
}

MyString MyString::operator*(const int n) const {
    MyString temp;

    for (int i {0}; i < n; i++) {
        temp = temp + *this;
    }

    return temp;
}


bool MyString::operator==(const MyString& rhs) const {
    return !std::strcmp(this->str, rhs.str);
}

bool MyString::operator!=(const MyString& rhs) const {
    return !(*this == rhs);
}

bool MyString::operator<(const MyString& rhs) const {
    for (int i {0}; i < std::strlen(this->str) && i < std::strlen(rhs.str); i++) {
        if (this->str[i] != rhs.str[i]) {
            return this->str[i] < rhs.str[i];
        }
    }

    return false;
}

bool MyString::operator>(const MyString& rhs) const {
    for (int i {0}; i < std::strlen(this->str) && i < std::strlen(rhs.str); i++) {
        if (this->str[i] != rhs.str[i]) {
            return this->str[i] > rhs.str[i];
        }
    }

    return false;
}

MyString& MyString::operator+=(const MyString& rhs) {
    *this = *this + rhs;
    return *this;
}

MyString& MyString::operator*=(const int n) {
    *this = *this * n;
    return *this;
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
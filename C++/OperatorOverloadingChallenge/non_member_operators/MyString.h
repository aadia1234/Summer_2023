#pragma once

class MyString {

    friend std::ostream& operator<<(std::ostream &os, const MyString& obj); // Input (stream insertion)
    friend std::istream& operator>>(std::istream &is, MyString& obj); // Output (stream extraction)

    friend MyString operator-(const MyString& obj); // returns lowercase version of str
    friend MyString operator+(const MyString& lhs, const MyString& rhs); // returns an object that concatenates the lhs and rhs
    friend MyString operator*(const MyString& obj, const int n); // returns a string that is copies n times
    friend bool operator==(const MyString& lhs, const MyString& rhs); // returns true if both str are equal
    friend bool operator!=(const MyString& lhs, const MyString& rhs); // returns true of both str are not equal
    friend bool operator<(const MyString& lhs, const MyString& rhs); // returns true if the lhs string is lexically less than the rhs string 
    friend bool operator>(const MyString& lhs, const MyString& rhs); // returns true if the lhs string is lexically greater than the rhs string
    friend MyString& operator+=(MyString& lhs, const MyString& rhs); // concatenate the rhs string to the lhs string and store the result in lhs obj
    friend MyString& operator*=(MyString& obj, const int n); // repeat the string on the lhs n times and store the result back in the lhs object
    // MyString& operator++();
    // MyString& operator++(int);
    // MyString& operator--();
    // MyString& operator--(int);

    private:
        char* str; // pointer to a char[] that holds a C-style string

    public: 
        MyString(const char* str); // overloaded constructor
        MyString(const MyString& source); // copy constructor
        MyString(MyString&& source); // move constructor
        MyString(); // no-args constructor
        ~MyString(); // destructor

        MyString& operator=(const MyString& rhs); // copy str
        MyString& operator=(MyString&& rhs); // move str

        // Getters
        void display() const;
        int get_length() const;
        const char* get_str() const;
};
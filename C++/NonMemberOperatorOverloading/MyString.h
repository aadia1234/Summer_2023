#pragma once

class MyString {
    friend bool operator==(const MyString& lhs, const MyString& rhs); // Comparing MyString
    friend MyString operator-(const MyString& obj); // Convert str to lowercase
    friend MyString operator+(const MyString& lhs, const MyString& rhs); // Concatenation of MyString
    friend std::ostream& operator<<(std::ostream &os, const MyString& obj); // Input (stream insertion)
    friend std::istream& operator>>(std::istream &is, MyString& obj); // Output (stream extraction)

    private:
        char* str; // pointer to a char[] that holds a C-style string

    public: 
        MyString(const char* str); // overloaded constructor
        MyString(const MyString& source); // copy constructor
        MyString(MyString&& source); // move constructor
        MyString(); // no-args constructor
        ~MyString(); // destructor

        MyString& operator=(const MyString& rhs); // Copy assignment
        MyString& operator=(MyString&& rhs); // Move assignment

        // Getters
        void display() const;
        int get_length() const;
        const char* get_str() const;
};
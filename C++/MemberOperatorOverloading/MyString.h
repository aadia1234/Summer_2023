#pragma once

class MyString {
    
    private:
        char* str; // pointer to a char[] that holds a C-style string

    public: 
        MyString(const char* str); // overloaded constructor
        MyString(const MyString& source); // copy constructor
        MyString(MyString&& source); // move constructor
        MyString(); // no-args constructor
        ~MyString(); // destructor

        MyString &operator=(const MyString& rhs); // Copy assignment
        MyString &operator=(MyString&& rhs); // Move assignment
        MyString operator-() const; // Convert str to lowercase
        bool operator==(const MyString& rhs) const; // Comparing MyString
        MyString operator+(const MyString& rhs) const; // Concatenation of MyString

        // Getters
        void display() const;
        int get_length() const;
        const char* get_str() const;
};
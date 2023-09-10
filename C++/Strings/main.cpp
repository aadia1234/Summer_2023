#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string cpp_string {"this is a c++ string"};
    char c_string[] {"this is a c string"};
    // c_string = cpp_string // illegal
    // strcpy(c_string, "this is a string literal"); // sets c_string to "this is a string literal", but a null terminated string is needed

    cout << cpp_string << endl << c_string << endl;


    char first_name[20] {}, last_name[20] {}, full_name[50] {}, temp[50] {};
    
    cout << "Please enter your first name: ";
    cin >> first_name;

    cout << "Please enter your last name: ";
    cin >> last_name;

    cout << "-----------------------------" << endl;

    cout << "Hello, " << first_name << " your first name has " << strlen(first_name) << " characters" << endl;
    cout << "and your last name, " << last_name << " has " << strlen(last_name) << " characters" << endl;
    
    strcpy(full_name, strcat(first_name, last_name));

    cout << "your full name has " << strlen(full_name) << " characters" << endl;

    strcpy(temp, full_name);

    cout << temp << " and " << full_name << " are the same!" << endl;

    cout << "-----------------------------" << endl;


    //c++ strings
    string s1; // Empty
    string s2 {"Aadi"}; // "Aadi"
    string s3 {s2}; // "Aadi"
    string s4 {"Aadi", 2}; // "Aa"
    string s5 {s3, 2, 4}; // "di"
    string s6 (3, 'A'); // "AAA"

    string s12 {s1 + s2}; // valid
    // string s_literal {"Aadi" + "Anand"} // invalid + is for concating c++ strings only (c++ + c string as well);
    

    cout << (s2[0] == s2.at(0)); // will return true, but at() checks bounds

    string test {"This is a test"};
    // substr(start_index, length);
    cout << test.substr(0, 4); //This
    cout << test.substr(5, 2); // is
    cout << test.substr(10, 4); // test

    // find(search_string);
    cout << test.find("This"); // 0
    cout << test.find("weqfweqf"); // string::npos (not found - no position)=

    // erase(start_index, length)
    cout << test.erase(0, 5); // is a test
    test.clear(); // empties string test

    return 0;
}
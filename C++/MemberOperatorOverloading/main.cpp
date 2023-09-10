#include <iostream>
#include <vector>
#include "MyString.h"

using namespace std;

int main() {
    MyString empty; 
    MyString larry {"Larry"}; 
    MyString stooge {larry}; 

    empty.display();
    larry.display();
    stooge.display();

    
    // Copy assignment
    MyString a {"Hello"};
    MyString b;
    b = a;


    b = "This is a test";


    // Move assignment
    MyString c {"Hello"};
    c = MyString{"Hola"};
    c = "Bonjour";

    //Move constructor
    vector<MyString> list = {};
    list.push_back({"test"});
   
    MyString larry2 {"LARRY"}, moe {"Moe"};
    MyString stooge2 = larry2;
    MyString larry3 = -larry2;
    MyString stooges = larry2 + "Moe";
    MyString two_stooges = moe + " " + "Larry";
    MyString three_stooges = moe + " " + larry2 + " " + "Curly";

    larry2.display();
    moe.display();

    cout << boolalpha << (larry2 == moe) << endl << (larry2 == stooge2) << endl;

    larry2.display();
    larry3.display();

    two_stooges.display();
    three_stooges.display();
    
    return 0;
}
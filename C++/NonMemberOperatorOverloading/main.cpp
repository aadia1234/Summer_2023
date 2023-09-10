#include <iostream>
#include "MyString.h"

using namespace std;

int main() {
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

    MyString a {"Abagail"}, b {"Brandon"}, c;

    cout << "Enter a name that starts with \"C\": ";
    cin >> c;

    cout << "The three stooges are: " << a << ", " << b << ", and " << c << endl;

    cout << "\nEnter the three stooges names separated by a space: ";
    cin >> a >> b >> c;

    cout << "The three new stooges are: " << a << ", " << b << ", and " << c << endl; 

    return 0;
}
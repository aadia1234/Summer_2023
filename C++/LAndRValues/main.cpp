#include <iostream>

using namespace std;

/*

l-value: values that have names and are addressable, modifiable if they aren't constants
r-value: non-addressable and non-assignable (anything that's not an l-value)

l-value reference: &
r-value reference: &&
*/

int main() {
    int x {100}; // x is a l-value, 100 is an r-value
    x = 1000; // 1000 is an r-value
    x += 20;

    string name; // name is an l-value
    name = "Frank";

    // 100 = x; // 100 is not an l-value


    int& ref1 = x; // ref1 is a reference to l-value
    // int r_ref = 20; // r_ref is a reference to r-value
    ref1 = 1000;

    // int &ref2 = 100; // Error - 100 is an r-value

    string s1 = "Hello ";
    string s2 = "world";
    string&& s_rref = s1 + s2;    // the result of s1 + s2 is an rvalue - use of r-value references
    s_rref += ", my friend";           // I can change the temporary string!
    cout << s_rref << endl;

    return 0;
}
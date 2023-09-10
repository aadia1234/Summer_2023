#include <iostream>

using namespace std;

int main() {
    int scores[] {100, 95, 89, 68, -1};
    int* score_ptr = scores;

    while (*score_ptr != -1) {
        cout << *score_ptr << endl;
        score_ptr++;
    }

    cout << "\n===========================" << endl;
    score_ptr = scores;
    while (*score_ptr != -1) {
        cout << *(score_ptr++) << endl;
    }

    cout << "\n===========================" << endl;
    string s1 {"Frank"}, s2 {"Frank"}, s3 {"James"};
    string *p1 = &s1, *p2 = &s2, *p3 = &s1;

    cout << boolalpha;

    cout << p1 << " == " << p2 << ": " << (p1 == p2) << endl; // false
    cout << p1 << " == " << p3 << ": " << (p1 == p3) << endl; // true
    cout << *p1 << " == " << *p2 << ": " << (*p1 == *p2) << endl; // true
    cout << *p1 << " == " << *p3 << ": " << (*p1 == *p3) << endl; // true

    p3 = &s3;
    cout << *p1 << " == " << *p3 << ": " << (*p1 == *p3) << endl; // false

    cout << "\n===========================" << endl;
    char name[] {"Frank"};

    char *char_ptr_1 {nullptr}, *char_ptr_2 {nullptr};

    char_ptr_1 = &name[0]; // F
    char_ptr_2 = &name[3]; // n

    cout << "In the string " << name << ", " << *char_ptr_2 << " is " << (char_ptr_2 - char_ptr_1) << " characters away from " << *char_ptr_1 << endl;

    return 0;
}
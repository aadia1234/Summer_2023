#include <iostream>

using namespace std;

inline int add_numbers(int a, int b);

int main() {
    int result {0};
    result = add_numbers(100, 200);
    cout << result << endl;
    return 0;
}

inline int add_numbers(int a, int b) { // simple function is denoted with "inline" - compiler does this automatically - executes code faster
    return a + b;
}
#include <iostream>

using namespace std;

unsigned long long factorial(unsigned long long n);
unsigned long long fibonacci(unsigned long long n);

int main() {
    cout << "factorial (n = 10): " << factorial(10) << endl;
    cout << "fibonacci (n = 30): " << fibonacci(30) << endl;
    return 0;
}

unsigned long long factorial(unsigned long long n) {
    return n > 0 ? n * factorial(n-1) : 1;
}

unsigned long long fibonacci(unsigned long long n) {
    return n > 1 ? fibonacci(n-1) + fibonacci(n-2) : n;
}
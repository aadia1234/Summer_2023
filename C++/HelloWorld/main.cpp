#include <iostream>

extern int x;

int main() {

    int number;
    std::cout << "Enter your favorite number between 1 and 100: ";
    std::cin >> number;
    std::cout << "Amazing! That's also my favorite number!" << std::endl;

    std::cout << x;
    return 0;
}
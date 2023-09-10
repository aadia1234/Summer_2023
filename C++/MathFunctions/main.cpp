#include <iostream>
#include <cmath> // required for math functions
#include <cstdlib> // required for rand()
#include <ctime> // required for time()

using namespace std;

int main() {

    double num {0.0}, power {0.0};
    int random_number {0}, min {1}, max {6};
    size_t count {10};
    

    cout << "Enter a number (double): ";
    cin >> num;

    cout << "The square root of " << num << " is: " << sqrt(num) << endl; 
    cout << "The cube root of " << num << " is: " << cbrt(num) << endl; 
    cout << "The sine of " << num << " is: " << sin(num) << endl; 
    cout << "The cosine of " << num << " is: " << cos(num) << endl; 
    cout << "The ceiling of " << num << " is: " << ceil(num) << endl; 
    cout << "The floor of " << num << " is: " << floor(num) << endl; 
    cout << "The round of " << num << " is: " << round(num) << endl; 

    cout << "\nEnter a power to raise " << num << " to: ";
    cin >> power;
    cout << num << " raised to the " << power << " power is: " << pow(num, power) << endl;

    cout << "\n============================\n" << endl;

    cout << "RAND_MAX on my system is: " << RAND_MAX << endl;

    srand(time(nullptr)); // seed is based on time so the rand() will output random values every time (instead of the same sequence)

    for (size_t i{1}; i <= count; i++) {
        random_number = rand() % max + min;
        cout << random_number << endl;
    }

    cout << endl;

    return 0;
}
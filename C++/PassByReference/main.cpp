#include <iostream>
#include <vector>

using namespace std;

void scale_number(int &num);
void print(const vector<int> &v);


int main() {

    int number {1000};
    scale_number(number);

    cout << number << endl;

    return 0;
}

void scale_number(int &num) { // "&" results in a reference not a value that is passed (pass by reference)
    if (num > 100) {
        num = 100;
    }
}

void print(const vector<int> &v) {
    // v.at(0) = 200; compiler error - allows us to optimize space without modifying the vector reference
    for (auto num : v) {
        cout << num << endl;
    }
}
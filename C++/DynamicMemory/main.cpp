#include <iostream>

using namespace std;

int main() {
    int* int_ptr = new int; // allocates storage on the heap for int_ptr
    cout << int_ptr << endl;
    delete int_ptr;

    size_t size {0};
    double* temp_ptr {nullptr};

    cout << "How many temperatures?: ";
    cin >> size;

    temp_ptr = new double[size]; 

    cout << temp_ptr << endl;

    delete[] temp_ptr;

    cout << endl;
    return 0;
}
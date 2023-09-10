#include <iostream>

using namespace std;

void print(const int* array, const size_t size);
int* apply_all(const int* array1, const size_t array1_size, const int* array2, const size_t array2_size);

int main() {
    const size_t array1_size {5};
    const size_t array2_size {3};

    int array1[array1_size] {1, 2, 3, 4, 5};
    int array2[array2_size] {10, 20, 30};

    cout << "Array 1: ";
    print(array1, array1_size);

    cout << "Array 2: ";
    print(array2, array2_size);

    int* results = apply_all(array1, array1_size, array2, array2_size);
    constexpr size_t results_size = array1_size * array2_size;

    cout << "Result: ";
    print(results, results_size);

    delete[] results;

    cout << endl;
    return 0;
}

void print(const int* array, const size_t size) {
    cout << "[ ";
    for (int i {0}; i < size; i++) {
        cout << *(array + i) << " ";
    }
    cout << "]" << endl;
}

int* apply_all(const int* array1, const size_t array1_size, const int* array2, const size_t array2_size) {
    int* array = new int[array1_size * array2_size];

    for (int i {0}; i < array1_size; i++) {
        for (int j {0}; j < array2_size; j++) {
            array[(j * array1_size) + i] = *(array1 + i) * *(array2 + j);
        }
    }

    return array;
}
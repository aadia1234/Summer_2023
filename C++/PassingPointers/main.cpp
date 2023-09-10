#include <iostream>
#include <string>
#include <vector>

using namespace std;

void double_data(int *ptr);
void swap(int *a, int *b);
void display(const vector<string> *v);
void display(int *array, int sentinel);

int main() {
    int value {10};
    int *int_ptr {nullptr};

    cout << "value: " << value << endl;
    double_data(&value);
    cout << "value: " << value << endl;


    cout << "\n---------------------" << endl;
    
   
    int_ptr = &value;
    double_data(int_ptr);
    cout << "value: " << value << endl;

    
    cout << "\n---------------------" << endl;

   
    int x {100}, y {200};
    cout << "\nx: " << x << "\ny: " << y << endl;

    swap(&x, &y);
    cout << "\nx: " << x << "\ny: " << y << endl;


    cout << "\n---------------------" << endl;


    vector<string> stooges {"Larry", "Moe", "Curly"};
    display(&stooges);


    cout << "\n---------------------" << endl;


    int scores[] {100, 98, 97, 79, 85, -1};
    display(scores, -1);


    delete int_ptr;
    
    cout << endl;
    return 0;
}

void double_data(int *ptr) {
    *ptr *= 2;
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void display(const vector<string> *const v) {
    // (*v).at(0) = "Funny"; // ERROR

    for (auto str : *v) {
        cout << str << " ";
    }

    // v = nullptr; // ERROR
    cout << endl;
}

void display(int *array, int sentinel) {
    while (*array != sentinel) {
        cout << *(array++) << " ";
    }
    cout << endl;
}
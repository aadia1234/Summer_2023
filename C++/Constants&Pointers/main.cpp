#include <iostream>

using namespace std;

int main() {
    int high_score {100}, low_score {65};
    const int *score_ptr_1 = &high_score; // pointers to constant: allows you to point somewhere else but not change the data (when dereferenced)
    int *const score_ptr_2 = &high_score; // constant pointer: allows you to change data (when dereferenced) but not point somewhre else]
    const int *const score_ptr_3 = &high_score; // constant pointer to constant: immutable (can't point somewhere else and cant modify data)


    // *score_ptr_1 = 86; // ERROR
    score_ptr_1 = &low_score; // OK

    *score_ptr_2 = 86; // OK
    // score_ptr_2 = &low_score; // ERROR

    // *score_ptr_3 = 86; // ERROR
    // score_ptr_3 = &low_score; // ERROR

    return 0;
}
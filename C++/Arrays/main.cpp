#include <iostream>
using namespace std;

int main() {
    char vowels[] {'a', 'e', 'i', '0', 'u'};

    cout << "The first vowel is: " << vowels[0] << endl;
    cin >> vowels[4];
    cout << "The new last vowel is: " << vowels[4] << endl;

    cout << "Name (memory address) of the array: " << vowels << endl;

    //Multidimensional arrays
    int array_2D[10][10] {};
    int array_3D[10][10][10] {};
    return 0;
}
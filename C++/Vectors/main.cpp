#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<char> int_vector(5, 10);

    cout << int_vector.at(4) << endl;
    int_vector.push_back(90);


    return 0;
}
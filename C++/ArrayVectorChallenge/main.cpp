#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vector1 {}, vector2 {};
    vector<vector<int>> vector_2d {};

    vector1.push_back(10);
    vector1.push_back(20);
    vector2.push_back(100);
    vector2.push_back(200);

    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    cout << "1st vector in vector_2d: " << vector_2d.at(0).at(0) << ", " << vector_2d.at(0).at(1) << endl;
    cout << "2nd vector in vector_2d: " << vector_2d.at(1).at(0) << ", " << vector_2d.at(1).at(1) << endl;

    vector1.at(0) = 1000;

    cout << "1st vector in vector_2d: " << vector_2d.at(0).at(0) << ", " << vector_2d.at(0).at(1) << endl;
    cout << "2nd vector in vector_2d: " << vector_2d.at(1).at(0) << ", " << vector_2d.at(1).at(1) << endl;

    cout << "Elements in vector1: " << vector1.at(0) << ", " << vector1.at(1) << endl;

    return 0;
}
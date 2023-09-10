#include <iostream>
#include <memory>
#include <vector>
#include "Test.h"

using namespace std;

unique_ptr<vector<shared_ptr<Test>>> make();
void fill(vector<shared_ptr<Test>>& vec, int num);
void display(const vector<shared_ptr<Test>>& vec);

int main() {
    unique_ptr<vector<shared_ptr<Test>>> vec_ptr;
    int num;

    cout << "How many data points do you want to enter?: ";
    cin >> num;

    vec_ptr = make();
    fill(*vec_ptr, num);
    display(*vec_ptr);

    cout << endl;
}

unique_ptr<vector<shared_ptr<Test>>> make() {
    return make_unique<vector<shared_ptr<Test>>>();
}

void fill(vector<shared_ptr<Test>>& vec, int num) {
    int t;

    for (int i = 1; i <= num; i++) {
        cout << "Enter data point #" << i << ": ";
        cin >> t;
        vec.push_back(make_shared<Test>(t));
        cout << endl;
    }
}

void display(const vector<shared_ptr<Test>>& vec) {
    for (const auto& ptr : vec) {
        cout << ptr->get_data() << ", ";
    }
    cout << endl;
}
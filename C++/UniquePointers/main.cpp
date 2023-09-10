#include <iostream>
#include <memory>
#include <vector>

using namespace std;

class Test {
    private:
        int data;

    public:
        Test(int data): data {data} { cout << "Test constructor (" << this->data << ")" << endl; }
        Test(): Test(0) {}
        ~Test() { cout << "Test destructor (" << data << ")" << endl; }

        int get_data() const { return this->data; }
};

int main() {
    unique_ptr<Test> t1 {new Test(100)};
    unique_ptr<Test> t2 = make_unique<Test>(1000);

    unique_ptr<Test> t3;
    // t3 = t1 // not allowed
    t3 = move(t1); // t3 will point to the same object as t1, and t1 will be nullptr

    if (!t1) { // !t1 => t1 == nullptr
        cout << "t1 is nullptr" << endl;
    }

    vector<unique_ptr<Test>> tests;

    tests.push_back(make_unique<Test>(500));

    for (const auto& test : tests) {
        cout << test->get_data() << endl;
    }
    return 0;
}
#include <iostream>
#include <memory>

using namespace std;

class Test {
    private:
        int data;

    public:
        Test(int data): data {data} { cout << "Test constructor (" << this->data << ")" << endl; }
        Test(): Test(0) {}
        ~Test() { cout << "Test destructor (" << this->data << ")" << endl; }

        int get_data() const { return this->data; }
};

void my_deleter(Test* ptr);

int main() {
    shared_ptr<Test> ptr1 {new Test{100}, my_deleter};
    
    return 0;
}

void my_deleter(Test* ptr) {
    cout << "Using my custom deleter function" << endl;
    delete ptr;
}
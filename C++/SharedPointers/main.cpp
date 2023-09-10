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

void func_print(shared_ptr<Test> p);

int main() {
    shared_ptr<int> p1 {new int{100}};
    cout << "Use count: " << p1.use_count() << endl;

    shared_ptr<int> p2 {p1};
    cout << "Use count: " << p1.use_count() << endl;

    p1.reset();
    cout << "Use count: " << p1.use_count() << endl;
    cout << "Use count: " << p2.use_count() << endl;

    cout << "\n===============================" << endl;

    shared_ptr<Test> ptr = make_shared<Test>(100);
    func_print(ptr);
    cout << "Use count: " << ptr.use_count() << endl;
    
    {
        shared_ptr<Test> ptr1 = ptr;
        cout << "Use count: " << ptr.use_count() << endl;
        
        {
            shared_ptr<Test> ptr2 = ptr;
            cout << "Use count: " << ptr.use_count() << endl;
            ptr.reset();
        }

        cout << "Use count: " << ptr.use_count() << endl;
    }

    cout << "Use count: " << ptr.use_count() << endl;

    cout << "\n===============================" << endl;

    vector<shared_ptr<Test>> tests;
    auto t1 = make_shared<Test>(500);

    tests.push_back(t1);

    for (const auto& test : tests) {
        cout << test->get_data() << endl;
    }
    return 0;
}

void func_print(shared_ptr<Test> p) { cout << "Use count: " << p.use_count() << endl; }
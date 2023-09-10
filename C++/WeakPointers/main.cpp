#include <iostream>
#include <memory>

using namespace std;

class B; // forward declaration

class A {
    shared_ptr<B> b_ptr;

    public:
        A() { cout << "A constructor" << endl; }
        ~A() { cout << "A destructor" << endl; }

        void set_B(shared_ptr<B>& b) { b_ptr = b; }
};

class B {
    weak_ptr<A> a_ptr; // make weak to break the strong circular reference

    public:
        B() { cout << "B constructor" << endl; }
        ~B() { cout << "B destructor" << endl; }

        void set_A(shared_ptr<A>& a) { a_ptr = a; }
};

int main() {
    shared_ptr<A> a = make_shared<A>();
    shared_ptr<B> b = make_shared<B>();

    a->set_B(b);
    b->set_A(a);
    // memory leak occurs if a and b have shared_ptrs because a and b are interrelated (destructor won't be called)
    return 0;
}
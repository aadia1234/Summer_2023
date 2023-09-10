#include <iostream>
#include "Base.h"
#include "Derived.h"
using namespace std;

int main() {
    Base b {100};
    Base b1 {b};
    b = b1;

    Derived d {100};
    Derived d1 {d};
    d = d1;
    
    return 0;
}
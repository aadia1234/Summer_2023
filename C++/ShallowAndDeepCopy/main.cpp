#include <iostream>
#include "Shallow.h"
#include "Deep.h"

using namespace std;

void display_shallow(Shallow s);
void display_deep(Deep d);

int main() {

    /* Runtime error - obj2 is a shallow copy so it points to no memory address when display_shallow is called
    Shallow obj1 {100};
    Shallow obj2 {obj1};

    display_shallow(obj1);
    obj2.set_data_value(1000);
    */
    Deep obj1 {100};
    Deep obj2 {obj1};

    display_deep(obj1);
    obj2.set_data_value(1000);

    return 0;
}

void display_shallow(Shallow s) { cout << s.get_data_value() << endl; }

void display_deep(Deep d) { cout << d.get_data_value() << endl; }
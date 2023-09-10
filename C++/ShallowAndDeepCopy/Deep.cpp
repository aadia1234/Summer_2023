#include <iostream>
#include "Deep.h"

Deep::Deep(const Deep &source): Deep {*source.data} { std::cout << "Copy constructor - deep" << std::endl; }

// Deep::Deep(const Deep &source) {
//     data = new int;
//     *data = *source.data;
//     std::cout << "Copy constructor - deep" << std::endl;
// }

Deep::Deep(int d) {
    data = new int;
    *data = d;
}



Deep::~Deep() {
    delete data;
    std::cout << "Destructor freeing data" << std::endl;
}



void Deep::set_data_value(int d) { *data = d; }

int Deep::get_data_value() { return *data; }
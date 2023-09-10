#include <iostream>
#pragma once

class I_Printable {
    friend std::ostream& operator<<(std::ostream& os, const I_Printable& obj) { obj.print(os); return os; };

    public:
        virtual void print(std::ostream& os) const = 0;
        virtual ~I_Printable() = default;
};
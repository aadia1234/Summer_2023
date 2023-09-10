#include "Base.h"

class Derived: public Base {
    using Base::Base; // allows Derived to inherit the non-special constructors from Base

    private:
        int doubled_value;

    public:
        Derived();
        // Derived(int x);
        ~Derived();
        void access_base_members();
};
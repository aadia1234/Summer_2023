#pragma once

class Base {

    private:
        int c {0};
        int value;

    protected:
        int b {0};
    
    public:
        int a {0};

        Base();
        Base(int x);
        Base(const Base& other);
        ~Base();

        Base& operator=(const Base& rhs);

        void display();

};
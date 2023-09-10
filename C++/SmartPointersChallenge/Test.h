#pragma once

class Test {

    private:
        int data;

    public:
        Test(int data);
        Test();
        ~Test();

        int get_data() const;
};
#pragma once

class Shallow {

    private:
        int* data;

    public:
        Shallow(int d);
        Shallow(const Shallow &source);
        ~Shallow();

        void set_data_value(int d);
        int get_data_value();
};
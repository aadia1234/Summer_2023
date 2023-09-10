#pragma once

class Deep {

    private:
        int *data;

    public:
        Deep(int d);
        Deep(const Deep &source);
        ~Deep();

        void set_data_value(int d);
        int get_data_value();
};
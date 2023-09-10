#pragma once

class Move {
    private:
        int *data;

    public:
        Move(int d);
        Move(const Move &source);
        Move(Move &&source) noexcept;
        ~Move();

        void set_data_value(int d);
        int get_data_value();
};
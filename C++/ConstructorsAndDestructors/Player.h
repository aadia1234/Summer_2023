#include <string>
#pragma once

class Player {
    private:
        std::string name;
        int health, xp;

    public:
        Player();
        Player(std::string name);
        Player(std::string name, int health, int xp);
        ~Player();

        void set_name(std::string n);
};
#include <string>
#pragma once

class Player {
    private:
        std::string name;
        int health;
        int xp;

    public:
        Player(std::string name = "None", int health = 0, int xp = 0);
        std::string get_name() const;
        int get_health() const;
        int get_xp() const;
        void set_name(std::string name);
        void set_health(int health);
        void set_xp(int xp);
};
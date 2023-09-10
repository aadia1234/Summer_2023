#include <string>
#pragma once

class Player {
    
    private:
        std::string name;
        int health;
        int xp;

    public:
        Player();
        Player(std::string name_val);
        Player(std::string name_val, int health_val, int xp_val);
};
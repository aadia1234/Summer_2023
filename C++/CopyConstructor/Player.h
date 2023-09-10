#include <string>
#pragma once

class Player {
    
    private:
        std::string name;
        int health;
        int xp;

    public:
        // Player();
        // Player(std::string name_val);
        Player(std::string name_val = "None", int health_val = 100, int xp_val = 0);
        Player(const Player &source); // Copy constructor
        ~Player(); // Destructor

        std::string get_name();
        int get_health();
        int get_xp();
};
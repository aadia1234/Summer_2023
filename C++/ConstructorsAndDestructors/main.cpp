#include <iostream>
#include <string>
#include "Player.h"

using namespace std;

int main() {

    {
        Player slayer;
        slayer.set_name("DOOM");
    }

    Player frank;
    Player hero = Player("Hero");
    Player villain("Villain", 100, 12);

    frank.set_name("Frank");
    hero.set_name("Hero");
    villain.set_name("Villain");

    Player* enemy = new Player();
    enemy->set_name("Enemy");

    Player* level_boss = new Player("Level Boss", 1000, 300);
    level_boss->set_name("BOSS");

    delete enemy, level_boss;

    return 0;
}
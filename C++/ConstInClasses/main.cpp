#include <iostream>
#include "Player.h"

using namespace std;

int main() {
    const Player villain {"Villain", 100, 50};
    Player hero {"Hero", 100, 15};

    cout << villain.get_name() << endl;
    cout << hero.get_name() << endl;

    // villain.set_name("Supervillain"); // not allowed - player obj is const
    hero.set_name("Superhero");
    return 0;
}
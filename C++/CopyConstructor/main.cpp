#include <iostream>
#include "Player.h"

using namespace std;

void display_player(Player p);

int main() {
    Player empty {"XXXXXXX", 100, 50};
    Player my_new_obj {empty};
    Player frank {"Frank"};
    Player hero {"Hero", 100};
    Player villain {"Villain", 100, 55};

    display_player(empty);


    return 0;
}

void display_player(Player p) {
    cout << "Name: " << p.get_name() << endl;
    cout << "Health: " << p.get_health() << endl;
    cout << "XP: " << p.get_xp() << endl;
}
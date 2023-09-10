#include <iostream>
#include "Player.h"
using namespace std;

void display_active_players();

int main() {
    display_active_players();
    Player player1;
    Player player2;
    display_active_players();

    {
        Player player3;
        display_active_players();
    }

    display_active_players();

    Player* enemy = new Player{"Enemy", 100, 100};
    display_active_players();

    delete enemy;
    display_active_players();
    return 0;
}

void display_active_players() { cout << "Active players: " << Player::get_num_players() << endl; }
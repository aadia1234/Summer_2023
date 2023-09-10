#include <string>
#include "Player.h"

int Player::num_players {0};

Player::Player(std::string name, int health, int xp): name {name}, health {health}, xp {xp} { num_players++; }

Player::Player(const Player &source): Player(source.name, source.health, source.xp) {}

Player::~Player() { num_players--; }

int Player::get_num_players() { return Player::num_players; }

std::string Player::get_name() const { return this->name; }

int Player::get_health() const { return this->health; }

int Player::get_xp() const { return this->xp; }
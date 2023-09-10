#include "Player.h"

Player::Player(std::string name, int health, int xp): name {name}, health {health}, xp {xp} {}

std::string Player::get_name() const { return this->name; }

int Player::get_health() const { return this->health; }

int Player::get_xp() const { return this->xp; }

void Player::set_name(std::string name) { this->name = name; }

void Player::set_health(int health) { this->health = health; }

void Player::set_xp(int xp) { this->xp = xp; }
#include "Player.h"
#include <iostream>

Player::Player() { std::cout << "No args constuctor called" << std::endl; }

Player::Player(std::string name) { std::cout << "String arg constuctor called" << std::endl; }

Player::Player(std::string name, int health, int xp) { std::cout << "All args constuctor called" << std::endl; }

Player::~Player() { std::cout << "Destructor called for " << name << std::endl; }


void Player::set_name(std::string n) { name = n; }
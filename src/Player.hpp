#ifndef PLAYER_HPP
#define PLAYER_HPP
#include <string>
#include <vector>


struct Attributes{
    int agility;
    int strength;
    int intelligence;
};

struct Item{
    int count;
    std::string name;
    Attributes attr;
};


class Player
{
public:
    Player();
    ~Player();
    std::string name;
    int health = 100;
    int gold = 0;
    Attributes attr;
    std::vector<Item> inventory;
};

Player::Player()
{
}

Player::~Player()
{
}


#endif
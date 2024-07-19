#include "../lib/Player.h"

Player::~Player()
{
}

void Player::Levelup()
{
    mLevel++;
}
    
//getters & setters
int Player::getLevel()
{
    return mLevel;
}
void Player::setLevel(int newLevel)
{
    mLevel = newLevel;
}
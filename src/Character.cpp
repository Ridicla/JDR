#include "../lib/Character.h"

// Getters
std::string Character::getName()  { return mName; }
int Character::getHealth()  { return mHealth; }
int Character::getDefense()  { return mDefense; }

// Setters
void Character::setName(const std::string &newName) { mName = newName; }
void Character::setHealth(int newHealth) { mHealth = newHealth; }
void Character::setDefense(int newDefense) { mDefense = newDefense; }

// Display (debuggers temporaire)
void Character::displayInfo() 
{
    std::cout << "mName: " << mName << std::endl;
    std::cout << "mHealth: " << mHealth << std::endl;
    std::cout << "mDefense: " << mDefense << std::endl;
}
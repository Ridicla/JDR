#pragma once
#include <utils.h>

class Character
{
protected:
    std::string mName;
    int mHealth;
    int mDefense;

public:
    // Constructor
    Character(const std::string &playerName, int playerHealth, int playerDefense)
        : mName(playerName), mHealth(playerHealth), mDefense(playerDefense) {}

    // Destructor
    ~Character() {}

    // Getters
    std::string getName(); 
    int getHealth();
    int getDefense();

    // Setters
    void setName(const std::string &newName);
    void setHealth(int newHealth);
    void setDefense(int newDefense);

    // Display (debuggers temporaire)
    void displayInfo();
};

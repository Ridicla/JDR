#include <utils.h>

class Player {
private:
    std::string name;
    int health;
    
    int defense;

public:
    // Constructor
    Player(const std::string& playerName, int playerHealth, int playerDefense)
        : name(playerName), health(playerHealth),defense(playerDefense) {}

    // Destructor
    ~Player() {}

    // Getters
    std::string getName() const {
        return name;
    }
    int getHealth() const {
        return health;
    }
    int getDefense() const {
        return defense;
    }

    // Setters 
    void setName(const std::string& newName) {
        name = newName;
    }
    void setHealth(int newHealth) {
        health = newHealth;
    }
    void setDefense(int newDefense) {
        defense = newDefense;
    }

    // Display (debuggers temporaire)
    void displayInfo() const {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Health: " << health << std::endl;
        std::cout << "Defense: " << defense << std::endl;
    }

};



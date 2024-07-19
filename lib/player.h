#include <Character.h>


class Player : public Character
{
private:
    int mLevel;
public:
    Player(const std::string &playerName, int playerHealth, int playerDefense, int playerLevel)
        : Character(playerName, playerHealth, playerDefense), mLevel(playerLevel){};
    ~Player();

    void Levelup();

    //getters

    int getLevel();
    void setLevel(int newLevel);

};




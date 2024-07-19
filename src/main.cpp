/*
Fichier principal du projet

*/
#include <stdio.h>
#include <iostream>
#include "../lib/utils.h"
#include "../lib/Player.h"

int main()
{   
    Player player("Hero", 100, 50, 1);

    std::cout << "Player health: " << player.getHealth() << std::endl;
    player.setHealth(80);
    std::cout << "Player health after taking damage: " << player.getHealth() << std::endl;

    player.Levelup();
    std::cout << "Player level after leveling up: " << player.getLevel() << std::endl;


    while (true)
    {
        /* code */
    }
    
    return 0;
}


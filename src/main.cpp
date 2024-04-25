/*
Fichier principal du projet

*/
#include <stdio.h>
#include <iostream>
#include <.\lib\utils.h>


int main(int argc, char const *argv[])
{

   
    // Creating a player object
    Player player("Hero", 100, 10);

    // Displaying player information
    std::cout << "Player Information:" << std::endl;
    player.displayInfo();

    // Simulating player taking damage
    std::cout << "\nPlayer took 30 damage." << std::endl;
    std::cout << "Updated Player Information:" << std::endl;
    player.displayInfo();

    return 0;
}


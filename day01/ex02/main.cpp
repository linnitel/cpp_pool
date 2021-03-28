
#include <iostream>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#define SIZE_OF_PACK 5

int main() {
    int num;
    int t;
    ZombieEvent someZombies;
    Zombie *chumpZombies;
    std::string list[] = {"The Creature", "Zombie Boss", "Little Zombie", "Zombie Hound", "Stupid Zombie"};
    std::cout << "This is a room with a zombie. Be careful." << std::endl;
    Zombie zombieBob("Bob", "Little Zombie");
    zombieBob.announce();
    std::cout << "How many Zombies do you think there are except little Bob?" << std::endl;
    std::cin >> num;
    while (std::cin.fail() || num < 1 || num > SIZE_OF_PACK) {
        std::cout << "No, this is wrong number, use positive integers grater than 0 and less than " << SIZE_OF_PACK << ":" << std::endl;
        std::cin.clear();
        std::cin.ignore(256,'\n');
        std::cin >> num;
    }
    std::cout << "Choose a type for each of the Zombies" << std::endl;
    std::cout << "0 - The Creature" << std::endl;
    std::cout << "1 - Zombie Boss" << std::endl;
    std::cout << "2 - Little Zombie" << std::endl;
    std::cout << "3 - Zombie Hound" << std::endl;
    std::cout << "4 - Stupid Zombie" << std::endl;
    for (int i = 0; i < num; i++){
        std::cout << "Zombie number " << i + 1 << " is: " << std::endl;
        std::cin >> t;
        while (std::cin.fail() || t < 0 || t > 4) {
            std::cout << "No, this is wrong type!" << std::endl;
            std::cin.clear();
            std::cin.ignore(256, '\n');
            std::cin >> t;
        }
        someZombies.setZombieType(list[t]);
        chumpZombies = someZombies.randomChump();
        chumpZombies->announce();
        std::cout << "Shoot this one!" << std::endl;
        delete chumpZombies;
    }
    std::cout << "All the zombies are dead! But wait, what about Bob?... Shoot!!!" << std::endl;
    return (0);
}
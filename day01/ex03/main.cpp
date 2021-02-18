
#include <iostream>
#include "ZombieHord.hpp"
#define SIZE_OF_PACK 10

int main() {
    int num;

    std::cout << "This is a room with a lot of zombies. Beware." << std::endl;
    std::cout << "Count Zombies, how many are there?" << std::endl;
    std::cin >> num;
    while (std::cin.fail() || num < 1 || num > SIZE_OF_PACK) {
        std::cout << "No, this is wrong number, use positive integers grater than 0 and less than " << SIZE_OF_PACK << ":" << std::endl;
        std::cin.clear();
        std::cin.ignore(256,'\n');
        std::cin >> num;
    }
    ZombieHord *zombies = new ZombieHord(num);
    zombies->announce();
    std::cout << "Shoot zombies!" << std::endl;
    delete zombies;
    std::cout << "All the zombies are dead! Congratulations, you have survived!!!" << std::endl;
    return (0);
}
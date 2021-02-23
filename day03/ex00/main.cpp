
#include <iostream>
#include "FragTrap.hpp"

int main( void ) {
    FragTrap tony("Tony");
    FragTrap fred("Fred");
    FragTrap tony2("Tony2");

    tony.rangedAttack(&fred.getName());
    fred.takeDamage(&tony.getRangeDamage());
    fred.meleeAttack(&tony.getName());
    fred.takeDamage(&fred.getMeleeDamage());
    std::cout << "But you will not win me, I will reborn!" << std::endl;
    tony = tony2;
    fred.vaulthunter_dot_exe(tony);
    return 0;
}
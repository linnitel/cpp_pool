
#include <iostream>
#include "FragTrap.hpp"

int main( void ) {
	int dmg;
    FragTrap tony("Tony");
    FragTrap fred("Fred");
    FragTrap tony2("Tony2");

    tony.rangedAttack(fred.getName());
    fred.takeDamage(tony.getRangeDamage());
    while (tony.getHitPoints() != 0) {
		fred.meleeAttack(tony.getName());
		tony.takeDamage(fred.getMeleeDamage());
	}
    std::cout << tony.getName() << ": <Nice try! But you will not kill me, I will reborn!>" << std::endl;
    tony = tony2;
    dmg = fred.vaulthunter_dot_exe(tony.getName());
	tony.takeDamage(dmg);
	std::cout << tony.getName() << ": <And even this trick doesn't work on me!>" << std::endl;
	tony.beRepaired(MAX_HIT_P - tony.getHitPoints());
    return 0;
}
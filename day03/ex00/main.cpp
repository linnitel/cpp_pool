
#include <iostream>
#include "FragTrap.hpp"

int main( void ) {

	std::cout << GREEN << "/............PART 1. FRAGTRAP.........../" << RESET << std::endl;
	std::cout << std::endl;
	std::cout << MAGENTA << "/............Constructors.........../" << RESET << std::endl;
	int dmg;
    FragTrap tony("Tony");
    FragTrap fred("Fred");
    FragTrap tony2("Tony2");

	std::cout << std::endl;
	std::cout << tony.getName() << " has: " << tony.getHitPoints() << " HP" << std::endl;
	std::cout << fred.getName() << " has: " << fred.getHitPoints() << " HP" << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << MAGENTA << "/............First blood.........../" << RESET << std::endl;
	std::cout << tony.getName() << " attacks " << fred.getName() << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
    tony.rangedAttack(fred.getName());
    fred.takeDamage(tony.getRangeDamage());
	std::cout << tony.getName() << " has: " << tony.getHitPoints() << " HP" << std::endl;
	std::cout << fred.getName() << " has: " << fred.getHitPoints() << " HP" << std::endl;

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << MAGENTA << "/............Series of attacks.........../" << RESET << std::endl;
    while (tony.getHitPoints() != 0) {
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << fred.getName() << " attacks " << tony.getName() << std::endl;
		fred.meleeAttack(tony.getName());
		tony.takeDamage(fred.getMeleeDamage());
		std::cout << tony.getName() << " has: " << tony.getHitPoints() << " HP" << std::endl;
	}
	std::cout << fred.getName() << " attacks " << tony.getName() << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	fred.meleeAttack(tony.getName());
	tony.takeDamage(fred.getMeleeDamage());
	std::cout << tony.getName() << " has: " << tony.getHitPoints() << " HP" << std::endl;
    std::cout << GREEN << tony.getName() << CYAN << ": <Nice try! But you will not kill me, I will reborn!>" << RESET << std::endl;
    tony = tony2;
    for (int i = 0; i < 2; i++) {
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << fred.getName() << " attacks " << tony.getName() << std::endl;
		dmg = fred.vaulthunter_dot_exe(tony.getName());
		tony.takeDamage(dmg);
		std::cout << tony.getName() << " has: " << tony.getHitPoints() << " HP" << std::endl;
	}
	std::cout << GREEN << tony.getName() << CYAN << ": <And even this trick doesn't work on me!>" << RESET << std::endl;
	std::cout << tony.getName() << " repairs 2 HP " << std::endl;
	tony.beRepaired(2);
	std::cout << tony.getName() << " has: " << tony.getHitPoints() << " HP" << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << tony.getName() << " repairs 200 HP " << std::endl;
	tony.beRepaired(200);
	std::cout << tony.getName() << " has: " << tony.getHitPoints() << " HP" << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << GREEN << fred.getName() << CYAN << ": <I can still do it, see my powers!>" << RESET << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << MAGENTA << "/............Series of attacks.........../" << RESET << std::endl;
	while (fred.getEnergyPoints() > 0) {
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << fred.getName() << " attacks " << tony.getName() << std::endl;
		dmg = fred.vaulthunter_dot_exe(tony.getName());
		tony.takeDamage(dmg);
		std::cout << tony.getName() << " has: " << tony.getHitPoints() << " HP" << std::endl;
		std::cout << fred.getName() << " has: " << fred.getEnergyPoints() << " energy" << std::endl;
	}
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << fred.getName() << " attacks " << tony.getName() << std::endl;
	dmg = fred.vaulthunter_dot_exe(tony.getName());
	tony.takeDamage(dmg);
	std::cout << tony.getName() << " has: " << tony.getHitPoints() << " HP" << std::endl;
	std::cout << fred.getName() << " has: " << fred.getEnergyPoints() << " energy" << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << MAGENTA << "/............Destructors.........../" << RESET << std::endl;
    return 0;
}
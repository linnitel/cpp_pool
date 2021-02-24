
#include <iostream>
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

int main( void ) {
	int dmg;
    FragTrap tony("Tony");
    FragTrap fred("Fred");
    FragTrap fred2(fred);
    FragTrap tony2("Tony2");
    ScavTrap daddy("DADDY");

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
	tony.beRepaired(tony.getMaxHitPoints() - tony.getHitPoints());
	std::cout << fred.getName() << ": <Ok, dude, I can do this too>" << std::endl;
	fred.beRepaired(1000);
	std::cout << daddy.getName() << ": <Hey, newbies, what do you think you are doing here?! You are supposed to train! I will teach you some robot manners>" << std::endl;
	daddy.meleeAttack(tony.getName());
	tony.takeDamage(daddy.getMeleeDamage());
	daddy.rangedAttack(fred.getName());
	fred.takeDamage(daddy.getRangeDamage());
	ScavTrap dummy(daddy);
	dummy.setName("Dummy");
	std::cout << daddy.getName() << ": <No, this is not! Hey you, " << dummy.getName() << ", do you sink mocking me is funny?!>" << std::endl;
	daddy.challengeNewcomer(dummy.getName());
	dummy.beRepaired(1);
	std::cout << daddy.getName() << ": <Oh no, what do you think you are doing?! You just failed the task and we all will be deactivated!!!>" << std::endl;
	return 0;
}
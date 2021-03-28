
#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

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
	std::cout << GREEN << tony.getName() << CYAN << ": <Nice try! But you will not kill me, I will reborn!>"
											<< RESET << std::endl;
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
	std::cout << GREEN << "/............PART 2. SCAVTRAP.........../" << RESET << std::endl;
	std::cout << std::endl;
	std::cout << MAGENTA << "/............Constructor.........../" << RESET << std::endl;
	ScavTrap daddy("DADDY");
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << GREEN << daddy.getName() << CYAN << ": <Hey, newbies, what do you think you are doing here?!"
												  "You are supposed to train! I will teach you some robot manners>"
												  << RESET << std::endl;
	std::cout << daddy.getName() << " attacks " << tony.getName() << std::endl;
	daddy.meleeAttack(tony.getName());
	std::cout << daddy.getName() << " attacks " << fred.getName() << std::endl;
	daddy.rangedAttack(fred.getName());
	std::cout << fred.getName() << " attacks " << daddy.getName() << std::endl;
	fred.meleeAttack(daddy.getName());
	daddy.takeDamage(fred.getMeleeDamage());
	std::cout << GREEN << daddy.getName() << CYAN << ": <Hey, this is unfair I will tell Mommy!>" << RESET << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << MAGENTA << "/............Constructor.........../" << RESET << std::endl;
	ScavTrap dummy(daddy);
	dummy.setName("Dummy");
	std::cout << dummy.getName() << " has " << dummy.getHitPoints() << " HP" << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << GREEN << daddy.getName() << CYAN << ": <No, this is not! Hey you, " << dummy.getName() <<
				", do you think mocking me is funny?!>" << std::endl;
	std::cout << daddy.getName() << " attacks with special attack " << dummy.getName() << std::endl;
	daddy.challengeNewcomer(dummy.getName());
	std::cout << daddy.getName() << " attacks with special attack " << fred.getName() << std::endl;
	daddy.challengeNewcomer(fred.getName());
	std::cout << daddy.getName() << " attacks with special attack " << tony.getName() << std::endl;
	daddy.challengeNewcomer(tony2.getName());
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << dummy.getName() << " repairs " << 1 << " HP" << std::endl;
	dummy.beRepaired(1);
	std::cout << dummy.getName() << " has " << dummy.getHitPoints() << " HP" << std::endl;
	std::cout << fred.getName() << " repairs " << 10 << " HP" << std::endl;
	fred.beRepaired(10);
	std::cout << fred.getName() << " has " << fred.getHitPoints() << " HP" << std::endl;
	std::cout << tony2.getName() << " repairs " << 10 << " HP" << std::endl;
	tony2.beRepaired(1000);
	std::cout << tony2.getName() << " has " << tony2.getHitPoints() << " HP" << std::endl;
	std::cout << GREEN << daddy.getName() << CYAN << ": <Oh no, what do you think you are doing?! You just failed the"
												  "task and we all will be deactivated!!!>" << RESET << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << GREEN << "/............PART 3. CLAPTRAP.........../" << RESET << std::endl;
	std::cout << MAGENTA << "/............Constructor.........../" << RESET << std::endl;
	ClapTrap foo("Clap your hands");
	std::cout << foo.getName() << " has " << foo.getHitPoints() << " HP" << std::endl;
	std::cout << foo.getName() << " attacks " << foo.getName() << std::endl;
	foo.rangedAttack(foo.getName());
	foo.takeDamage(foo.getRangeDamage());
	std::cout << foo.getName() << " has " << foo.getHitPoints() << " HP" << std::endl;
	std::cout << GREEN << dummy.getName() << CYAN << ": <Oh no! One more stupid creature! What do you think you are doing?!>"
				<< RESET << std::endl;
	std::cout << foo.getName() << " repairs " << 1 << " HP" << std::endl;
	foo.beRepaired(1);
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << GREEN << "/............PART 4. NINJA.........../" << RESET << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << MAGENTA << "/............Constructor.........../" << RESET << std::endl;
    NinjaTrap ninja("Mysterious subject");
	std::cout << ninja.getName() << " has " << ninja.getHitPoints() << " HP" << std::endl;
    std::cout << GREEN << ninja.getName() << CYAN << ": <Beware of the chaos and mystery!!!>" << RESET << std::endl;
	std::cout << ninja.getName() << " attacks " << fred.getName() << std::endl;
    ninja.ninjaShoebox(fred);
	std::cout << ninja.getName() << " has " << ninja.getHitPoints() << " HP" << std::endl;
	std::cout << fred.getName() << " has " << fred.getHitPoints() << " HP" << std::endl;
	std::cout << ninja.getName() << " attacks " << daddy.getName() << std::endl;
    ninja.ninjaShoebox(daddy);
	std::cout << ninja.getName() << " has " << ninja.getHitPoints() << " HP" << std::endl;
	std::cout << daddy.getName() << " has " << daddy.getHitPoints() << " HP" << std::endl;
	std::cout << ninja.getName() << " attacks " << foo.getName() << std::endl;
	ninja.ninjaShoebox(foo);
	std::cout << ninja.getName() << " has " << ninja.getHitPoints() << " HP" << std::endl;
	std::cout << foo.getName() << " has " << foo.getHitPoints() << " HP" << std::endl;
	std::cout << ninja.getName() << " attacks " << tony2.getName() << std::endl;
    ninja.meleeAttack(tony2.getName());
    tony2.takeDamage(ninja.getMeleeDamage());
	std::cout << ninja.getName() << " attacks " << dummy.getName() << std::endl;
    ninja.rangedAttack(dummy.getName());
    dummy.takeDamage(ninja.getRangeDamage());
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << MAGENTA << "/............Copy constructor.........../" << RESET << std::endl;
    NinjaTrap ninjaGirl(ninja);
    ninjaGirl.setName("Scary lady");
	std::cout << ninjaGirl.getName() << " has " << ninjaGirl.getHitPoints() << " HP" << std::endl;
	std::cout << ninja.getName() << " has " << ninja.getHitPoints() << " HP" << std::endl;
    std::cout << GREEN << ninjaGirl.getName() << CYAN << ": <Here you are!>" << RESET << std::endl;
	std::cout << ninjaGirl.getName() << " attacks " << ninja.getName() << std::endl;
    ninjaGirl.ninjaShoebox(ninja);
	std::cout << ninjaGirl.getName() << " has " << ninjaGirl.getHitPoints() << " HP" << std::endl;
	std::cout << ninja.getName() << " has " << ninja.getHitPoints() << " HP" << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << MAGENTA << "/............Constructor.........../" << RESET << std::endl;
    NinjaTrap ninja2("The Shadow");
	std::cout << GREEN << ninja2.getName() << CYAN << ": <Shshshshshshsh...>" << RESET << std::endl;
    ninja = ninja2;
	std::cout << GREEN << ninja.getName() << CYAN << ": <Shshshshshshsh...>" << RESET << std::endl;
	std::cout << GREEN << ninjaGirl.getName() << CYAN << ": <Oh no! It is the Shadow, it has transformed him! Hide!>"
				<< RESET << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << MAGENTA << "/............Destructors.........../" << RESET << std::endl;
	return 0;
}
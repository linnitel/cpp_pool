
#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap("Trap", 100, 100, 100, 100,
							   1, 30, 20, 5){
	std::cout << "Default constructor called" << std::endl;
	std::cout << GREEN << this->_name << CYAN << " <Oh no, it's a Trap, FragTrap!!!>" << RESET << std::endl;
	std::srand(std::time(0));
}

FragTrap::FragTrap(std::string const &name): ClapTrap(name, 100, 100, 100, 100,
													  1, 30, 20, 5) {
    std::cout << "Default constructor called" << std::endl;
	std::cout << GREEN << this->_name << CYAN << " <FragTrap, is ready to serve a robot god!!!>" << RESET << std::endl;
	std::srand(std::time(0));
}

FragTrap::FragTrap(FragTrap &trap): ClapTrap(trap.getName(),
											 trap.getHitPoints(), trap.getMaxHitPoints(),
											 trap.getEnergyPoints(), trap.getMaxEnergyPoints(),
											 trap.getLevel(), trap.getMeleeDamage(), trap.getRangeDamage(),
											 trap.getArmorDamageReduction()) {
    std::cout << "Copy constructor called" << std::endl;
    std::cout << GREEN << this->_name << CYAN << ": <Is it also me?>" << RESET << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "Default destructor called" << std::endl;
    std::cout << GREEN << this->_name << CYAN << ": <I'm too young to die!!!>" << RESET << std::endl;
}

void FragTrap::operator=(const FragTrap &F) {
    std::cout << "Assignation operator called" << std::endl;
    this->_name = F.getName();
    this->_hitPoints = F.getHitPoints();
    this->_energyPoints = F.getEnergyPoints();
    this->_level = F.getLevel();
    this->_meleeDamage = F.getMeleeDamage();
    this->_rangeDamage = F.getRangeDamage();
    this->_armorDamageReduction = F.getArmorDamageReduction();
}

void FragTrap::rangedAttack(std::string const &target) {
	std::cout << CYAN << "FR4G-TP <" << MAGENTA << this->_name << CYAN << "> attacks <" << MAGENTA << target << CYAN
				<< "> at range, causing <" << MAGENTA << _rangeDamage << CYAN << "> points of damage!" << RESET
				<< std::endl;
	std::cout << GREEN << this->_name << CYAN << " <Is that what people look like inside?>" << RESET << std::endl;
};

void FragTrap::meleeAttack(std::string const &target) {
	std::cout << CYAN << "FR4G-TP <" << MAGENTA << this->_name << CYAN << "> attacks <" << MAGENTA << target << CYAN
				<< "> by melee attack, causing <" << MAGENTA << _meleeDamage << CYAN << "> points of damage!" << RESET
				<< std::endl;
	std::cout << GREEN << this->_name << CYAN << " <Is it dead? Can, can I open my eyes now?>" << RESET << std::endl;
}

int FragTrap::vaulthunter_dot_exe(std::string const & target) {
	int energy = this->_energyPoints - RANDOM_ENERGY_COST;
    std::string list[] = {"Dance to death", "Hit with head", "Unfair kick", "Throw your arm to the enemy",
						  "Stunn with ultrasound"};
    std::string frase[] = {" <How about dancing tango tonight? Oh, no, you don't gave legs now.>",
						   " <I feel like crushing some brains!>",
						   " <I am NOT sorry!>",
						   " <It seems I lost something, hand it for a minute!>",
                           " <I can crash a glass with this sound, look! Oh, sorry, you can't hear anything.>"};
    int dmg[] = {20, 10, 50, 5, 1};
    int attack = std::rand() % 5;
	if (energy < 0) {
		this->_energyPoints = 0;
		std::cout << "FR4G-TP <" << this->_name << "> is out of energy" << std::endl;
		std::cout << this->_name << " <I'm too depressed to do this, let me die quietly!!!>" << std::endl;
	}
	else {
		this->_energyPoints = energy;
		std::cout << "FR4G-TP <" << this->_name << "> attacks " << target << " with <" << list[attack] << ">, causing <"
				  << dmg[attack] << "> points of damage!" << std::endl;
		std::cout << this->_name << frase[attack] << std::endl;
	}
	return dmg[attack];
}
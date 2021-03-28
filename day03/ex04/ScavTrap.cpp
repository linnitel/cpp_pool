
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap("Something", 100, 100, 50, 50,
							   1, 20, 15, 3) {
	std::cout << "Default constructor called" << std::endl;
	std::cout << GREEN << this->_name << CYAN << ": <I am your nightmare, ScavTrap!!! What is that noise coming from?"
												 "Are this my parts falling down?!>" << RESET << std::endl;
	std::srand(std::time(0));
}

ScavTrap::ScavTrap(std::string const &name): ClapTrap(name, 100, 100, 50, 50,
													  1, 20, 15, 3) {
    std::cout << "Default constructor called" << std::endl;
	std::cout << GREEN << this->_name << CYAN << ": <I am your nightmare, ScavTrap!!!"
				"What is that noise coming from? Are this my parts falling down?!>" << RESET << std::endl;
    std::srand(std::time(0));
}

ScavTrap::ScavTrap(ScavTrap &trap): ClapTrap(trap.getName(),
											  trap.getHitPoints(), trap.getMaxHitPoints(),
											  trap.getEnergyPoints(), trap.getMaxEnergyPoints(),
											  trap.getLevel(), trap.getMeleeDamage(), trap.getRangeDamage(),
											  trap.getArmorDamageReduction()) {
    std::cout << "Copy constructor called" << std::endl;
	std::cout << GREEN << this->_name << CYAN << ": <What do we have here? AAAAAAAA, I got crazy, I see myself!!!!!>"
		<< RESET << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "Default destructor called" << std::endl;
	std::cout << GREEN << this->_name << CYAN << ": <Please don't kill me, I can dance!!!>" << RESET << std::endl;
}

void ScavTrap::operator=(const ScavTrap &F) {
    std::cout << "Assignation operator called" << std::endl;
    this->_name = F.getName();
    this->_hitPoints = F.getHitPoints();
    this->_energyPoints = F.getEnergyPoints();
    this->_level = F.getLevel();
    this->_meleeDamage = F.getMeleeDamage();
    this->_rangeDamage = F.getRangeDamage();
    this->_armorDamageReduction = F.getArmorDamageReduction();
}

void ScavTrap::challengeNewcomer(std::string const & target) {
	int challenge = std::rand() % 5;
	std::string list[] = {"<Shoot everything around standing on the head>", "<Dance kalinka-malinka dance>",
						  "<Scare your capitan, wearing a clown mask>", "<Throw a bomb into sauna>",
						  "<Steal someones' pants>"};
	std::cout << GREEN << this->_name << CYAN << ": " << "Hello, little newby " << target <<
			  "! To become a real FR4G-TP, you need to pass my test. Your task is: " << MAGENTA << list[challenge]
			  << RESET << std::endl;
}
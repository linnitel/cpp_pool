
#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string const &name): ClapTrap(name, 60, 60, 120, 120, 1, 60, 5, 0) {
    std::cout << "Default constructor called" << std::endl;
    std::cout << this->_name << ": <I am NinjaTrap!!! I'm the shadow of my life?!>" << std::endl;
    std::srand(std::time(0));
}

NinjaTrap::NinjaTrap(NinjaTrap &trap): ClapTrap(trap.getName(),
											  trap.getHitPoints(), trap.getMaxHitPoints(),
											  trap.getEnergyPoints(), trap.getMaxEnergyPoints(),
											  trap.getLevel(), trap.getMeleeDamage(), trap.getRangeDamage(),
											  trap.getArmorDamageReduction()) {
    std::cout << "Copy constructor called" << std::endl;
    std::cout << this->_name << ": <My name is shadow and I am shadow!!!!!>" << std::endl;
}

NinjaTrap::~NinjaTrap() {
    std::cout << "Default destructor called" << std::endl;
    std::cout << this->_name << ": <Do you see me?! I can't survive it!!!>" << std::endl;
}

void NinjaTrap::operator=(const NinjaTrap &F) {
    std::cout << "Assignation operator called" << std::endl;
    this->_name = F.getName();
    this->_hitPoints = F.getHitPoints();
    this->_energyPoints = F.getEnergyPoints();
    this->_level = F.getLevel();
    this->_meleeDamage = F.getMeleeDamage();
    this->_rangeDamage = F.getRangeDamage();
    this->_armorDamageReduction = F.getArmorDamageReduction();
}

void NinjaTrap::ninjaShoebox(NinjaTrap &trap) {
    std::cout << this->_name << ": <I am Ninja, you are Ninja, let's dance to death!>" << std::endl;
    trap.takeDamage(trap.getHitPoints());
    this->takeDamage(this->_hitPoints);
}

void NinjaTrap::ninjaShoebox(FragTrap &trap) {
    std::cout << this->_name << ": <Boo! Are you scared? Oh no!!!>" << std::endl;
    trap.takeDamage(1);
    this->takeDamage(5);
}

void NinjaTrap::ninjaShoebox(ScavTrap &trap) {
    std::cout << this->_name << ": <I love you, marry me!!! You can't say no, so it's yes, WEEEHAAA!!!>" << std::endl;
    trap.takeDamage(50);
    this->beRepaired(50);
}

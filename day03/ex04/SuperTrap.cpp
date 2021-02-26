
#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string const &name): ClapTrap(name), FragTrap(name), NinjaTrap(name) {
    std::cout << "Default constructor called" << std::endl;
    std::cout << this->_name << ": <I am Trap, SuperTrap!>" << std::endl;
    this->_hitPoints = this->FragTrap::getHitPoints();
    this->_maxHitPoints = this->FragTrap::getMaxHitPoints();
    this->_energyPoints = this->NinjaTrap::getEnergyPoints();
    this->_maxEnergyPoints = this->NinjaTrap::getMaxEnergyPoints();
    this->_level = 1;
    this->_meleeDamage = this->NinjaTrap::getMeleeDamage();
    this->_rangeDamage = this->FragTrap::getRangeDamage();
    this->_armorDamageReduction = this->FragTrap::getArmorDamageReduction();
    std::srand(std::time(0));
}

SuperTrap::SuperTrap(SuperTrap &trap): ClapTrap(trap.getName()), FragTrap(trap.getName()), NinjaTrap(trap.getName()) {
    std::cout << "Copy constructor called" << std::endl;
    this->_hitPoints = trap.getHitPoints();
    this->_maxHitPoints = trap.getMaxHitPoints();
    this->_energyPoints = trap.getEnergyPoints();
    this->_maxEnergyPoints = trap.getMaxEnergyPoints();
    this->_level = trap.getLevel();
    this->_meleeDamage = trap.getMeleeDamage();
    this->_rangeDamage = trap.getRangeDamage();
    this->_armorDamageReduction = trap.getArmorDamageReduction();
    std::cout << this->_name << ": <What do we have here? AAAAAAAA, I got crazy, I see myself!!!!!>" << std::endl;
    std::srand(std::time(0));
}

SuperTrap::~SuperTrap() {
    std::cout << "Default destructor called" << std::endl;
    std::cout << this->_name << ": <Please don't kill me, I can dance!!!>" << std::endl;
}

void SuperTrap::operator=(const SuperTrap &F) {
    std::cout << "Assignation operator called" << std::endl;
    this->_name = F.getName();
    this->_hitPoints = F.getHitPoints();
    this->_energyPoints = F.getEnergyPoints();
    this->_level = F.getLevel();
    this->_meleeDamage = F.getMeleeDamage();
    this->_rangeDamage = F.getRangeDamage();
    this->_armorDamageReduction = F.getArmorDamageReduction();
}
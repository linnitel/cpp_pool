
#include "SuperTrap.hpp"

SuperTrap::SuperTrap(): ClapTrap("Mr Pupper"), FragTrap("Mr Pupper"), NinjaTrap("Mr Pupper") {
	std::cout << "Default constructor called" << std::endl;
	std::cout << GREEN << this->_name << CYAN << ": <I am Trap, SuperTrap!>" << RESET << std::endl;
	this->_hitPoints = this->FragTrap::_defHitPoints;
	this->_maxHitPoints = this->FragTrap::_defMaxHitPoints;
	this->_energyPoints = this->NinjaTrap::_defEnergyPoints;
	this->_maxEnergyPoints = this->NinjaTrap::_defMaxEnergyPoints;
	this->_level = 1;
	this->_meleeDamage = this->NinjaTrap::_defMeleeDamage;
	this->_rangeDamage = this->FragTrap::_defRangeDamage;
	this->_armorDamageReduction = this->FragTrap::_defArmorDamageReduction;
	std::srand(std::time(0));
}

SuperTrap::SuperTrap(std::string const &name): ClapTrap(name), FragTrap(name), NinjaTrap(name) {
    std::cout << "Default constructor called" << std::endl;
    std::cout << GREEN << this->_name << CYAN << ": <I am Trap, SuperTrap!>" << RESET << std::endl;
	this->_hitPoints = this->FragTrap::_defHitPoints;
	this->_maxHitPoints = this->FragTrap::_defMaxHitPoints;
	this->_energyPoints = this->NinjaTrap::_defEnergyPoints;
	this->_maxEnergyPoints = this->NinjaTrap::_defMaxEnergyPoints;
	this->_level = 1;
	this->_meleeDamage = this->NinjaTrap::_defMeleeDamage;
	this->_rangeDamage = this->FragTrap::_defRangeDamage;
	this->_armorDamageReduction = this->FragTrap::_defArmorDamageReduction;
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
    std::cout << GREEN << this->_name << CYAN << ": <What do we have here? AAAAAAAA, I got crazy, I see myself!!!!!>" << RESET << std::endl;
    std::srand(std::time(0));
}

SuperTrap::~SuperTrap() {
    std::cout << "Default destructor called" << std::endl;
    std::cout << GREEN << this->_name << CYAN << ": <Please don't kill me, I can dance!!!>" << RESET << std::endl;
}

void SuperTrap::operator=(const SuperTrap &S) {
    std::cout << "Assignation operator called" << std::endl;
    this->_name = S.getName();
    this->_hitPoints = S.getHitPoints();
    this->_energyPoints = S.getEnergyPoints();
    this->_level = S.getLevel();
    this->_meleeDamage = S.getMeleeDamage();
    this->_rangeDamage = S.getRangeDamage();
    this->_armorDamageReduction = S.getArmorDamageReduction();
}

void SuperTrap::rangedAttack(std::string const &target) {
	FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(std::string const &target) {
	NinjaTrap::meleeAttack(target);
}

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string const &name): _name(name), _hitPoints(0), _maxHitPoints(0), _energyPoints(0), _maxEnergyPoints(0), _level(0), _meleeDamage(0), _rangeDamage(0), _armorDamageReduction(0) {
    std::cout << "Name constructor called" << std::endl;
    std::cout << this->_name << ": <Oh no, it's a Trap, ClapTrap!!!>" << std::endl;
}

ClapTrap::ClapTrap(std::string const &name, int hitP, int maxHit, int energy, int maxEnergy,
				   int level, int meleeDmg, int rangeDmg, int armor): _name(name),
				   _hitPoints(hitP), _maxHitPoints(maxHit), _energyPoints(energy),
				   _maxEnergyPoints(maxEnergy), _level(level), _meleeDamage(meleeDmg),
				   _rangeDamage(rangeDmg), _armorDamageReduction(armor) {
	std::cout << "Constructor with many parametrs called" << std::endl;
	std::cout << this->_name << ": <Oh no, it's a Trap, ClapTrap!!!>" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap &trap) {
    std::cout << "Copy constructor called" << std::endl;
	*this = trap;
    std::cout << this->_name << ": <What do we have here? AAAAAAAA, I got crazy, I see myself!!!!!>" << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "Default destructor called" << std::endl;
    std::cout << this->_name << ": <Please don't kill me, I can dance!!!>" << std::endl;
}

void ClapTrap::operator=(const ClapTrap &C) {
    std::cout << "Assignation operator called" << std::endl;
    this->_name = C.getName();
    this->_hitPoints = C.getHitPoints();
    this->_energyPoints = C.getEnergyPoints();
    this->_level = C.getLevel();
    this->_meleeDamage = C.getMeleeDamage();
    this->_rangeDamage = C.getRangeDamage();
    this->_armorDamageReduction = C.getArmorDamageReduction();
}

int ClapTrap::getHitPoints() const {
    return this->_hitPoints;
}

void ClapTrap::setHitPoints( int const &hit) {
    this->_hitPoints = hit;
}

int ClapTrap::getMaxHitPoints() const {
	return this->_maxHitPoints;
}

void ClapTrap::setMaxHitPoints( int const &hit) {
	this->_maxHitPoints = hit;
}

int ClapTrap::getEnergyPoints() const {
    return this->_energyPoints;
}

void ClapTrap::setEnergyPoints( int const &energy) {
    this->_energyPoints = energy;
}

int ClapTrap::getMaxEnergyPoints() const {
	return this->_maxEnergyPoints;
}

void ClapTrap::setMaxEnergyPoints( int const &energy) {
	this->_maxEnergyPoints = energy;
}

int ClapTrap::getLevel() const {
    return this->_level;
}

void ClapTrap::setLevel(const int &level) {
    this->_level = level;
}

int ClapTrap::getMeleeDamage() const {
    return this->_meleeDamage;
}

void ClapTrap::setMeleeDamage(const int &melee) {
    this->_meleeDamage = melee;
}

int ClapTrap::getRangeDamage() const {
    return this->_rangeDamage;
}

void ClapTrap::setRangeDamage(const int &range) {
    this->_rangeDamage = range;
}

int ClapTrap::getArmorDamageReduction() const {
    return this->_armorDamageReduction;
}

void ClapTrap::setArmorDamageReduction(const int &armor) {
    this->_armorDamageReduction = armor;
}

std::string ClapTrap::getName() const {
    return this->_name;
}

void ClapTrap::setName(std::string const &name) {
	this->_name = name;
}

void ClapTrap::rangedAttack(std::string const & target) {
    std::cout << "FR4G-TP <" << this->_name << "> attacks <" << target << "> at range, causing <" << _rangeDamage << "> points of damage!" << std::endl;
    std::cout << this->_name << ": <Stop me before I kill again, except don't!>" << std::endl;
}

void ClapTrap::meleeAttack(std::string const & target) {
    std::cout << "FR4G-TP <" << this->_name << "> attacks <" << target << "> by melee attack, causing <" << _meleeDamage << "> points of damage!" << std::endl;
    std::cout << this->_name << ": <Ha ha ha! Fall before your robot overlord!>" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    int dmg = ((int)amount - this->_armorDamageReduction);
    if (this->_hitPoints - dmg < 0) {
		std::cout << "FR4G-TP <" << this->_name << "> takes <" << this->_hitPoints << "> points of damage!" << std::endl;
        std::cout << this->_name << ": <I can't feel my fingers! Gah! I don't have any fingers!>" << std::endl;
        this->_hitPoints = 0;
    }
    else {
		std::cout << "FR4G-TP <" << this->_name << "> takes <" << dmg << "> points of damage!" << std::endl;
        std::cout << this->_name << ": <That looks like it hurts!>" << std::endl;
        this->_hitPoints -= dmg;
    }
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (this->_hitPoints + amount > (unsigned int)this->_maxHitPoints) {
		std::cout << "FR4G-TP <" << this->_name << "> repairs <" << this->_maxHitPoints - this->_hitPoints
		<< "> hit points!" << std::endl;
        std::cout << this->_name << ": <Can I just say... yeehaw!>" << std::endl;
        this->_hitPoints = _maxHitPoints;
    }
    else {
		std::cout << "FR4G-TP <" << this->_name << "> repairs <" << amount << "> hit points!" << std::endl;
        std::cout << this->_name << ": <Now I will dominate!>" << std::endl;
        this->_hitPoints = this->_hitPoints + amount;
    }
}
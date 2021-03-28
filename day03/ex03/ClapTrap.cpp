
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name("Clappy"), _hitPoints(0), _maxHitPoints(0), _energyPoints(0),
					  _maxEnergyPoints(0), _level(0), _meleeDamage(0), _rangeDamage(0), _armorDamageReduction(0) {
	std::cout << "Default constructor called" << std::endl;
	std::cout << GREEN << this->_name << CYAN << ": <Oh no, it's a Trap, ClapTrap!!!>" << RESET << std::endl;
}

ClapTrap::ClapTrap(std::string const &name): _name(name), _hitPoints(0), _maxHitPoints(0), _energyPoints(0),
					_maxEnergyPoints(0), _level(0), _meleeDamage(0), _rangeDamage(0), _armorDamageReduction(0) {
    std::cout << "Name constructor called" << std::endl;
    std::cout << GREEN << this->_name << CYAN << ": <Oh no, it's a Trap, ClapTrap!!!>" << RESET << std::endl;
}

ClapTrap::ClapTrap(std::string const &name, unsigned int const &hitP, unsigned int const &maxHit, unsigned int const &energy,
				   unsigned int const &maxEnergy, unsigned int const &level, unsigned int const &meleeDmg, unsigned int const &rangeDmg,
				   unsigned int const &armor): _name(name), _hitPoints(hitP), _maxHitPoints(maxHit),
				   _energyPoints(energy), _maxEnergyPoints(maxEnergy), _level(level),
				   _meleeDamage(meleeDmg), _rangeDamage(rangeDmg), _armorDamageReduction(armor) {
	std::cout << "Constructor with many parametrs called" << std::endl;
	std::cout << GREEN << this->_name << CYAN << ": <Oh no, it's a Trap, ClapTrap!!!>" << RESET << std::endl;
}

ClapTrap::ClapTrap(ClapTrap &trap) {
	std::cout << "Copy constructor called" << std::endl;
	*this = trap;
	std::cout << GREEN << this->_name << CYAN << ": <I will create an army of my clones!!!!!>" << RESET << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "Default destructor called" << std::endl;
	std::cout << GREEN << this->_name << CYAN << ": <I'm too Clap to die!!!>" << RESET << std::endl;
}

void ClapTrap::operator=(const ClapTrap &C) {
    std::cout << "Assignation operator called" << std::endl;
    this->_name = C.getName();
    this->_hitPoints = C.getHitPoints();
	this->_maxHitPoints = C.getMaxHitPoints();
    this->_energyPoints = C.getEnergyPoints();
	this->_maxEnergyPoints = C.getMaxEnergyPoints();
    this->_level = C.getLevel();
    this->_meleeDamage = C.getMeleeDamage();
    this->_rangeDamage = C.getRangeDamage();
    this->_armorDamageReduction = C.getArmorDamageReduction();
}

unsigned int ClapTrap::getHitPoints() const {
	return (this->_hitPoints);
}

void ClapTrap::setHitPoints(unsigned int const &hit) {
	this->_hitPoints = hit;
}

unsigned int ClapTrap::getMaxHitPoints() const {
	return (this->_maxHitPoints);
}

void ClapTrap::setMaxHitPoints(unsigned int const &maxHit) {
	this->_maxHitPoints = maxHit;
}

unsigned int ClapTrap::getEnergyPoints() const {
	return (this->_energyPoints);
}

void ClapTrap::setEnergyPoints(unsigned int const &energy) {
	this->_energyPoints = energy;
}

unsigned int ClapTrap::getMaxEnergyPoints() const {
	return (this->_maxEnergyPoints);
}

void ClapTrap::setMaxEnergyPoints(unsigned int const &maxEnergy) {
	this->_maxEnergyPoints = maxEnergy;
}

unsigned int ClapTrap::getLevel() const {
	return (this->_level);
}

void ClapTrap::setLevel(unsigned int const &level) {
	this->_level = level;
}

unsigned int ClapTrap::getMeleeDamage() const {
	return (this->_meleeDamage);
}

void ClapTrap::setMeleeDamage(unsigned int const &melee) {
	this->_meleeDamage = melee;
}

unsigned int ClapTrap::getRangeDamage() const {
	return (this->_rangeDamage);
}

void ClapTrap::setRangeDamage(unsigned int const &range) {
	this->_rangeDamage = range;
}

unsigned int ClapTrap::getArmorDamageReduction() const {
	return (this->_armorDamageReduction);
}

void ClapTrap::setArmorDamageReduction(unsigned int const &armor) {
	this->_armorDamageReduction = armor;
}

std::string ClapTrap::getName() const {
	return (this->_name);
}

void ClapTrap::setName(std::string const &name) {
	this->_name = name;
}

void ClapTrap::rangedAttack(std::string const & target) {
	std::cout << CYAN << "FR4G-TP <" << MAGENTA << this->_name << CYAN << "> attacks <" << MAGENTA << target << CYAN
				<< "> at range, causing <" << MAGENTA << _rangeDamage << CYAN << "> points of damage!" << RESET
				<< std::endl;
	std::cout << GREEN << this->_name << CYAN << ": <Stop me before I kill again, except don't!>" << RESET << std::endl;
}

void ClapTrap::meleeAttack(std::string const & target) {
	std::cout << CYAN << "FR4G-TP <" << MAGENTA << this->_name << CYAN << "> attacks <" << MAGENTA << target << CYAN <<
	"> by melee attack, causing <" << MAGENTA << _meleeDamage << CYAN << "> points of damage!" << RESET
	<< std::endl;
	std::cout << GREEN << this->_name << CYAN << ": <Ha ha ha! Fall before your robot overlord!>" << RESET << std::endl;
}

unsigned int ClapTrap::_speechReturn(unsigned int hp, unsigned int ret, const std::string textOne,
									 const std::string textTwo, const std::string textThree) {
	std::cout << CYAN << "FR4G-TP <" << MAGENTA << this->_name << CYAN << textOne << MAGENTA
			  << hp << CYAN << textTwo << RESET << std::endl;
	std::cout << GREEN << this->_name << CYAN << textThree << RESET << std::endl;
	return ret;
}

void ClapTrap::takeDamage(unsigned int amount) {
	unsigned int dmg;
	if (amount < this->_armorDamageReduction)
		dmg = 0;
	else
		dmg = amount - this->_armorDamageReduction;
	if (dmg > this->_hitPoints) {
		this->_hitPoints = this->_speechReturn(this->_hitPoints, 0,
											   "> takes <", "> points of damage!",
											   ": <I can't feel my fingers! Gah! I don't have any fingers!>");
	}
	else {
		this->_hitPoints = this->_speechReturn(dmg, this->_hitPoints - dmg,
											   "> takes <", "> points of damage!",
											   ": <That looks like it hurts!>");
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->_hitPoints + amount > this->_maxHitPoints) {
		this->_hitPoints = this->_speechReturn(this->_maxHitPoints - this->_hitPoints, this->_maxHitPoints,
											   "> repairs <", "> hit points!", ": <Can I just say... yeehaw!>");
	}
	else {
		this->_hitPoints = this->_speechReturn(amount, this->_hitPoints + amount, "> repairs <",
											   "> hit points!", ": <Now I will dominate!>");
	}
}
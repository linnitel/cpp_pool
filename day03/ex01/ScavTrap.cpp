
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): _name("Something"), _hitPoints(100), _maxHitPoints(100), _energyPoints(50),
											 _maxEnergyPoints(50), _level(1), _meleeDamage(20), _rangeDamage(15),
											 _armorDamageReduction(3) {
	std::cout << "Default constructor called" << std::endl;
	std::cout << GREEN << this->_name << CYAN << ": <I am your nightmare, ScavTrap!!! What is that noise coming from?"
												 "Are this my parts falling down?!>" << RESET << std::endl;
	std::srand(std::time(0));
}

ScavTrap::ScavTrap(std::string const &name): _name(name), _hitPoints(100), _maxHitPoints(100), _energyPoints(50),
											_maxEnergyPoints(50), _level(1), _meleeDamage(20), _rangeDamage(15),
											_armorDamageReduction(3) {
    std::cout << "Name constructor called" << std::endl;
    std::cout << GREEN << this->_name << CYAN << ": <I am your nightmare, ScavTrap!!! What is that noise coming from?"
												 "Are this my parts falling down?!>" << RESET << std::endl;
    std::srand(std::time(0));
}

ScavTrap::ScavTrap(ScavTrap &trap) {
    std::cout << "Copy constructor called" << std::endl;
	*this = trap;
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
	this->_maxHitPoints = F.getMaxHitPoints();
    this->_energyPoints = F.getEnergyPoints();
	this->_maxEnergyPoints = F.getMaxEnergyPoints();
    this->_level = F.getLevel();
    this->_meleeDamage = F.getMeleeDamage();
    this->_rangeDamage = F.getRangeDamage();
    this->_armorDamageReduction = F.getArmorDamageReduction();
}

unsigned int ScavTrap::getHitPoints() const {
    return (this->_hitPoints);
}

void ScavTrap::setHitPoints(unsigned int const &hit) {
    this->_hitPoints = hit;
}

unsigned int ScavTrap::getMaxHitPoints() const {
	return (this->_maxHitPoints);
}

void ScavTrap::setMaxHitPoints(unsigned int const &maxHit) {
	this->_maxHitPoints = maxHit;
}

unsigned int ScavTrap::getEnergyPoints() const {
    return (this->_energyPoints);
}

void ScavTrap::setEnergyPoints(unsigned int const &energy) {
    this->_energyPoints = energy;
}

unsigned int ScavTrap::getMaxEnergyPoints() const {
	return (this->_maxEnergyPoints);
}

void ScavTrap::setMaxEnergyPoints(unsigned int const &maxEnergy) {
	this->_maxEnergyPoints = maxEnergy;
}

unsigned int ScavTrap::getLevel() const {
    return (this->_level);
}

void ScavTrap::setLevel(unsigned int const &level) {
    this->_level = level;
}

unsigned int ScavTrap::getMeleeDamage() const {
    return (this->_meleeDamage);
}

void ScavTrap::setMeleeDamage(unsigned int const &melee) {
    this->_meleeDamage = melee;
}

unsigned int ScavTrap::getRangeDamage() const {
    return (this->_rangeDamage);
}

void ScavTrap::setRangeDamage(unsigned int const &range) {
    this->_rangeDamage = range;
}

unsigned int ScavTrap::getArmorDamageReduction() const {
    return (this->_armorDamageReduction);
}

void ScavTrap::setArmorDamageReduction(unsigned int const &armor) {
    this->_armorDamageReduction = armor;
}

std::string ScavTrap::getName() const {
    return (this->_name);
}

void ScavTrap::setName(std::string const &name) {
    this->_name = name;
}

void ScavTrap::rangedAttack(std::string const & target) {
    std::cout << "FR4G-TP (ScavTrap) <" << MAGENTA << this->_name << CYAN << "> attacks <" << MAGENTA << target << CYAN
    		<< "> at range, causing <" << MAGENTA << _rangeDamage << CYAN << "> points of damage!" << RESET << std::endl;
    std::cout << GREEN << this->_name << CYAN << ": <Stop me before I kill again, except don't!>" << RESET << std::endl;
}

void ScavTrap::meleeAttack(std::string const & target) {
    std::cout << "FR4G-TP (ScavTrap) <" << MAGENTA << this->_name << CYAN << "> attacks <" << MAGENTA << target << CYAN
    		<< "> by melee attack, causing <" << MAGENTA << _meleeDamage << CYAN << "> points of damage!" << RESET
    		<< std::endl;
    std::cout << GREEN << this->_name << CYAN << ": <Ha ha ha! Fall before your robot overlord!>" << RESET << std::endl;
}

unsigned int ScavTrap::_speechReturn(unsigned int hp, unsigned int ret, const std::string textOne,
									 const std::string textTwo, const std::string textThree) {
	std::cout << CYAN << "FR4G-TP <" << MAGENTA << this->_name << CYAN << textOne << MAGENTA
			  << hp << CYAN << textTwo << RESET << std::endl;
	std::cout << GREEN << this->_name << CYAN << textThree << RESET << std::endl;
	return ret;
}

void ScavTrap::takeDamage(unsigned int amount) {
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
								"> takes <", "> points of damage!", ": <That looks like it hurts!>");
	}
}

void ScavTrap::beRepaired(unsigned int amount) {
	if (this->_hitPoints + amount > this->_maxHitPoints) {
		this->_hitPoints = this->_speechReturn(this->_maxHitPoints - this->_hitPoints, this->_maxHitPoints,
											   "> repairs <", "> hit points!",
											   ": <Can I just say... yeehaw!>");
	}
	else {
		this->_hitPoints = this->_speechReturn(amount, this->_hitPoints + amount, "> repairs <",
											   "> hit points!", ": <Can I just say... yeehaw!>");
	}
}

void ScavTrap::challengeNewcomer(std::string const & target) {
	int challenge = std::rand() % 5;
    std::string list[] = {"<Shoot everything around standing on the head>", "<Dance kalinka-malinka dance>",
						  "<Scare your capitan, wearing a clown mask>", "<Throw a bomb into sauna>",
						  "<Steal someones' pants>"};
	std::cout << GREEN << this->_name << CYAN << ": Hello, little newby " << target <<
				"! To become a real FR4G-TP, you need to pass my test. Your task is: " << MAGENTA << list[challenge]
				<< RESET << std::endl;
}
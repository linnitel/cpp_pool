
#include "FragTrap.hpp"

FragTrap::FragTrap(): _name("Trap"), _hitPoints(100), _maxHitPoints(100), _energyPoints(100),
					  _maxEnergyPoints(100), _level(1), _meleeDamage(30), _rangeDamage(20),
					  _armorDamageReduction(5) {
	std::cout << "Default constructor called" << std::endl;
	std::cout << GREEN << this->_name << CYAN << " <Oh no, it's a Trap, FragTrap!!!>" << RESET << std::endl;
	std::srand(std::time(0));
}

FragTrap::FragTrap(std::string const &name): _name(name), _hitPoints(100), _maxHitPoints(100), _energyPoints(100),
											 _maxEnergyPoints(100), _level(1), _meleeDamage(30), _rangeDamage(20),
											 _armorDamageReduction(5) {
	std::cout << "Name constructor called" << std::endl;
    std::cout << GREEN << this->_name << CYAN << " <Oh no, it's a Trap, FragTrap!!!>" << RESET << std::endl;
    std::srand(std::time(0));
}

FragTrap::FragTrap(FragTrap &trap) {
    std::cout << "Copy constructor called" << std::endl;
    std::cout << GREEN << this->_name << CYAN << " <Is it also me?>" << RESET << std::endl;
    *this = trap;
}

FragTrap::~FragTrap() {
    std::cout << "Default destructor called" << std::endl;
    std::cout << GREEN << this->_name << CYAN << " <I'm too young to die!!!>" << RESET << std::endl;
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

unsigned int FragTrap::getHitPoints() const {
    return (this->_hitPoints);
}

void FragTrap::setHitPoints(unsigned int const &hit) {
    this->_hitPoints = hit;
}

unsigned int FragTrap::getMaxHitPoints() const {
	return (this->_maxHitPoints);
}

void FragTrap::setMaxHitPoints(unsigned int const &maxHit) {
	this->_maxHitPoints = maxHit;
}

unsigned int FragTrap::getEnergyPoints() const {
    return (this->_energyPoints);
}

void FragTrap::setEnergyPoints(unsigned int const &energy) {
    this->_energyPoints = energy;
}

unsigned int FragTrap::getMaxEnergyPoints() const {
	return (this->_maxEnergyPoints);
}

void FragTrap::setMaxEnergyPoints(unsigned int const &maxEnergy) {
	this->_maxEnergyPoints = maxEnergy;
}

unsigned int FragTrap::getLevel() const {
    return (this->_level);
}

void FragTrap::setLevel(unsigned int const &level) {
    this->_level = level;
}

unsigned int FragTrap::getMeleeDamage() const {
    return (this->_meleeDamage);
}

void FragTrap::setMeleeDamage(unsigned int const &melee) {
    this->_meleeDamage = melee;
}

unsigned int FragTrap::getRangeDamage() const {
    return (this->_rangeDamage);
}

void FragTrap::setRangeDamage(unsigned int const &range) {
    this->_rangeDamage = range;
}

unsigned int FragTrap::getArmorDamageReduction() const {
    return (this->_armorDamageReduction);
}

void FragTrap::setArmorDamageReduction(unsigned int const &armor) {
    this->_armorDamageReduction = armor;
}

std::string FragTrap::getName() const {
    return (this->_name);
}

void FragTrap::setName(std::string const &name) {
    this->_name = name;
}

void FragTrap::rangedAttack(std::string const &target) {
    std::cout << CYAN << "FR4G-TP <" << MAGENTA << this->_name << CYAN << "> attacks <" << MAGENTA << target << CYAN << "> at range, causing <" << MAGENTA << _rangeDamage << CYAN << "> points of damage!" << RESET << std::endl;
    std::cout << GREEN << this->_name << CYAN << " <Is that what people look like inside?>" << RESET << std::endl;
}

void FragTrap::meleeAttack(std::string const &target) {
    std::cout << CYAN << "FR4G-TP <" << MAGENTA << this->_name << CYAN << "> attacks <" << MAGENTA << target << CYAN << "> by melee attack, causing <" << MAGENTA << _meleeDamage << CYAN << "> points of damage!" << RESET << std::endl;
    std::cout << GREEN << this->_name << CYAN << " <Is it dead? Can, can I open my eyes now?>" << RESET << std::endl;
}

unsigned int FragTrap::_speechReturn(unsigned int hp, unsigned int ret, const std::string textOne,
									 const std::string textTwo, const std::string textThree) {
	std::cout << CYAN << "FR4G-TP <" << MAGENTA << this->_name << CYAN << textOne << MAGENTA
			  << hp << CYAN << textTwo << RESET << std::endl;
	std::cout << GREEN << this->_name << CYAN << textThree << RESET << std::endl;
	return ret;
}

void FragTrap::takeDamage(unsigned int amount) {
    unsigned int dmg;
    if (amount < this->_armorDamageReduction)
    	dmg = 0;
	else
		dmg = amount - this->_armorDamageReduction;
    if (dmg > this->_hitPoints) {
		this->_hitPoints = this->_speechReturn(this->_hitPoints, 0,
							"> takes <", "> points of damage!",
							" <If only my chassis... weren't made of recycled human body parts! Wahahaha!>");
    }
    else {
		this->_hitPoints = this->_speechReturn(dmg, this->_hitPoints - dmg,
											   "> takes <", "> points of damage!", " <Why do I even feel pain?!>");
    }
}

void FragTrap::beRepaired(unsigned int amount) {
    if (this->_hitPoints + amount > this->_maxHitPoints) {
		this->_hitPoints = this->_speechReturn(this->_maxHitPoints - this->_hitPoints, this->_maxHitPoints,
										 "> repairs <", "> hit points!", " <I'm so sexy!!!>");
    }
    else {
		this->_hitPoints = this->_speechReturn(amount, this->_hitPoints + amount, "> repairs <",
										 "> hit points!", " <I'm so sexy!!!>");
    }
}

unsigned int FragTrap::vaulthunter_dot_exe(std::string const & target) {
    const std::string list[] = {"Dance to death", "Hit with head", "Unfair kick", "Throw your arm to the enemy", "Stunn with ultrasound"};
    const std::string frase[] = {" <How about dancing tango tonight? Oh, no, you don't gave legs now.>", " <I feel like crushing some brains!>",
                           " <I am NOT sorry!>", " <It seems I lost something, hand it for a minute!>",
                           " <I can crash a glass with this sound, look! Oh, sorry, you can't hear anything.>"};
    int dmg[] = {20, 10, 50, 5, 1};
    int attack = std::rand() % 5;
	if (this->_energyPoints < RANDOM_ENERGY_COST) {
		this->_energyPoints = 0;
		std::cout << CYAN << "FR4G-TP <" << MAGENTA << this->_name << CYAN << "> is out of energy" << RESET << std::endl;
		std::cout << GREEN << this->_name << CYAN <<" <I'm too depressed to do this, let me die quietly!!!>" << RESET << std::endl;
		return 0;
	}
	else {
		this->_energyPoints = this->_energyPoints - RANDOM_ENERGY_COST;
		std::cout << CYAN << "FR4G-TP <" << MAGENTA << this->_name << CYAN << "> attacks " << MAGENTA << target << CYAN << " with <" << list[attack] << ">, causing <"
				<< MAGENTA << dmg[attack] << CYAN << "> points of damage!" << RESET << std::endl;
		std::cout << GREEN << this->_name << CYAN << frase[attack] << RESET << std::endl;
		return dmg[attack];
	}
}
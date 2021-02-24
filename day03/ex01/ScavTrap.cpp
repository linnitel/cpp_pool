
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string const &name): _name(name), _hitPoints(MAX_S_HIT_P), _energyPoints(MAX_S_ENERGY_P), _level(1), _meleeDamage(20), _rangeDamage(15), _armorDamageReduction(3) {
    std::cout << "Default constructor called" << std::endl;
    std::cout << this->_name << ": <I am your nightmare, ScavTrap!!! What is that noise coming from? Are this my parts falling down?!>" << std::endl;
    std::srand(std::time(0));
}

ScavTrap::ScavTrap(ScavTrap &trap) {
    std::cout << "Copy constructor called" << std::endl;
	*this = trap;
    std::cout << this->_name << ": <What do we have here? AAAAAAAA, I got crazy, I see myself!!!!!>" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "Default destructor called" << std::endl;
    std::cout << this->_name << ": <Please don't kill me, I can dance!!!>" << std::endl;
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

int ScavTrap::getHitPoints() const {
    return (this->_hitPoints);
};

void ScavTrap::setHitPoints( int const &hit) {
    this->_hitPoints = hit;
};

int ScavTrap::getEnergyPoints() const {
    return (this->_energyPoints);
};

void ScavTrap::setEnergyPoints( int const &energy) {
    this->_energyPoints = energy;
};

int ScavTrap::getLevel() const {
    return (this->_level);
};

void ScavTrap::setLevel(const int &level) {
    this->_level = level;
};

int ScavTrap::getMeleeDamage() const {
    return (this->_meleeDamage);
};

void ScavTrap::setMeleeDamage(const int &melee) {
    this->_meleeDamage = melee;
};

int ScavTrap::getRangeDamage() const {
    return (this->_rangeDamage);
};

void ScavTrap::setRangeDamage(const int &range) {
    this->_rangeDamage = range;
};

int ScavTrap::getArmorDamageReduction() const {
    return (this->_armorDamageReduction);
};

void ScavTrap::setArmorDamageReduction(const int &armor) {
    this->_armorDamageReduction = armor;
};

std::string ScavTrap::getName() const {
    return (this->_name);
};

void ScavTrap::setName(std::string const &name) {
    this->_name = name;
};

void ScavTrap::rangedAttack(std::string const & target) {
    std::cout << "FR4G-TP (ScavTrap) <" << this->_name << "> attacks <" << target << "> at range, causing <" << _rangeDamage << "> points of damage!" << std::endl;
    std::cout << this->_name << ": <Stop me before I kill again, except don't!>" << std::endl;
};

void ScavTrap::meleeAttack(std::string const & target) {
    std::cout << "FR4G-TP (ScavTrap) <" << this->_name << "> attacks <" << target << "> by melee attack, causing <" << _meleeDamage << "> points of damage!" << std::endl;
    std::cout << this->_name << ": <Ha ha ha! Fall before your robot overlord!>" << std::endl;
};

void ScavTrap::takeDamage(unsigned int amount) {
    int dmg = ((int)amount - this->_armorDamageReduction);
    if (this->_hitPoints - dmg < 0) {
		std::cout << "FR4G-TP (ScavTrap) <" << this->_name << "> takes <" << this->_hitPoints << "> points of damage!" << std::endl;
        std::cout << this->_name << ": <I can't feel my fingers! Gah! I don't have any fingers!>" << std::endl;
        this->_hitPoints = 0;
    }
    else {
		std::cout << "FR4G-TP (ScavTrap) <" << this->_name << "> takes <" << dmg << "> points of damage!" << std::endl;
        std::cout << this->_name << ": <That looks like it hurts!>" << std::endl;
        this->_hitPoints -= dmg;
    }
};

void ScavTrap::beRepaired(unsigned int amount) {
    if (this->_hitPoints + amount > this->_maxHitPoints) {
		std::cout << "FR4G-TP (ScavTrap) <" << this->_name << "> repairs <" << this->_maxHitPoints - this->_hitPoints
		<< "> hit points!" << std::endl;
        std::cout << this->_name << ": <Can I just say... yeehaw!>" << std::endl;
        this->_hitPoints = _maxHitPoints;
    }
    else {
		std::cout << "FR4G-TP (ScavTrap) <" << this->_name << "> repairs <" << amount << "> hit points!" << std::endl;
        std::cout << this->_name << ": <Now I will dominate!>" << std::endl;
        this->_hitPoints = this->_hitPoints + amount;
    }
};

void ScavTrap::challengeNewcomer(std::string const & target) {
	int challenge = std::rand() % 5;
    std::string list[] = {"<Shoot everything around standing on the head>", "<Dance kalinka-malinka dance>",
						  "<Scare your capitan, wearing a clown mask>", "<Throw a bomb into sauna>",
						  "<Steal someones' pants>"};
	std::cout << this->_name << ": " << "Hello, little newby " << target <<
	"! To become a real FR4G-TP, you need to pass my test. Your task is: " << list[challenge] << std::endl;
};
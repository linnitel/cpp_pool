
#include "FragTrap.hpp"

FragTrap::FragTrap(std::string const &name): _name(name), _hitPoints(100), _energyPoints(100), _level(1), _meleeDamage(30), _rangeDamage(20), _armorDamageReduction(5) {
    std::cout << "Default constructor called" << std::endl;
    std::cout << this->_name << " <Oh no, it's a Trap, FragTrap!!!>" << std::endl;
    std::srand(std::time(0));
}

FragTrap::FragTrap(FragTrap &trap) {
    std::cout << "Copy constructor called" << std::endl;
    std::cout << _name << " <Is it also me?>" << std::endl;
    *this = trap;
}

FragTrap::~FragTrap() {
    std::cout << "Default destructor called" << std::endl;
    std::cout << this->_name << " <I'm too young to die!!!>" << std::endl;
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

int FragTrap::getHitPoints() const {
    return (this->_hitPoints);
};

void FragTrap::setHitPoints( int const &hit) {
    this->_hitPoints = hit;
};

int FragTrap::getEnergyPoints() const {
    return (this->_energyPoints);
};

void FragTrap::setEnergyPoints( int const &energy) {
    this->_energyPoints = energy;
};

int FragTrap::getLevel() const {
    return (this->_level);
};

void FragTrap::setLevel(const int &level) {
    this->_level = level;
};

int FragTrap::getMeleeDamage() const {
    return (this->_meleeDamage);
};

void FragTrap::setMeleeDamage(const int &melee) {
    this->_meleeDamage = melee;
};

int FragTrap::getRangeDamage() const {
    return (this->_rangeDamage);
};

void FragTrap::setRangeDamage(const int &range) {
    this->_rangeDamage = range;
};

int FragTrap::getArmorDamageReduction() const {
    return (this->_armorDamageReduction);
};

void FragTrap::setArmorDamageReduction(const int &armor) {
    this->_armorDamageReduction = armor;
};

std::string FragTrap::getName() const {
    return (this->_name);
};

void FragTrap::setName(std::string const &name) {
    this->_name = name;
};

void FragTrap::rangedAttack(std::string const & target) {
    std::cout << "FR4G-TP <" << this->_name << "> attacks <" << target << "> at range, causing <" << _rangeDamage << "> points of damage!" << std::endl;
    std::cout << this->_name << " <Is that what people look like inside?>" << std::endl;
};

void FragTrap::meleeAttack(std::string const & target) {
    std::cout << "FR4G-TP <" << this->_name << "> attacks <" << target << "> by melee attack, causing <" << _meleeDamage << "> points of damage!" << std::endl;
    std::cout << this->_name << " <Is it dead? Can, can I open my eyes now?>" << std::endl;
};

void FragTrap::takeDamage(unsigned int amount) {
    int dmg = this->_hitPoints - this->_armorDamageReduction - amount;
    std::cout << "FR4G-TP <" << this->_name << "> takes damage <" << dmg << "> points of damage!" << std::endl;
    if (dmg < 0) {
        std::cout << this->_name << " <If only my chassis... weren't made of recycled human body parts! Wahahaha!>" << std::endl;
        this->_hitPoints = 0;
    }
    else {
        std::cout << this->_name << " <Why do I even feel pain?!>" << std::endl;
        this->_hitPoints = dmg;
    }
};

void FragTrap::beRepaired(unsigned int amount) {
    int repair = this->_hitPoints + amount;
    std::cout << "FR4G-TP <" << this->_name << "> repairs <" << amount << "> hit points!" << std::endl;
    if (repair > _maxHitPoints) {
        std::cout << this->_name << " <I'm so sexy!>" << std::endl;
        this->_hitPoints = _maxHitPoints;
    }
    else {
        std::cout << this->_name << " <Sweet life juice!>" << std::endl;
        this->_hitPoints = repair;
    }
};

void FragTrap::vaulthunter_dot_exe(std::string const & target) {
    std::string list[] = {"Dance to death", "Hit with head", "Unfair kick", "Throw your arm to the enemy", "Stunn with ultrasound"};
    std::string frase[] = {"How about dancing tango tonight? Oh, no, you don't gave legs now.", "I feel like crushing some brains!",
                           "I am NOT sorry!", "It seems I lost something, hand it for a minute!",
                           "I can crash a glass with this sound, look! Oh, sorry, you can't hear it."};
    int dmg[] = {20, 10, 50, 5, 1};
    int attack = std::rand() % 5;
    std::cout << "FR4G-TP <" << this->_name << "> attacks " << target << " with <" << list[attack] << ">, causing <" <<  dmg[attack] << "> points of damage!" << std::endl;
    std::cout << this->_name << frase[attack] << std::endl;
    if ()
};
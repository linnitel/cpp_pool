
#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string const &name): ClapTrap(name, 60, 60, 120, 120, 1, 60, 5, 0) {
    std::cout << "Default constructor called" << std::endl;
    std::cout << this->_name << ": <I am your nightmare, NinjaTrap!!! What is that noise coming from? Are this my parts falling down?!>" << std::endl;
    std::srand(std::time(0));
}

NinjaTrap::NinjaTrap(NinjaTrap &trap): ClapTrap(trap.getName(),
											  trap.getHitPoints(), trap.getMaxHitPoints(),
											  trap.getEnergyPoints(), trap.getMaxEnergyPoints(),
											  trap.getLevel(), trap.getMeleeDamage(), trap.getRangeDamage(),
											  trap.getArmorDamageReduction()) {
    std::cout << "Copy constructor called" << std::endl;
    std::cout << this->_name << ": <What do we have here? AAAAAAAA, I got crazy, I see myself!!!!!>" << std::endl;
}

NinjaTrap::~NinjaTrap() {
    std::cout << "Default destructor called" << std::endl;
    std::cout << this->_name << ": <Please don't kill me, I can dance!!!>" << std::endl;
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

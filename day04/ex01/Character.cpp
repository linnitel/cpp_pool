
#include "Character.hpp"

Character::Character(): _name("My Hero"), _maxAP(START_AP), _ap(START_AP), _weapon(NULL) {
}

Character::Character(std::string const & name): _name(name), _maxAP(START_AP), _ap(START_AP), _weapon(NULL) {
}

Character::Character(std::string const & name, int const &startAp): _name(name), _maxAP(startAp), _ap(startAp), _weapon(NULL) {
}

Character::Character(std::string const & name, AWeapon *beginWeapon): _name(name), _maxAP(START_AP), _ap(START_AP), _weapon(beginWeapon) {
}

Character::Character(std::string const & name, int const &startAp, AWeapon *beginWeapon): _name(name), _maxAP(startAp), _ap(startAp), _weapon(beginWeapon) {
}

Character::~Character() {
}

Character::Character(Character &character) {
	*this = character;
}

std::string const &Character::getName() const {
	return (this->_name);
}

int const &Character::getAP() const {
	return (this->_ap);
}

AWeapon *Character::getAWeapon() const {
	return (this->_weapon);
}

void Character::operator=(const Character &C) {
	this->_name = C.getName();
	this->_ap = C.getAP();
	this->_weapon = C.getAWeapon();
}

void Character::equip(AWeapon *weapon) {
	this->_weapon = weapon;
}

void Character::recoverAP() {
	if (this->_ap > this->_maxAP - RECOVER)
		this->_ap = this->_maxAP;
	else
		this->_ap += RECOVER;
}

void Character::attack(Enemy *enemy) {
	if (enemy) {
		if (this->_weapon) {
			if (this->_ap >= this->_weapon->getAPCost()) {
				std::cout << MAGENTA << this->_name << CYAN << " attacks " << enemy->getType() << " with a "
						  << this->_weapon->getName() << RESET << std::endl;
				this->_weapon->attack();
				enemy->takeDamage(this->_weapon->getDamage());
				this->_ap -= this->_weapon->getAPCost();
				if (enemy->getHP() < 0) {
					delete enemy;
				}
			}
			else
				std::cout << MAGENTA << this->_name << CYAN << " has " << this->_ap <<
						  " AP, this is not enough to attack with " << this->_weapon->getName() << RESET << std::endl;
		}
		else {
			std::cout << MAGENTA << this->_name << CYAN << " has no weapon to attack " << enemy->getType() << RESET
					  << std::endl;
		}
	}
	else {
		std::cout << MAGENTA << this->_name << CYAN << " there is no one to attack here" << RESET << std::endl;
	}
}

std::ostream & operator<<(std::ostream & os, const Character &C) {
	if (C.getAWeapon()) {
		os << MAGENTA << C.getName() << CYAN << " has " << C.getAP() << "AP and wields a " << C.getAWeapon()->getName()
						<< RESET << std::endl;
	}
	else {
		os << MAGENTA << C.getName() << CYAN << " has " << C.getAP() << "AP and is unarmed"<< RESET << std::endl;
	}
	return os;
}
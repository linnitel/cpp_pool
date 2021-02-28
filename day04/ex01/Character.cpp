
#include "Character.hpp"

Character::Character(): _type("Simple enemy"), _hp(10) {
}

Character::Character(int hp, std::string const & type): _type(type), _hp(hp) {
	std::cout << "The enemy " << this->_type << " approaches!" << std::endl;
}

Character::~Character() {
}

std::string const &Character::getType() {
	return (this->_type);
}

int Character::getHP() const {
	return (this->_hp);
}

void Character::operator=(const Character &E) {
	std::cout << "Assignation operator called" << std::endl;
	this->_type = E.getName();
	this->_hp = A.getHP();
}

virtual void Character::takeDamage(int dmg) {
	if (dmg > 0) {
		this->_hp -= dmg;
	}
}
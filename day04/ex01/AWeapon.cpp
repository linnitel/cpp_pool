
#include "AWeapon.hpp"

AWeapon::AWeapon(): _name("Empty hands"), _apcost(1), _damage(1){
}

AWeapon::AWeapon(std::string const &name, int apcost, int damage): _name(name), _apcost(apcost), _damage(damage) {
	std::cout << "The weapon " << this->_name << " is equipped!" << std::endl;
}

AWeapon::~AWeapon() {
}

std::string const AWeapon::getName() {
	return (this->_name);
}

int AWeapon::getAPCost() const {
	return (this->_apcost);
}

int AWeapon::getDamage() const {
	return (this->_damage);
}

void AWeapon::operator=(const AWeapon &A) {
	std::cout << "Assignation operator called" << std::endl;
	this->_name = A.getName();
	this->_apcost = A.getAPCost();
	this->_damage = A.getDamage();
}
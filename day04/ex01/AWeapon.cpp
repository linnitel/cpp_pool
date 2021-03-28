
#include "AWeapon.hpp"

AWeapon::AWeapon(): _name("Empty hands"), _apcost(1), _damage(1){
}

AWeapon::AWeapon(std::string const &name, int apcost, int damage): _name(name), _apcost(apcost), _damage(damage) {
}

AWeapon::~AWeapon() {
}

AWeapon::AWeapon(AWeapon &AW) {
	*this = AW;
}

std::string const &AWeapon::getName() const{
	return (this->_name);
}

int const &AWeapon::getAPCost() const {
	return (this->_apcost);
}

int const &AWeapon::getDamage() const {
	return (this->_damage);
}

void AWeapon::operator=(const AWeapon &A) {
	this->_name = A.getName();
	this->_apcost = A.getAPCost();
	this->_damage = A.getDamage();
}
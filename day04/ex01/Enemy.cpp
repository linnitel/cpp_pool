
#include "Enemy.hpp"

Enemy::Enemy(): _type("Simple enemy"), _hp(10) {
}

Enemy::Enemy(int hp, std::string const & type): _type(type), _hp(hp) {
	std::cout << "The enemy " << this->_type << " approaches!" << std::endl;
}

Enemy::~Enemy() {
}

std::string const &Enemy::getType() {
	return (this->_type);
}

int Enemy::getHP() const {
	return (this->_hp);
}

void Enemy::operator=(const Enemy &E) {
	std::cout << "Assignation operator called" << std::endl;
	this->_type = E.getName();
	this->_hp = A.getHP();
}

virtual void Enemy::takeDamage(int dmg) {
	if (dmg > 0) {
		this->_hp -= dmg;
	}
}
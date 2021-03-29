
#include "Enemy.hpp"

Enemy::Enemy(): _type("Simple enemy"), _hp(10) {
}

Enemy::Enemy(int hp, std::string const & type): _type(type), _hp(hp) {
}

Enemy::~Enemy() {
}

Enemy::Enemy(Enemy const &enemy) {
	*this = enemy;
}

std::string const &Enemy::getType() const {
	return (this->_type);
}

int Enemy::getHP() const {
	return (this->_hp);
}

void Enemy::operator=(const Enemy &E) {
	this->_type = E.getType();
	this->_hp = E.getHP();
}

void Enemy::takeDamage(int dmg) {
	if (dmg > 0) {
		this->_hp -= dmg;
	}
}
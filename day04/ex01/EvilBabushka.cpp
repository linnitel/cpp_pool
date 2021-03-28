
#include "EvilBabushka.hpp"

EvilBabushka::EvilBabushka(): Enemy(20, "Baba Nadya") {
	std::cout << MAGENTA << "* Vas tut ne stoyalo! *" << RESET << std::endl;
}

EvilBabushka::~EvilBabushka() {
	std::cout <<  MAGENTA << "* Oh oh oh *" << RESET << std::endl;
}

EvilBabushka::EvilBabushka(EvilBabushka &baba) {
	*this = baba;
}

void EvilBabushka::takeDamage(int dmg) {
	if (dmg > this->_dmgReduce) {
		Enemy::takeDamage(dmg - this->_dmgReduce);
	}
}
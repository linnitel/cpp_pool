
#include "SuperMutant.hpp"

SuperMutant::SuperMutant(): Enemy(170, "Super Mutant") {
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant() {
	std::cout << "Aaargh..." << std::endl;
}

SuperMutant::SuperMutant(SuperMutant &super) {
	*this = super;
}

void SuperMutant::takeDamage(int dmg) {
	if (dmg > this->_dmgReduce) {
		Enemy::takeDamage(dmg - this->_dmgReduce);
	}
}
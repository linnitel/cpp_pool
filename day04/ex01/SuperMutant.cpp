
#include "SuperMutant.hpp"

SuperMutant::SuperMutant(): Enemy(170, "Super Mutant") {
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant() {
	std::cout << "Aaargh..." << std::endl;
}

virtual void SuperMutant::takeDamage(int dmg) {
	if (dmg > 0) {
		this->_hp -= dmg - DMG_REDUCE;
	}
}
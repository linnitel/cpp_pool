
#include "PowerFist.hpp"

PowerFist::PowerFist(): AWeapon("Power Fist", 8, 50){
}

PowerFist::~PowerFist() {
}

PowerFist::PowerFist(PowerFist &power) {
	*this = power;
}

void PowerFist::attack() const {
	std::cout <<  "* pschhh... SBAM! *" << std::endl;
}
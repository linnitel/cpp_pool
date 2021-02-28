
#include "PowerFist.hpp"

PowerFist::PowerFist(): AWeapon("Power Fist", 50, 8){
}

PowerFist::~PowerFist() {
}

void PowerFist::attack() const {
	std::cout <<  "* pschhh... SBAM! *" << std::endl;
}
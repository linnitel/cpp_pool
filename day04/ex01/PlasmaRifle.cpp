
#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(): AWeapon("Plasma Rifle", 5, 21) {
}

PlasmaRifle::~PlasmaRifle() {
}

PlasmaRifle::PlasmaRifle(PlasmaRifle &plasma) {
	*this = plasma;
}

void PlasmaRifle::attack() const {
	std::cout <<  "* piouuu piouuu piouuu *" << std::endl;
}
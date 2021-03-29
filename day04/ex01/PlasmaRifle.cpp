
#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(): AWeapon("Plasma Rifle", 5, 21) {
}

PlasmaRifle::~PlasmaRifle() {
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &plasma): AWeapon(plasma) {
}

void PlasmaRifle::attack() const {
	std::cout <<  "* piouuu piouuu piouuu *" << std::endl;
}
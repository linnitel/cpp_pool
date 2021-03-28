
#include "WirtsLeg.hpp"

WirtsLeg::WirtsLeg(): AWeapon("Wirt's Leg", 20, 5) {
}

WirtsLeg::~WirtsLeg() {
}

WirtsLeg::WirtsLeg(WirtsLeg &leg) {
	*this = leg;
}

void WirtsLeg::attack() const {
	std::cout <<  "* mmuuuuuuuuuuuuuuuuu *" << std::endl;
}
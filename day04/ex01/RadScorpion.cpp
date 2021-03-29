
#include "RadScorpion.hpp"

RadScorpion::RadScorpion(): Enemy(80, "RadScorpion") {
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion() {
	std::cout <<  "* SPROTCH *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const &rad): Enemy(80, "RadScorpion") {
	*this = rad;
}

void RadScorpion::takeDamage(int dmg) {
	Enemy::takeDamage(dmg);
}
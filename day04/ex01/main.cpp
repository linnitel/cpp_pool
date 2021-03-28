
#include <iostream>
#include "PowerFist.hpp"
#include "PlasmaRifle.hpp"
#include "AWeapon.hpp"
#include "Character.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "EvilBabushka.hpp"
#include "WirtsLeg.hpp"


int main() {
	std::cout << GREEN << "/-------------SUBJECT PART-------------/" << RESET << std::endl;
	std::cout << std::endl;
	Character* me = new Character("me");
	std::cout << *me;
	Enemy* rs = new RadScorpion();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
	me->attack(rs);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(rs);
	std::cout << *me;
	me->attack(rs);
	std::cout << *me;
	std::cout << std::endl;
	std::cout << GREEN << "/-------------EXTRA PART 1-------------/" << RESET << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	AWeapon* wl = new WirtsLeg();
	Enemy* sm = new SuperMutant();
	Character* myHero = new Character("Superman", 80);
	std::cout << *me << *myHero;
	me = myHero;
	std::cout << *me << *myHero;
	for (int i = 0; i < 7; i++) {
		me->equip(wl);
		std::cout << *me;
		me->attack(sm);
		std::cout << *me;
	}
	std::cout << sm->getType() << " has " << sm->getHP() << "HP" << std::endl;
	for (int i = 0; i < 8; i++) {
		me->recoverAP();
		std::cout << *me;
	}
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	for (int i = 0; i < 3; i++) {
		me->attack(sm);
	}
	std::cout << *me;
	me->equip(pf);
	std::cout << *me;
	me->attack(sm);
	std::cout << *me;
	std::cout << std::endl;
	std::cout << GREEN << "/-------------EXTRA PART 2-------------/" << RESET << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	Character petya("Petya");
	std::cout << petya;
	Character* vasya = new Character("Vasya", 80, pf);
	std::cout << *vasya;
	Enemy* bab = new EvilBabushka();
	petya.equip(pr);
	std::cout << petya;
	std::cout << bab->getType() << " has " << bab->getHP() << "HP" << std::endl;
	petya.attack(bab);
	std::cout << petya;
	std::cout << bab->getType() << " has " << bab->getHP() << "HP" << std::endl;
	vasya->attack(bab);
	std::cout << *vasya;
	std::cout << bab->getType() << " has " << bab->getHP() << "HP" << std::endl;
	vasya->attack(bab);
	std::cout << *vasya;
	return 0;
}

#include <iostream>

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	me->unequip(1);
	delete tmp;
	std::cout << std::endl;
	std::cout << std::endl;
	me->use(0, *bob);
	me->use(1, *bob);
	tmp = src->createMateria("fire");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	std::cout << std::endl;
	std::cout << std::endl;
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);
	me->use(4, *bob);
	std::cout << std::endl;
	std::cout << std::endl;
	IMateriaSource* srcTwo = new MateriaSource();
	srcTwo->learnMateria(new Ice());
	srcTwo->learnMateria(new Ice());
	srcTwo->learnMateria(new Ice());
	srcTwo->learnMateria(new Ice());
	srcTwo->learnMateria(new Cure());
	ICharacter* you = new Character("you");
	ICharacter* jim = new Character("jim");
	tmp = srcTwo->createMateria("cure");
	you->equip(tmp);
	you->use(0, *jim);
	tmp = srcTwo->createMateria("ice");
	you->equip(tmp);
	you->use(0, *jim);
	you = me;
	std::cout << std::endl;
	std::cout << std::endl;
	AMateria* tmpTwo;
	tmpTwo = srcTwo->createMateria("ice");
	tmpTwo->use(*you);
	std::cout << tmpTwo->getXP() << std::endl;
	tmpTwo->use(*you);
	std::cout << tmpTwo->getXP() << std::endl;
	delete bob;
	delete jim;
	delete me;
	delete src;
	delete srcTwo;
	return 0;
}
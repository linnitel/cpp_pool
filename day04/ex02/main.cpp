
#include <iostream>
#include "AssaultTerminator.hpp"
#include "Squad.hpp"
#include "TacticalMarine.hpp"


# define RESET		"\x1B[0m"
# define GREEN		"\x1B[32m"
# define MAGENTA	"\x1B[35m"
# define CYAN		"\x1B[36m"

int main()
{
	std::cout << GREEN << "/-------------SUBJECT PART-------------/" << RESET << std::endl;
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISquad* vlc = new Squad;
	std::cout << "There are: " << vlc->getCount() << " units in the squad" << std::endl;
	std::cout << "Adding bob to the squad" << std::endl;
	vlc->push(bob);
	std::cout << "Adding jim to the squad" << std::endl;
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << GREEN << "/-------------EXTRA PART-------------/" << RESET << std::endl;
	std::cout << CYAN << "/...........Push the same unit check.........../" << RESET << std::endl;
	std::cout << "There are: " << vlc->getCount() << " units in the squad" << std::endl;
	std::cout << "Adding bob to the squad" << std::endl;
	vlc->push(bob);
	std::cout << "Adding NULL to the squad" << std::endl;
	vlc->push(NULL);
	std::cout << "There are: " << vlc->getCount() << " units in the squad" << std::endl;
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << CYAN << "/...........Assignation operator check.........../" << RESET << std::endl;
	ISpaceMarine* jake;
	jake = jim;
	jake->battleCry();
	jake->rangedAttack();
	jake->meleeAttack();
	std::cout << CYAN << "/...........clone function check.........../" << RESET << std::endl;
	ISpaceMarine* curTwo = bob->clone();
	curTwo->battleCry();
	curTwo->rangedAttack();
	curTwo->meleeAttack();
	std::cout << GREEN << "/...........Destructors.........../" << RESET << std::endl;
	delete vlc;
	delete curTwo;
	return 0;
}

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
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	std:cout << std::endl;
	std:cout << std::endl;
	std::cout << GREEN << "/-------------EXTRA PART-------------/" << RESET << std::endl;

	std::cout << GREEN << "/-------------Destructors-------------/" << RESET << std::endl;
	delete vlc;
	return 0;
}
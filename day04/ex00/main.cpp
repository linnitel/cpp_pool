
#include <iostream>
#include "Sorcerer.hpp"
#include "Peon.hpp"
#include "Victim.hpp"

int main() {
	std::cout << "/-------------SUBJECT PART-------------/" << std::endl;
    Sorcerer robert("Robert", "the Magnificent");
    Victim jim("Jimmy");
    Peon joe("Joe");

    std::cout << robert << jim << joe;
    robert.polymorph(jim);
    robert.polymorph(joe);

	std::cout << "/-------------EXTRA PART-------------/" << std::endl;
	std::cout << robert.getName() << ": <Hello, I am " << robert.getName() << "!" << std::endl;
	std::cout << "What a wonderful day for polymorphing something!>" << std::endl;
	Victim jane("Jane");
	jane = jim;
	std::cout << jane << jim;
	Sorcerer edmund(robert);
	Peon bob(joe);
	std::cout << edmund << bob;
	return 0;
}
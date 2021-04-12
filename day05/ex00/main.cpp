
#include <iostream>

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat norman("Norman", 13);
	std::cout << norman;
	norman.upGrade();
	std::cout << norman;
	norman.downGrade();
	std::cout << norman;
	try {
		Bureaucrat sally("Sally", 220);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Bureaucrat gilbert("Gilbert", 0);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Bureaucrat boris("Boris", 1);
		std::cout << boris;
		boris.upGrade();
		std::cout << boris;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Bureaucrat willy("Willy", 150);
		std::cout << willy;
		willy.downGrade();
		std::cout << willy;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}
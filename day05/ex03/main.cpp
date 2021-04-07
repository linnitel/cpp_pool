
#include <iostream>

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	Bureaucrat norman("Norman", 53);
	std::cout << norman;
	norman.upGrade();
	std::cout << norman;
	norman.downGrade();
	std::cout << norman;
	Bureaucrat boris("Boris", 1);
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
	Intern someIntern;
	AForm *B12 = someIntern.makeForm("shrubbery creation", "field");
	AForm *C12 = B12;
	AForm *D45 = someIntern.makeForm("Presidential Pardon", "Alex");
	try {
		norman.signForm(*B12);
		std::cout << *B12 << std::endl;
		norman.signForm(*C12);
		std::cout << *C12 << std::endl;
		norman.signForm(*D45);
		std::cout << *D45 << std::endl;
		norman.signForm(*D45);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		norman.signForm(*B12);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	boris.downGrade();
	boris.downGrade();
	std::cout << boris;
	boris.executeForm(*B12);
	AForm *B200 = someIntern.makeForm("Robotomy request", "Andrew");
	std::cout << *B200;
	try {
		boris.executeForm(*B200);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	boris.signForm(*B200);
	boris.executeForm(*B200);
	boris.signForm(*D45);
	boris.executeForm(*D45);
	AForm *Z00 = someIntern.makeForm("Some request", "Pababam");
	(void)Z00;
	return 0;
}
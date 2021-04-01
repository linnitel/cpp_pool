
#include <iostream>

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat norman("Norman", 53);
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
	Form *B12 = new Form("B12", 25, 10);
	Form *C12 = B12;
	Form D45("D45", 130, 50);
	try {
		norman.signForm(*B12);
		std::cout << *B12 << std::endl;
		norman.signForm(*C12);
		std::cout << *C12 << std::endl;
		norman.signForm(D45);
		std::cout << D45 << std::endl;
		norman.signForm(D45);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}
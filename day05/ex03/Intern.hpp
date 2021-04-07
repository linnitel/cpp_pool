
#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
#include <cctype>
# include "Bureaucrat.hpp"
# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"

# define NUM_FORMS 3

class Intern {

private:
	AForm *someForm[NUM_FORMS];
	std::string _stringToLower(std::string str);

public:
	Intern();
	Intern(Intern const &intern);
	~Intern();

	void operator=(const Intern &I);

	AForm *makeForm(std::string name, std::string target);
};

#endif

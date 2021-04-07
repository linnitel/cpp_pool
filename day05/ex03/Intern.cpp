
#include "Intern.hpp"

Intern::Intern() {
	this->someForm[0] = new ShrubberyCreationForm("default");
	this->someForm[1] = new PresidentialPardonForm("default");
	this->someForm[2] = new RobotomyRequestForm("default");
}

Intern::~Intern() {
	for (int i = 0; i < NUM_FORMS; i++) {
		delete this->someForm[i];
	}
}

Intern::Intern(const Intern &intern) {
	this->someForm[0] = new ShrubberyCreationForm("default");
	this->someForm[1] = new PresidentialPardonForm("default");
	this->someForm[2] = new RobotomyRequestForm("default");
	*this = intern;
}

void Intern::operator=(const Intern &I) {
	(void)I;
}

std::string Intern::_stringToLower(std::string str) {
	std::string ret = "";
	for(unsigned int i = 0; i < str.length(); i++) {
		if (std::isupper(str[i])) {
			ret += std::tolower(str[i]);
		}
		else {
			ret += str[i];
		}
	}
	return ret;
}

AForm *Intern::makeForm(std::string name, std::string target) {
	for (int i = 0; i < NUM_FORMS; i++) {
		if (_stringToLower(this->someForm[i]->getName()) == _stringToLower(name))  {
			std::cout << "Intern creates <" << this->someForm[i]->getName() << "> form" << std::endl;
			this->someForm[i]->setTarget(target);
			return (this->someForm[i]);
		}
	}
	std::cout << "Form <" << name << "> does not exist" << std::endl;
	return NULL;
}


#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm("RobotomyRequestForm", ROB_S_GRADE, ROB_E_GRADE),
												_target("Nothing") {
	std::srand(std::time(0));
}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target): AForm("RobotomyRequestForm",
																			   ROB_S_GRADE, ROB_E_GRADE) {
	this->_target = target;
	std::srand(std::time(0));
}

RobotomyRequestForm::~RobotomyRequestForm() {
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &form): AForm("RobotomyRequestForm",
																					   ROB_S_GRADE, ROB_E_GRADE) {
	this->_target = form.getTarget();
	std::srand(std::time(0));
}

std::string RobotomyRequestForm::getTarget() const {
	return this->_target;
}

void RobotomyRequestForm::executeAction() const{
	int success = std::rand() % 2;
	if (success) {
		std::cout << "Bzzzzzzzz, Drrrrrr, Wzhhhhhhhh, AAAAAAAAAA" << std::endl;
		std::cout << this->_target << " has been robotomized" << std::endl;
	}
	else
		std::cout << "Failed to robotomize" << this->_target << ", patient didn't survive the procedure" << std::endl;

}
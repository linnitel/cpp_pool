
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("Presidential pardon", PRES_S_GRADE, PRES_E_GRADE),
											_target("Nothing") {
}

PresidentialPardonForm::PresidentialPardonForm(std::string const &target): AForm("Presidential pardon",
																		   PRES_S_GRADE, PRES_E_GRADE) {
	this->_target = target;
}

PresidentialPardonForm::~PresidentialPardonForm() {
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &form): AForm("Presidential pardon",
																				 PRES_S_GRADE, PRES_E_GRADE) {
	this->_target = form.getTarget();
}

std::string PresidentialPardonForm::getTarget() const {
	return this->_target;
}

void PresidentialPardonForm::executeAction() const{
	std::cout << this->_target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
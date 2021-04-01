
#include "AForm.hpp"

AForm::AForm(): _name("Some form"), _signGrade(LOW_GRADE) , _executeGrade(LOW_GRADE), _signed(0) {
	if (this->_signGrade < HIGH_GRADE || this->_executeGrade < HIGH_GRADE) {
		throw AForm::GradeTooHighException();
	}
	if (this->_signGrade > LOW_GRADE || this->_executeGrade > LOW_GRADE) {
		throw AForm::GradeTooLowException();
	}
}

AForm::AForm(const std::string &name, const int &sGrade, const int &eGrade): _name(name), _signGrade(sGrade),
																			_executeGrade(eGrade), _signed(0) {
	if (this->_signGrade < HIGH_GRADE || this->_executeGrade < HIGH_GRADE) {
		throw AForm::GradeTooHighException();
	}
	if (this->_signGrade > LOW_GRADE || this->_executeGrade > LOW_GRADE) {
		throw AForm::GradeTooLowException();
	}
}

AForm::~AForm() {
}

AForm::AForm(const AForm &form): _name(form.getName()), _signGrade(form.getSignGrade()),
								_executeGrade(form.getExecuteGrade()), _signed(form.getSigned()) {
	if (this->_signGrade < HIGH_GRADE || this->_executeGrade < HIGH_GRADE) {
		throw AForm::GradeTooHighException();
	}
	if (this->_signGrade > LOW_GRADE || this->_executeGrade > LOW_GRADE) {
		throw AForm::GradeTooLowException();
	}
}

void AForm::operator=(const AForm &F) {
	if (F.getSignGrade() < HIGH_GRADE || F.getExecuteGrade() < HIGH_GRADE) {
		throw AForm::GradeTooHighException();
	}
	if (F.getSignGrade() > LOW_GRADE || F.getExecuteGrade() > LOW_GRADE) {
		throw AForm::GradeTooLowException();
	}
	this->_signed = F.getSigned();
}

std::string AForm::getName() const {
	return this->_name;
}

int AForm::getSignGrade() const {
	return this->_signGrade;
}

int AForm::getExecuteGrade() const {
	return this->_executeGrade;
}

bool AForm::getSigned() const {
	return this->_signed;
}

void AForm::beSigned(const Bureaucrat &B) {
	if (!this->_signed) {
		if (B.getGrade() < this->_signGrade) {
			this->_signed = true;
			std::cout << B.getName() << " signs " << this->_name << std::endl;
		}
		else {
			throw AForm::GradeTooLowException();
		}
	}
	else {
		std::cout << this->_name << " form is already signed" << std::endl;
	}
}

void AForm::execute(const Bureaucrat &executor) const {
	if (this->_signed) {
		if (executor.getGrade() > this->_executeGrade) {
			throw AForm::GradeTooLowException();
		}
		else {
			this->executeAction();
		}
	}
	else {
		throw AForm::IsNotSignedException();
	}
}

const char* AForm::GradeTooHighException::what() const throw() {
	return ("Grade is too high");
}

const char* AForm::GradeTooLowException::what() const throw() {
	return ("Grade is too low");
}

const char* AForm::AlreadySignedException::what() const throw() {
	return ("Form is already signed");
}

const char* AForm::IsNotSignedException::what() const throw() {
	return ("Form is not signed, you must sign the form before executing");
}

std::ostream & operator<<(std::ostream & os, const AForm &F) {
	std::string status;
	if (F.getSigned()) { status = "Signed"; }
	else { status = "Unsigned"; }
	os << status << " form <" << F.getName() << ">" << std::endl;
	os << "Grade <" << F.getSignGrade() << "> is needed to sign the form." << std::endl;
	os << "Grade <" << F.getExecuteGrade() << "> is needed to execute the form." << std::endl;
	return os;
}
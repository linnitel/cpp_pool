
#include "Form.hpp"

Form::Form(): _name("Some form"), _signGrade(LOW_GRADE) , _executeGrade(LOW_GRADE), _signed(0) {
	if (this->_signGrade < HIGH_GRADE || this->_executeGrade < HIGH_GRADE) {
		throw Form::GradeTooHighException();
	}
	if (this->_signGrade > LOW_GRADE || this->_executeGrade > LOW_GRADE) {
		throw Form::GradeTooLowException();
	}
}

Form::Form(const std::string &name, const int &sGrade, const int &eGrade): _name(name), _signGrade(sGrade),
																			_executeGrade(eGrade), _signed(0) {
	if (this->_signGrade < HIGH_GRADE || this->_executeGrade < HIGH_GRADE) {
		throw Form::GradeTooHighException();
	}
	if (this->_signGrade > LOW_GRADE || this->_executeGrade > LOW_GRADE) {
		throw Form::GradeTooLowException();
	}
}

Form::~Form() {
}

Form::Form(const Form &form): _name(form.getName()), _signGrade(form.getSignGrade()),
								_executeGrade(form.getExecuteGrade()), _signed(form.getSigned()) {
	if (this->_signGrade < HIGH_GRADE || this->_executeGrade < HIGH_GRADE) {
		throw Form::GradeTooHighException();
	}
	if (this->_signGrade > LOW_GRADE || this->_executeGrade > LOW_GRADE) {
		throw Form::GradeTooLowException();
	}
}

void Form::operator=(const Form &F) {
	if (F.getSignGrade() < HIGH_GRADE || F.getExecuteGrade() < HIGH_GRADE) {
		throw Form::GradeTooHighException();
	}
	if (F.getSignGrade() > LOW_GRADE || F.getExecuteGrade() > LOW_GRADE) {
		throw Form::GradeTooLowException();
	}
	this->_signed = F.getSigned();
}

std::string Form::getName() const {
	return this->_name;
}

int Form::getSignGrade() const {
	return this->_signGrade;
}

int Form::getExecuteGrade() const {
	return this->_executeGrade;
}

bool Form::getSigned() const {
	return this->_signed;
}

void Form::beSigned(const Bureaucrat &B) {
	if (!this->_signed) {
		if (B.getGrade() < this->_signGrade) {
			this->_signed = true;
			std::cout << B.getName() << " signs " << this->_name << std::endl;
		}
		else {
			throw Form::GradeTooLowException();
		}
	}
	else {
		throw Form::AlreadySignedException();
	}
}

const char* Form::GradeTooHighException::what() const throw() {
	return ("Grade is too high");
}

const char* Form::GradeTooLowException::what() const throw() {
	return ("Grade is too low");
}

const char* Form::AlreadySignedException::what() const throw() {
	return ("Form is already signed");
}

std::ostream & operator<<(std::ostream & os, const Form &F) {
	std::string status;
	if (F.getSigned()) { status = "Signed"; }
	else { status = "Unsigned"; }
	os << status << " form <" << F.getName() << ">" << std::endl;
	os << "Grade <" << F.getSignGrade() << "> is needed to sign the form." << std::endl;
	os << "Grade <" << F.getExecuteGrade() << "> is needed to execute the form." << std::endl;
	return os;
}
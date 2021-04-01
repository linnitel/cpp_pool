
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("Tne Bureaucrat"), _grade(HIGH_GRADE) {
}

Bureaucrat::Bureaucrat(const std::string &name, unsigned int const &grade): _name(name), _grade(grade) {
	if (this->_grade < HIGH_GRADE) {
		throw Bureaucrat::GradeTooHighException();
	}
	if (this->_grade > LOW_GRADE) {
		throw Bureaucrat::GradeTooLowException();
	}
}

Bureaucrat::~Bureaucrat() {
}

Bureaucrat::Bureaucrat(const Bureaucrat &bureau) {
	if (this->_grade < HIGH_GRADE) {
		throw Bureaucrat::GradeTooHighException();
	}
	if (this->_grade > LOW_GRADE) {
		throw Bureaucrat::GradeTooLowException();
	}
	*this = bureau;
}

void Bureaucrat::operator=(const Bureaucrat &B) {
	if (this->_grade < HIGH_GRADE) {
		throw Bureaucrat::GradeTooHighException();
	}
	if (this->_grade > LOW_GRADE) {
		throw Bureaucrat::GradeTooLowException();
	}
	this->_grade = B.getGrade();
}

std::string Bureaucrat::getName() const {
	return this->_name;
}

int Bureaucrat::getGrade() const {
	return this->_grade;
}

void Bureaucrat::downGrade() {
	this->_grade++;
	if (this->_grade > LOW_GRADE) {
		throw Bureaucrat::GradeTooLowException();
	}
}

void Bureaucrat::upGrade() {
	this->_grade--;
	if (this->_grade < HIGH_GRADE) {
		throw Bureaucrat::GradeTooHighException();
	}
}

void Bureaucrat::signForm(Form &form) {
	try {
		form.beSigned(*this);
	}
	catch (std::exception &e) {
		std::cout << this->_name << " cannot signs " << form.getName() << " because " << e.what() << std::endl;
		return ;
	}
}

std::ostream & operator<<(std::ostream & os, const Bureaucrat &B) {
	os << B.getName() << ", bureaucrat grade " << B.getGrade() << std::endl;
	return os;
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Error: Grade is too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Error: Grade is too low");
}
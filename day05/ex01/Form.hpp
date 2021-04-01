
#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>

class Bureaucrat;
# include "Bureaucrat.hpp"

class Form {

private:
	std::string const _name;
	int const _signGrade;
	int const _executeGrade;
	bool _signed;
	Form();
	void operator=(const Form &F);

public:
	Form(std::string const &name, int const &sGrade, int const &eGrade);
	Form(Form const &form);
	virtual ~Form();

	std::string getName() const;
	int getSignGrade() const;
	int getExecuteGrade() const;
	bool getSigned() const;

	void beSigned(const Bureaucrat &B);

	class GradeTooHighException: public std::exception {
		virtual const char* what() const throw();
	};

	class GradeTooLowException: public std::exception {
		virtual const char* what() const throw();
	};


	class AlreadySignedException: public std::exception {
		virtual const char* what() const throw();
	};
};

std::ostream & operator<<(std::ostream & os, const Form &F);

#endif

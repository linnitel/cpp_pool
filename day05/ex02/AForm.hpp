
#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>

class Bureaucrat;
# include "Bureaucrat.hpp"

class AForm {

private:
	std::string const _name;
	int const _signGrade;
	int const _executeGrade;
	bool _signed;
	AForm();
	void operator=(const AForm &F);

public:
	AForm(std::string const &name, int const &sGrade, int const &eGrade);
	AForm(AForm const &form);
	virtual ~AForm();

	std::string getName() const;
	int getSignGrade() const;
	int getExecuteGrade() const;
	bool getSigned() const;

	void beSigned(const Bureaucrat &B);
	void execute(Bureaucrat const & executor) const;
	virtual void executeAction() const = 0;

	class GradeTooHighException: public std::exception {
		virtual const char* what() const throw();
	};

	class GradeTooLowException: public std::exception {
		virtual const char* what() const throw();
	};

	class AlreadySignedException: public std::exception {
		virtual const char* what() const throw();
	};

	class IsNotSignedException: public std::exception {
		virtual const char* what() const throw();
	};
};

std::ostream & operator<<(std::ostream & os, const AForm &F);

#endif

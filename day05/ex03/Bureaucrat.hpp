
#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class AForm;
# include "AForm.hpp"

# define HIGH_GRADE 1
# define LOW_GRADE 150

class Bureaucrat {

private:
	std::string const _name;
	int _grade;

	Bureaucrat();

public:
	Bureaucrat(std::string const &name, unsigned int const &grade);
	Bureaucrat(Bureaucrat const &bureau);
	~Bureaucrat();

	std::string getName() const;
	int getGrade() const;

	void operator=(const Bureaucrat &B);

	void downGrade();
	void upGrade();
	void signForm(AForm &form);
	void executeForm(AForm const & form);

	class GradeTooHighException: public std::exception {
		virtual const char* what() const throw();
	};

	class GradeTooLowException: public std::exception {
		virtual const char* what() const throw();
	};
};

std::ostream & operator<<(std::ostream & os, const Bureaucrat &B);

#endif

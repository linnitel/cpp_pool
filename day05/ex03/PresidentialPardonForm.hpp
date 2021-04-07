
#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"

# define PRES_S_GRADE 25
# define PRES_E_GRADE 5

class PresidentialPardonForm: public AForm  {

private:
	std::string _target;
	PresidentialPardonForm();
	PresidentialPardonForm(PresidentialPardonForm const &form);
	void operator=(const PresidentialPardonForm &PPF);

public:
	PresidentialPardonForm(std::string const &target);
	virtual ~PresidentialPardonForm();

	std::string getTarget() const;
	void setTarget(std::string const &target);

	virtual void executeAction() const;
};

#endif

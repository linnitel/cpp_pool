
#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <sstream>
# include <fstream>
# include "AForm.hpp"

# define SHRUB_S_GRADE 145
# define SHRUB_E_GRADE 137

class ShrubberyCreationForm: public AForm {

private:
	std::string _target;
	ShrubberyCreationForm();
	ShrubberyCreationForm(ShrubberyCreationForm const &form);
	void operator=(const ShrubberyCreationForm &SCF);

public:
	ShrubberyCreationForm(std::string const &target);
	virtual ~ShrubberyCreationForm();

	std::string getTarget() const;

	virtual void executeAction() const;
};

#endif

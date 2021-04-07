
#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"
# define ROB_S_GRADE 72
# define ROB_E_GRADE 45

class RobotomyRequestForm: public AForm  {

private:
	std::string _target;
	RobotomyRequestForm();
	void operator=(const RobotomyRequestForm &RRF);
	RobotomyRequestForm(RobotomyRequestForm const &form);

public:
	RobotomyRequestForm(std::string const &target);
	virtual ~RobotomyRequestForm();

	std::string getTarget() const;
	void setTarget(std::string const &target);

	virtual void executeAction() const;
};

#endif

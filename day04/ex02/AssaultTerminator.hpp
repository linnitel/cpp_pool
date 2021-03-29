#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

# include <iostream>
# include "ISpaceMarine.hpp"

class AssaultTerminator: public ISpaceMarine {

public:
	AssaultTerminator();
	AssaultTerminator(AssaultTerminator const &terminator);
	virtual ~AssaultTerminator();

	void operator=(const AssaultTerminator &AT);

	virtual ISpaceMarine* clone() const;
	virtual void battleCry() const;
	virtual void rangedAttack() const;
	virtual void meleeAttack() const;
};

#endif

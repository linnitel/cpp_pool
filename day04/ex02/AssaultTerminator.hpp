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

	ISpaceMarine* clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;
};

#endif


#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

# include <iostream>
# include "ISpaceMarine.hpp"

class TacticalMarine: public ISpaceMarine {

public:
	TacticalMarine();
	TacticalMarine(TacticalMarine const &marine);
	virtual ~TacticalMarine();

	void operator=(const TacticalMarine &TM);

	virtual ISpaceMarine* clone() const;
	virtual void battleCry() const;
	virtual void rangedAttack() const;
	virtual void meleeAttack() const;
};

#endif

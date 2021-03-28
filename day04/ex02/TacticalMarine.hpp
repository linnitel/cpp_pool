
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

	ISpaceMarine* clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;
};

#endif

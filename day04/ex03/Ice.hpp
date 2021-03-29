
#ifndef ICE_HPP
#define ICE_HPP

# include <iostream>
# include "AMateria.hpp"

class Ice: public AMateria {

public:
	Ice();
	Ice(Ice const & ice);
	virtual ~Ice();

	void operator=(const Ice &I);

	virtual Ice* clone() const;
	virtual void use(ICharacter& target);
};

#endif

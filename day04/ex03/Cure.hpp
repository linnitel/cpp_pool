
#ifndef CURE_HPP
#define CURE_HPP

# include <iostream>
# include "AMateria.hpp"

class Cure: public AMateria {

public:
	Cure();
	Cure(Cure const & cure);
	virtual ~Cure();

	void operator=(const Cure &C);

	virtual Cure* clone() const;
	virtual void use(ICharacter& target);
};

#endif

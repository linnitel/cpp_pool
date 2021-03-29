
#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>

class ICharacter;
# include "ICharacter.hpp"

# define XP_ICR 10

class AMateria {

private:
	std::string	const _type;
	unsigned int _xp;

	AMateria();

public:
	AMateria(std::string const & type);
	AMateria(AMateria const & materia);
	virtual ~AMateria();

	void operator=(const AMateria &AM);

	std::string const & getType() const; //Returns the materia type
	unsigned int getXP() const; //Returns the Materia's XP
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif

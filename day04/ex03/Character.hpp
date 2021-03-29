
#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "ICharacter.hpp"

class Character: public ICharacter {

private:
	std::string _name;
	AMateria* _materia[MAX_MATERIA];

	Character();

public:
	Character(std::string const &name);
	Character(Character const & character);
	virtual ~Character();

	void operator=(const Character &C);

	virtual std::string const & getName() const;

	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);
};


#endif

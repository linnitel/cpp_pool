
#ifndef CHARACTER_HPP
#define CHARACTER_HPP

# include <iostream>
# include "ICharacter.hpp"

# define MAX_MATERIA 4

class Character: public ICharacter {

private:
	std::string _name;
	AMateria* _materia[MAX_MATERIA];
	unsigned int _num;

	Character();

public:
	Character(std::string const &name);
	Character(Character const & character);
	virtual ~Character() {}

	void operator=(const Character &C);

	virtual std::string const & getName() const;
	unsigned int const &getNum() const;

	void setNum(unsigned int const &num);

	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);
};


#endif

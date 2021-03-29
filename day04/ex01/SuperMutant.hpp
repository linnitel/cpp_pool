
#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include <iostream>
# include "Enemy.hpp"


class SuperMutant : public Enemy {

private:
	static const int _dmgReduce = 3;

public:
	SuperMutant();
	SuperMutant(SuperMutant const &super);
    ~SuperMutant();

	virtual void takeDamage(int dmg);
};

#endif

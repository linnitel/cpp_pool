
#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include <iostream>
# include "Enemy.hpp"
# define DMG_REDUCE 3

class SuperMutant : virtual public Enemy {

public:
	SuperMutant();
    ~SuperMutant();

	void takeDamage(int dmg);

};

#endif

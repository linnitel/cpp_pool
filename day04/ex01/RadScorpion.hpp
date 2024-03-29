
#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include <iostream>
# include "Enemy.hpp"

class RadScorpion : public Enemy {

public:
	RadScorpion();
	RadScorpion(RadScorpion const &rad);
    ~RadScorpion();

	virtual void takeDamage(int dmg);
};

#endif

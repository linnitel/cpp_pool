
#ifndef EVILBABUSHKA_HPP
# define EVILBABUSHKA_HPP

# include <iostream>
# include "Enemy.hpp"

class EvilBabushka : public Enemy {

private:
	static const int _dmgReduce = 35;

public:
	EvilBabushka();
	EvilBabushka(EvilBabushka const &baba);
    virtual ~EvilBabushka();

	virtual void takeDamage(int dmg);
};

#endif

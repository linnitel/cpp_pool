
#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "AWeapon.hpp"

class Character {

private:
	Character();
	std::string _name;
	int _ap;
	Weapon *_weapon;

public:
	Character(std::string const & name);
    ~Character();

	void operator=(const Character &C);

	void recoverAP();
	void equip(AWeapon *weapon);
	void attack(Enemy *enemy);

	std::string const &getName() const;

	virtual void takeDamage(int dmg);

};

#endif

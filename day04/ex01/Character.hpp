
#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "AWeapon.hpp"
# include "PlasmaRifle.hpp"
# include "PowerFist.hpp"
# include "Enemy.hpp"
# include "SuperMutant.hpp"
# include "RadScorpion.hpp"

# define RESET		"\x1B[0m"
# define GREEN		"\x1B[32m"
# define MAGENTA	"\x1B[35m"
# define CYAN		"\x1B[36m"

# define START_AP 40
# define RECOVER 10

class Character {

private:
	Character();
	std::string _name;
	int _maxAP;
	int _ap;
	AWeapon *_weapon;

public:
	Character(std::string const & name);
	Character(std::string const & name, int const &startAp);
	Character(std::string const & name, AWeapon *beginWeapon);
	Character(std::string const & name, int const &startAp, AWeapon *beginWeapon);
	Character(Character const &character);
    ~Character();

	void operator=(const Character &C);

	void recoverAP();
	void equip(AWeapon *weapon);
	void attack(Enemy *enemy);

	std::string const &getName() const;
	int const &getAP() const;
	AWeapon *getAWeapon() const;
};

std::ostream & operator<<(std::ostream & os, const Character &C);

#endif


#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>

class AWeapon {

private:
	AWeapon();
	std::string _name;
	int _apcost;
	int _damage;

public:
	AWeapon(std::string const &name, int apcost, int damage);
    virtual ~AWeapon();

	void operator=(const AWeapon &A);

	std::string const &getName() const;
	int getAPCost() const;
	int getDamage() const;

	void attack() const = 0;

};

#endif

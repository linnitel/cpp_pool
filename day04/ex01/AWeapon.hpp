
#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>

# define RESET		"\x1B[0m"
# define GREEN		"\x1B[32m"
# define MAGENTA	"\x1B[35m"
# define CYAN		"\x1B[36m"

class AWeapon {

private:
	AWeapon();
	std::string _name;
	int _apcost;
	int _damage;

public:
	AWeapon(std::string const &name, int apcost, int damage);
	AWeapon(AWeapon const &AW);
    virtual ~AWeapon();

	void operator=(const AWeapon &A);

	std::string const &getName() const;
	int const &getAPCost() const;
	int const &getDamage() const;

	virtual void attack() const = 0;

};

#endif

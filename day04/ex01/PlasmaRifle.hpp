
#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include <iostream>
# include "AWeapon.hpp"

class PlasmaRifle : virtual public AWeapon {

public:
	PlasmaRifle();
    ~PlasmaRifle();

	void operator=(const PlasmaRifle &P);

	void attack() const;

};

#endif

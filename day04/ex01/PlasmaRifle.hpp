
#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include <iostream>
# include "AWeapon.hpp"

class PlasmaRifle : virtual public AWeapon {

public:
	PlasmaRifle();
	PlasmaRifle(PlasmaRifle const &plasma);
    virtual ~PlasmaRifle();

	void operator=(const PlasmaRifle &P);

	void attack() const;

};

#endif


#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include <iostream>
# include "AWeapon.hpp"

class PlasmaRifle : virtual public AWeapon {

public:
	PlasmaRifle();
	PlasmaRifle(const PlasmaRifle &plasma);
    virtual ~PlasmaRifle();

	void operator=(const PlasmaRifle &P);

	virtual void attack() const;

};

#endif

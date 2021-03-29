
#ifndef WIRTSLEG_HPP
# define WIRTSLEG_HPP

# include <iostream>

class AWeapon;
# include "AWeapon.hpp"

class WirtsLeg : public AWeapon {

public:
	WirtsLeg();
	WirtsLeg(WirtsLeg const &leg);
    virtual ~WirtsLeg();

	void operator=(const WirtsLeg &P);

	virtual void attack() const;
};

#endif


#ifndef WIRTSLEG_HPP
# define WIRTSLEG_HPP

# include <iostream>
# include "AWeapon.hpp"

class WirtsLeg : public AWeapon {

public:
	WirtsLeg();
	WirtsLeg(WirtsLeg const &leg);
    virtual ~WirtsLeg();

	void operator=(const WirtsLeg &P);

	void attack() const;
};

#endif

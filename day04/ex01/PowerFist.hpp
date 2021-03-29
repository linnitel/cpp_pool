
#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include <iostream>
# include "AWeapon.hpp"

class PowerFist : public AWeapon {

public:
	PowerFist();
	PowerFist(PowerFist const &power);
    ~PowerFist();

	void operator=(const PowerFist &P);

	virtual void attack() const;

};

#endif

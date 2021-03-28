
#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include <iostream>
# include "AWeapon.hpp"

class PowerFist : virtual public AWeapon {

public:
	PowerFist();
	PowerFist(PowerFist const &power);
    ~PowerFist();

	void operator=(const PowerFist &P);

	void attack() const;

};

#endif

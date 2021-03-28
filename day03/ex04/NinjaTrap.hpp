
#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class NinjaTrap: virtual public ClapTrap {

protected:
	static const unsigned int _defHitPoints = 60;
	static const unsigned int _defMaxHitPoints = 60;
	static const unsigned int _defEnergyPoints = 120;
	static const unsigned int _defMaxEnergyPoints = 120;
	static const unsigned int _defLevel = 1;
	static const unsigned int _defMeleeDamage = 60;
	static const unsigned int _defRangeDamage = 5;
	static const unsigned int _defArmorDamageReduction = 0;

public:
	NinjaTrap();
    NinjaTrap(std::string const &name);
    NinjaTrap(NinjaTrap &trap);
    virtual ~NinjaTrap();

    void operator=(const NinjaTrap &F);

	void ninjaShoebox(ClapTrap &trap);
    void ninjaShoebox(NinjaTrap &trap);
    void ninjaShoebox(FragTrap &trap);
    void ninjaShoebox(ScavTrap &trap);
};

#endif

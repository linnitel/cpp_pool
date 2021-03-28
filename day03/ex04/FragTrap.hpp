
#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

# define RANDOM_ENERGY_COST 25

class FragTrap: virtual public ClapTrap {

protected:
	static const unsigned int _defHitPoints = 100;
	static const unsigned int _defMaxHitPoints = 100;
	static const unsigned int _defEnergyPoints = 100;
	static const unsigned int _defMaxEnergyPoints = 100;
	static const unsigned int _defLevel = 1;
	static const unsigned int _defMeleeDamage = 30;
	static const unsigned int _defRangeDamage = 20;
	static const unsigned int _defArmorDamageReduction = 5;

public:
	FragTrap();
    FragTrap(std::string const &name);
    FragTrap(FragTrap &trap);
    virtual ~FragTrap();

    void operator=(const FragTrap &F);

	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
    int vaulthunter_dot_exe(std::string const & target);
};

#endif

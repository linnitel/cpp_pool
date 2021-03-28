
#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

# define RANDOM_ENERGY_COST 25

class FragTrap: public ClapTrap {

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

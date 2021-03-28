
#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap {

public:
	ScavTrap();
    ScavTrap(std::string const &name);
    ScavTrap(ScavTrap &trap);
    virtual ~ScavTrap();

    void operator=(const ScavTrap &F);

    void challengeNewcomer(std::string const & target);
};

#endif

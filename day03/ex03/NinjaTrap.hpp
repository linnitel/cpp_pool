
#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap {

public:
    ScavTrap(std::string const &name);
    ScavTrap(ScavTrap &trap);
    ~ScavTrap();

    void operator=(const ScavTrap &F);

    void challengeNewcomer(std::string const & target);
};

#endif

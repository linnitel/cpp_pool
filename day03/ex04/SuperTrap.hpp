
#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include <iostream>
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap: virtual public FragTrap, virtual public NinjaTrap {

public:
    SuperTrap(std::string const &name);
    SuperTrap(SuperTrap &trap);
    virtual ~SuperTrap();

    void operator=(const SuperTrap &F);
};

#endif


#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include <iostream>
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap: public FragTrap, public NinjaTrap {

public:
	SuperTrap();
    SuperTrap(std::string const &name);
    SuperTrap(SuperTrap &trap);
    virtual ~SuperTrap();

    void operator=(const SuperTrap &S);

	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
};

#endif

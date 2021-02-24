
#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class NinjaTrap: virtual public ClapTrap {

public:
    NinjaTrap(std::string const &name);
    NinjaTrap(NinjaTrap &trap);
    virtual ~NinjaTrap();

    void operator=(const NinjaTrap &F);

    void ninjaShoebox(NinjaTrap &trap);
	void ninjaShoebox(FragTrap &trap);
	void ninjaShoebox(ScavTrap &trap);
};

#endif


#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap {

public:
    FragTrap(std::string const &name);
    FragTrap(FragTrap &trap);
    virtual ~FragTrap();

    void operator=(const FragTrap &F);

    int vaulthunter_dot_exe(std::string const & target);
};

#endif

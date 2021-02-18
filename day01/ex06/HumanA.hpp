
#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanA {

private:
    std::string _name;
    const Weapon &_weapon;

public:
    HumanA(std::string name, Weapon const &weapon);
    ~HumanA();

    void attack();
};

#endif

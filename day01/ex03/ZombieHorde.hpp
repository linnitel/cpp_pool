
#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include <iostream>
# include "Zombie.hpp"

class ZombieHorde {

private:
    int _num;
    Zombie *_zombieHorde;
    std::string _getRandomName() const;
    std::string _getRandomType() const;

public:
    ZombieHorde();
    ZombieHorde(int N);
    ~ZombieHorde();

    void announce();

};

#endif


#ifndef ZOMBIEHORD_HPP
# define ZOMBIEHORD_HPP

# include <iostream>
# include "Zombie.hpp"

class ZombieHord {

private:
    int _num;
    Zombie *_zombieHord;
    std::string _getRandomName() const;
    std::string _getRandomType() const;

public:
    ZombieHord();
    ZombieHord(int N);
    ~ZombieHord();

    void announce();

};

#endif

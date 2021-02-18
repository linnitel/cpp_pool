
#ifndef ZOMBIEEVENT_H
# define ZOMBIEEVENT_H

# include <iostream>
# include "Zombie.hpp"

class ZombieEvent {

private:
    std::string _type;
    std::string _getRandomName() const;

public:
    ZombieEvent();
    ZombieEvent(std::string const &type);
    ~ZombieEvent();

    void setZombieType(std::string const &type);
    Zombie* newZombie(std::string const &name);
    Zombie* randomChump();

};

#endif

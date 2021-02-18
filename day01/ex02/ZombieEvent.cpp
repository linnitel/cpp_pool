
#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent() {
}

ZombieEvent::ZombieEvent(std::string const &type): _type(type) {
}

ZombieEvent::~ZombieEvent() {
}

void ZombieEvent::setZombieType(std::string const &type) {
    this->_type = type;
}

Zombie * ZombieEvent::newZombie(std::string const &name) {
    return (new Zombie(name, this->_type));
}

std::string ZombieEvent::_getRandomName() const{
    std::string name = "";
    int numLetters[] = {3, 4, 5, 6, 7, 8};
    char consonants[] = {'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','z'};
    char vowels[] = {'a','e','i','o','u','y'};
    int nameLen;

    std::srand(std::time(0));
    nameLen = numLetters[std::rand() % 6];
    for (int i = 0; i < nameLen; i++) {
        if (i == 0)
            name += (char)std::toupper(consonants[std::rand() % 20]);
        else {
            if (i % 2 == 0) {
                if (std::rand() % 6 > 2)
                    name += vowels[std::rand() % 6];
                else
                    name += consonants[std::rand() % 20];
            }
            else {
                if (std::rand() % 6 > 2)
                    name += consonants[std::rand() % 20];
                else
                    name += vowels[std::rand() % 6];
            }
        }
    }
    return (name);
}

Zombie * ZombieEvent::randomChump() {
    std::string name;
    Zombie *champZombie;
    name = this->_getRandomName();
    champZombie = this->newZombie(name);
    return (champZombie);
}
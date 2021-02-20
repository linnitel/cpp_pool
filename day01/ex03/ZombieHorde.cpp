
# include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde() {
    std::srand(std::time(0));
}

ZombieHorde::ZombieHorde(int N): _num(N) {
    _zombieHorde = new Zombie[_num];
    if (_num <= 0) {
        std::cout << "No, this is wrong number of zombies, use positive integer" << std::endl;
    }
    else {
        for (int i = 0; i < _num; i++) {
            this->_zombieHorde[i].setName(_getRandomName());
            this->_zombieHorde[i].setType(_getRandomType());
        }
    }
}

ZombieHorde::~ZombieHorde() {
    delete []_zombieHorde;
}

std::string ZombieHorde::_getRandomName() const{
    std::string name = "";
    char consonants[] = {'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','z'};
    char vowels[] = {'a','e','i','o','u','y'};
    int nameLen;

    nameLen = std::rand() % 6 + 3;
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

std::string ZombieHorde::_getRandomType() const{
    std::string list[] = {"The Creature", "Zombie Boss", "Little Zombie", "Zombie Hound", "Stupid Zombie"};

    return (list[std::rand() % 5]);
}

void ZombieHorde::announce() {
    for (int i = 0; i < _num; i++) {
        this->_zombieHorde[i].announce();
    }
}
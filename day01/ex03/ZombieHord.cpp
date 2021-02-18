
# include "ZombieHord.hpp"

ZombieHord::ZombieHord() {
}

ZombieHord::ZombieHord(int N): _num(N) {
    _zombieHord = new Zombie[_num];
    if (_num <= 0) {
        std::cout << "No, this is wrong number of zombies, use positive integer" << std::endl;
    }
    else {
        for (int i = 0; i < _num; i++) {
            this->_zombieHord[i].setName(_getRandomName());
            this->_zombieHord[i].setType(_getRandomType());
        }
    }
}

ZombieHord::~ZombieHord() {
    delete []_zombieHord;
}

std::string ZombieHord::_getRandomName() const{
    std::string name = "";
    char consonants[] = {'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','z'};
    char vowels[] = {'a','e','i','o','u','y'};
    int nameLen;

    std::srand(std::time(0));
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

std::string ZombieHord::_getRandomType() const{
    std::string list[] = {"The Creature", "Zombie Boss", "Little Zombie", "Zombie Hound", "Stupid Zombie"};

    std::srand(std::time(0));
    return (list[std::rand() % 5]);
}

void ZombieHord::announce() {
    for (int i = 0; i < _num; i++) {
        this->_zombieHord[i].announce();
    }
}
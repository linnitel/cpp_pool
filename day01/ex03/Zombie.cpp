
#include "Zombie.hpp"

Zombie::Zombie() {
}

Zombie::Zombie(std::string const &name, std::string const &type): _name(name), _type(type) {
}

Zombie::~Zombie() {
    std::cout << _name << " died. \"Arrgh...\"" << std::endl;
}

void Zombie::setName(std::string name) {
    this->_name = name;
}

void Zombie::setType(std::string type) {
    this->_type = type;
}

std::string Zombie::getName() const {
    return (this->_name);
}

std::string Zombie::getType() const {
    return (this->_type);
}

void Zombie::announce() {
    std::cout << "<" << this->_name << "! (" << this->_type << ")> Braiiiiiiinnnssss..." << std::endl;
}

#include "Victim.hpp"

Victim::Victim(): _name("Victim"){
    std::cout << "Some random victim called " << this->_name << " just appeared!" << std::endl;
}

Victim::Victim(std::string const &name): _name(name) {
    std::cout << "Some random victim called " << this->_name << " just appeared!" << std::endl;
}

Victim::Victim(Victim &victim) {
    *this = victim;
    std::cout << "Some random victim called " << this->_name << " just appeared!" << std::endl;
}

Victim::~Victim() {
    std::cout << "Victim " << this->_name << " just died for no apparent reason!" << std::endl;
}

void Victim::operator=(const Victim &V) {
    std::cout << "Assignation operator called" << std::endl;
    this->_name = V.getName();
}

std::ostream & operator<<(std::ostream & os, const Victim &V) {
    os << "I am " << V.getName() << " and I like otters!" << std::endl;
    return os;
}

std::string Victim::getName() const {
    return (this->_name);
}

void Victim::setName(std::string const &name) {
    this->_name = name;
}

void Victim::getPolymorphed() const {
    std::cout << this->_name << " has been turned into a cute little sheep!" << std::endl;
}
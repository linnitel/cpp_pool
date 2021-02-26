
#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string const &name, std::string const &title): _name(name), _title(title) {
    std::cout << this->_name << ", " << this->_title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer &sorcerer) {
    *this = sorcerer;
    std::cout << this->_name << ", " << this->_title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer() {
    std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same!" << std::endl;
}

void Sorcerer::operator=(const Sorcerer &S) {
    std::cout << "Assignation operator called" << std::endl;
    this->_name = F.getName();
    this->_title = F.getTitle();
}

std::ostream & operator<<(std::ostream & os, const Sorcerer &S) {
    os << "I am " << S.getName() << ", " << S.getTitle() << ", and I like ponies!";
    return os;
};

std::string Sorcerer::getName() const {
    return (this->_name);
}

void Sorcerer::setName(std::string const &name) {
    this->_name = name;
}

std::string Sorcerer::getTitle() const {
    return (this->_title);
}

void Sorcerer::setTitle(std::string const &title) {
    this->_title = title;
}

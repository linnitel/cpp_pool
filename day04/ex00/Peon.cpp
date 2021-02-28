
#include "Peon.hpp"

Peon::Peon(): Victim("Peon"){
    std::cout << "Zog zog." << std::endl;
}

Peon::Peon(std::string const &name): Victim(name) {
    std::cout << "Zog zog." << std::endl;
}

Peon::Peon(Peon &peon): Victim(peon.getName()) {
    *this = peon;
    std::cout << "Zog zog." << std::endl;
}

Peon::~Peon() {
    std::cout << "Bleuark..." << std::endl;
}

void Peon::operator=(const Peon &S) {
    std::cout << "Assignation operator called" << std::endl;
    this->_name = S.getName();
}

void Peon::getPolymorphed() const {
    std::cout << this->_name << " has been turned into a pink pony!" << std::endl;
}

#include "Human.hpp"

Human::Human(): _brain(Brain("Mary", "white", "124", "56")){
}

Human::~Human() {
}

std::string Human::identify() const{
    return (_brain.identify());
}

const Brain &Human::getBrain() const{
    return (this->_brain);
}
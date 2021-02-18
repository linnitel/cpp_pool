
#include "Brain.hpp"

Brain::Brain() {
}

Brain::Brain(std::string name, std::string colour, std::string memory, std::string IQ): _name(name), _colour(colour), _memory(memory), _IQ(IQ) {
}

Brain::~Brain() {
}

std::string Brain::identify() const{
    std::stringstream ptr;
    ptr << this;
    return (ptr.str());
}

#include "Fixed.hpp"

Fixed::Fixed(): _value(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed &fix) {
    std::cout << "Copy constructor called" << std::endl;
    *this = fix;
}

Fixed::~Fixed() {
    std::cout << "Default constructor called" << std::endl;
}

void Fixed::operator=(const Fixed &F) {
    std::cout << "Assignation operator called" << std::endl;
    this->_value = F.getRawBits();
}

int Fixed::getRawBits() const {
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_value);
};

void Fixed::setRawBits(int const raw) {
    std::cout << "setRawBits member function called" << std::endl;
    this->_value = raw;
};
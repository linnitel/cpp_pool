
#include "Fixed.hpp"

Fixed::Fixed(): _value(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &fix) {
    std::cout << "Copy constructor called" << std::endl;
    *this = fix;
}

Fixed::Fixed(const int &num){
    std::cout << "Int constructor called" << std::endl;
    this->_value = num << this->_point;
}

Fixed::Fixed(const float &num){
    std::cout << "Float constructor called" << std::endl;
    this->_value = roundf(num * (1 << this->_point));
}

Fixed::~Fixed() {
    std::cout << "Default destructor called" << std::endl;
}

void Fixed::operator=(const Fixed &F) {
    std::cout << "Assignation operator called" << std::endl;
    this->_value = F.getRawBits();
}

int Fixed::getRawBits() const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->_value;
};

void Fixed::setRawBits( int const raw ) {
    std::cout << "setRawBits member function called" << std::endl;
    this->_value = raw;
};

float Fixed::toFloat() const {
    float num;

    num = (float)(this->_value) / (1 << this->_point);
    return num;
};

int Fixed::toInt() const {
    return (this->_value >> this->_point);
};

std::ostream & operator<<(std::ostream & os, const Fixed &F) {
    os << F.toFloat();
    return os;
};
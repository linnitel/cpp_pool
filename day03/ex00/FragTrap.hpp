
#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

# define FRAC_BITS 8

class Fixed {

private:
    int _value;
    const static int _point = FRAC_BITS;

public:
    Fixed();
    Fixed(Fixed &fix);
    ~Fixed();

    void operator=(const Fixed &F);
    int getRawBits( void ) const;
    void setRawBits( int const raw );
};

#endif

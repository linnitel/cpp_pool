
#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

# define FRAC_BITS 8

class Fixed {

private:
    int _value;
    const static int _point = FRAC_BITS;

public:
    Fixed();
    Fixed(Fixed const &fix);
    Fixed(const int &num);
    Fixed(const float &num);
    ~Fixed();

    void operator=(const Fixed &F);
    int getRawBits() const;
    void setRawBits(int const raw);
    float toFloat() const;
    int toInt() const;
};

std::ostream & operator<<(std::ostream & os, const Fixed &F);

#endif

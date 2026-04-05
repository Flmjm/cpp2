#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include "colors.hpp"

class Fixed
{

    public:

    Fixed();
    Fixed(const Fixed &obj);
    Fixed& operator=(const Fixed &obj);
    ~Fixed();

    int getRawBits( void ) const;
    void setRawBits( int const raw );

    private:

    int _fixed_point_value;
    static const int _fractionalBits = 8;
};

#endif

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>
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

	// -------------------ex 01
	Fixed(const int nbr);
	Fixed(const float nbr);
	float toFloat( void ) const;
	int toInt( void ) const;

    private:

    int _fixed_point_value;
    static const int _fractionalBits = 8;

};

std::ostream& operator<<(std::ostream &out, const Fixed &obj);

#endif

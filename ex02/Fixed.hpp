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

	// -------------------ex 02
	bool operator>(const Fixed &obj);
	bool operator>=(const Fixed &obj);
	bool operator<(const Fixed &obj);
	bool operator<=(const Fixed &obj);
	bool operator==(const Fixed &obj);
	bool operator!=(const Fixed &obj);

	Fixed operator+(const Fixed &obj);
	Fixed operator*(const Fixed &obj);
	Fixed operator/(const Fixed &obj);
	Fixed operator-(const Fixed &obj);

	Fixed& operator++(void);
	Fixed operator++(int);
	Fixed& operator--(void);
	Fixed operator--(int);

	static Fixed& min(Fixed &a, Fixed &b);
	static const Fixed& min(const Fixed &a, const Fixed &b);
	static Fixed& max(Fixed &a, Fixed &b);
	static const Fixed& max(const Fixed &a, const Fixed &b);


    private:

    int _fixed_point_value;
    static const int _fractionalBits = 8;

	// ------------------ ex02
	static const bool _debugMsg = false;

};

std::ostream& operator<<(std::ostream &out, const Fixed &obj);

#endif

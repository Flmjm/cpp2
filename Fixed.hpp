#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <string>

class Fixed
{

    public:

    Fixed();
    ~Fixed();
    Fixed(const Fixed &obj);
    Fixed& operator=(const Fixed &obj);

    int getRawBits( void ) const;
    void setRawBits( int const raw );

    private:

    int _value;
    static const int _fractionalBits = 8;
};

#endif

#include "Fixed.hpp"

Fixed::Fixed()
{
    _value = 0;    
}

Fixed::~Fixed()
{

}

Fixed::Fixed(const Fixed &obj)
{
    this->_value = obj._value;
}

Fixed& Fixed::operator=(const Fixed &obj)
{
    this->_value = obj._value;
    return *this;
}



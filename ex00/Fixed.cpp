#include "Fixed.hpp"

Fixed::Fixed() : _fixed_point_value(0)
{
	std::cout << GREEN << "Default constructor called" << RESET << std::endl;
}

Fixed::~Fixed()
{
	std::cout << RED << "Destructor called" << RESET << std::endl;
}

Fixed::Fixed(const Fixed &obj) : _fixed_point_value(obj._fixed_point_value)
{
	std::cout << YELLOW << "Copy constructor called" << RESET << std::endl;
}

Fixed& Fixed::operator=(const Fixed &obj)
{
	std::cout << BLUE << "Copy assignment operator called" << RESET << std::endl;
    this->_fixed_point_value = obj._fixed_point_value;
    return *this;
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits" << BOLDMAGENTA << " member " << RESET << "function called" << std::endl;
	return _fixed_point_value;
}

void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits" << BOLDMAGENTA << " member " << RESET << "function called" << std::endl;
	this->_fixed_point_value = raw;
}


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
// --------------------------------------- ex01

Fixed::Fixed(const int nbr) : _fixed_point_value(nbr * (1 << this->_fractionalBits))
{
	std::cout << YELLOW << "Int constructor called" << RESET << std::endl;
}

float Fixed::toFloat( void ) const
{
	return ((float)this->_fixed_point_value / (1 << this->_fractionalBits));
}

int Fixed::toInt( void ) const
{
	return (this->_fixed_point_value >> this->_fractionalBits);
}

Fixed::Fixed(const float nbr) : _fixed_point_value((int)roundf(nbr * (1 << this->_fractionalBits)))
{
	std::cout << YELLOW << "Float constructor called" << RESET << std::endl;
}
std::ostream& operator<<(std::ostream &out ,const Fixed &obj)
{
	out << obj.toFloat();
	return out;
}

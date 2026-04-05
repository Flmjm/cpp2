#include "Fixed.hpp"

Fixed::Fixed() : _fixed_point_value(0)	{if (_debugMsg) std::cout << GREEN << "Default constructor called" << RESET << std::endl;}

Fixed::~Fixed()	{if (_debugMsg) std::cout << RED << "Destructor called" << RESET << std::endl;}

Fixed::Fixed(const Fixed &obj) : _fixed_point_value(obj._fixed_point_value)	{if (_debugMsg) std::cout << YELLOW << "Copy constructor called" << RESET << std::endl;}

Fixed& Fixed::operator=(const Fixed &obj)
{
	if (_debugMsg) std::cout << BLUE << "Copy assignment operator called" << RESET << std::endl;
    this->_fixed_point_value = obj._fixed_point_value;
    return *this;
}

int Fixed::getRawBits( void ) const
{
	if (_debugMsg) std::cout << "getRawBits" << BOLDMAGENTA << " member " << RESET << "function called" << std::endl;
	return _fixed_point_value;
}

void Fixed::setRawBits( int const raw )
{
	if (_debugMsg) std::cout << "setRawBits" << BOLDMAGENTA << " member " << RESET << "function called" << std::endl;
	this->_fixed_point_value = raw;
}
// -------------------------------------------------------------------------------------------------------- ex01

Fixed::Fixed(const int nbr) : _fixed_point_value(nbr * (1 << this->_fractionalBits))
{
	if (_debugMsg) std::cout << YELLOW << "Int constructor called" << RESET << std::endl;
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
	if (_debugMsg) std::cout << YELLOW << "Float constructor called" << RESET << std::endl;
}
std::ostream& operator<<(std::ostream &out ,const Fixed &obj)
{
	out << obj.toFloat();
	return out;
}

// ------------------------------------------------------------------------------------------------------ ex02

bool Fixed::operator>(const Fixed &obj)
{
	if (this->_fixed_point_value > obj._fixed_point_value) return true;
	return false;
}
bool Fixed::operator<(const Fixed &obj)
{
	if (this->_fixed_point_value < obj._fixed_point_value) return true;
	return false;
}
bool Fixed::operator>=(const Fixed &obj)
{
	if (this->_fixed_point_value >= obj._fixed_point_value) return true;
	return false;
}
bool Fixed::operator<=(const Fixed &obj)
{
	if (this->_fixed_point_value <= obj._fixed_point_value) return true;
	return false;
}
bool Fixed::operator==(const Fixed &obj)
{
	if (this->_fixed_point_value == obj._fixed_point_value) return true;
	return false;
}
bool Fixed::operator!=(const Fixed &obj)
{
	if (this->_fixed_point_value != obj._fixed_point_value) return true;
	return false;
}


Fixed Fixed::operator+(const Fixed &obj)
{
	Fixed tmp;
	tmp.setRawBits(this->_fixed_point_value + obj._fixed_point_value);
	return tmp;
}
Fixed Fixed::operator*(const Fixed &obj)
{
	Fixed tmp;
	tmp.setRawBits((this->_fixed_point_value * obj.getRawBits()) >> _fractionalBits);
	return tmp;
}
Fixed Fixed::operator/(const Fixed &obj)
{
    Fixed tmp;
    if (obj.getRawBits() != 0)
		tmp.setRawBits((this->_fixed_point_value << _fractionalBits) / obj.getRawBits());
    else
		std::cout << RED << " (Error : can't divide by 0) " << RESET;
    return tmp;
}
Fixed Fixed::operator-(const Fixed &obj)
{
	Fixed tmp;
	tmp.setRawBits(this->_fixed_point_value - obj._fixed_point_value);
	return tmp;
}

Fixed& Fixed::operator++(void)
{
	_fixed_point_value = _fixed_point_value + 1;
	return *this;
}
Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	this->_fixed_point_value++;
	return tmp;
}

Fixed& Fixed::operator--(void)
{
	_fixed_point_value = _fixed_point_value - 1;
	return *this;
}
Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	this->_fixed_point_value--;
	return tmp;
}

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
	if (a.getRawBits() < b.getRawBits()) return a;
	return b;
}
const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() < b.getRawBits()) return a;
	return b;
}
Fixed& Fixed::max(Fixed &a, Fixed &b)
{
	if (a.getRawBits() > b.getRawBits()) return a;
	return b;
}
const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() > b.getRawBits()) return a;
	return b;
}

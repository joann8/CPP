#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(void) : _nb(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const & src) 
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed::Fixed(const int i) : _nb(i << Fixed::_bits)
{
	std::cout << "Int constructor called" << std::endl;

	return ;
}

Fixed::Fixed(const float f) : _nb(roundf(f * (1 << Fixed::_bits)))
{
	std::cout << "Float constructor called" << std::endl;
	return ;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed & Fixed::operator=(Fixed const & src)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_nb = src.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const
{
//	std::cout << "getRawBits member function called" << std::endl;
	return this->_nb;
}

void Fixed::setRawBits(int const raw)
{
//	std::cout << "setRawBits member function called" << std::endl;
	this->_nb = raw;
	return ;
}

int Fixed::toInt(void) const
{
	return this->_nb >> Fixed::_bits;
}

float Fixed::toFloat(void) const
{
	return (float)this->_nb / (1 << Fixed::_bits);
}

std::ostream & operator<<(std::ostream & output, Fixed const & rhs)
{
	output << rhs.toFloat();
	return output;
}

int const Fixed::_bits = 8;

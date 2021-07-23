#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(void) : _nb(0)
{
	//std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const & src) 
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed::Fixed(const int i) : _nb(i << Fixed::_bits) //sur 8 bits, valeur binaire
{
	//std::cout << "Int constructor called" << std::endl;

	return ;
}

Fixed::Fixed(const float f) : _nb(roundf(f * (1 << Fixed::_bits))) //sur 8 bits, valeur binaire
{
//	std::cout << "Float constructor called" << std::endl;
	return ;
}

Fixed::~Fixed(void)
{
//	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed & Fixed::operator=(Fixed const & src)
{
//	std::cout << "Assignation operator called" << std::endl;
	this->_nb = src.getRawBits();
	return *this;
}

// OPERATEURS COMPARAISON

bool Fixed::operator>(Fixed const& rhs) const
{
	return this->_nb > rhs._nb;
}

bool Fixed::operator<(Fixed const& rhs) const
{
	return this->_nb < rhs._nb;
}

bool Fixed::operator>=(Fixed const& rhs) const
{
	// std::cout << "Greater than or equal to operator called" << std::endl;
	return this->_nb >= rhs._nb;
}

bool Fixed::operator<=(Fixed const& rhs) const
{
	// std::cout << "Less than or equal to operator called" << std::endl;
	return this->_nb <= rhs._nb;
}

bool Fixed::operator==(Fixed const& rhs) const
{
	// std::cout << "Equal to operator called" << std::endl;
	return this->_nb == rhs.getRawBits();
}

bool Fixed::operator!=(Fixed const& rhs) const
{
	// std::cout << "Not equal to operator called" << std::endl;
	return this->_nb != rhs._nb;
}

// OPERATEURS ARITHMETIQUES

Fixed Fixed::operator+(Fixed const& rhs) const
{
	// std::cout << "Addition operator called" << std::endl;
	return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-(Fixed const& rhs) const
{
	// std::cout << "Substraction operator called" << std::endl;
	return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator*(Fixed const& rhs) const
{
	// std::cout << "Multiplication operator called" << std::endl;
	return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/(Fixed const& rhs) const
{
	// std::cout << "Division operator called" << std::endl;
	return Fixed(this->toFloat() / rhs.toFloat());
}

//OPERATEURS PRE/POST IN/DE-CREMENT

Fixed& Fixed::operator++(void)
{
	// std::cout << "Pre-increment operator called" << std::endl;
	this->_nb++;
	return *this;
}

Fixed Fixed::operator++(int)
{
	// std::cout << "Post-increment operator called" << std::endl;
	Fixed tmp = *this;
	++*this;
	return tmp;
}

Fixed& Fixed::operator--(void)
{
	// std::cout << "Pre-decrement operator called" << std::endl;
	this->_nb--;
	return *this;
}

Fixed Fixed::operator--(int)
{
	// std::cout << "Post-decrement operator called" << std::endl;
	Fixed tmp = *this;
	--*this;
	return tmp;
}

//MIN MAX

Fixed& Fixed::min(Fixed& f1, Fixed& f2)
{
	if (f1 < f2) {
		return f1;
	}
	return f2;
}

Fixed const& Fixed::min(Fixed const& f1, Fixed const& f2)
{
	if (f1 < f2) {
		return f1;
	}
	return f2;
}


Fixed& Fixed::max(Fixed& f1, Fixed& f2)
{
	if (f1 > f2) {
		return f1;
	}
	return f2;
}

Fixed const& Fixed::max(Fixed const& f1, Fixed const& f2)
{
	if (f1 > f2) {
		return f1;
	}
	return f2;
}

// FUNCTIONS FROM BEFORE

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
	return this->_nb >> Fixed::_bits; // this value on 8 bits
}

float Fixed::toFloat(void) const
{
	return (float)this->_nb / (1 << Fixed::_bits); // / 256
}

std::ostream & operator<<(std::ostream & output, Fixed const & rhs)
{
	output << rhs.toFloat();
	return output;
}

int const Fixed::_bits = 8;

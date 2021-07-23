#include "AMateria.hpp"

AMateria::AMateria(void) : _type("default"), _xp(0)
{
	return;
}

AMateria::AMateria(std::string const & type) : _type(type), _xp(0)
{
	return ;
}

AMateria::AMateria(AMateria const & src)
{
	*this = src;
	return ;
}

AMateria & AMateria::operator=(AMateria const & src)
{
	this->_xp = src._xp;
	return *this;
}

AMateria::~AMateria(void)
{
	return ;
}

std::string const & AMateria::getType(void) const
{
	return this->_type;
}

unsigned int AMateria::getXP(void) const
{
	return this->_xp;

}

void AMateria::use(ICharacter& target)
{
	(void)target;
	this->_xp += 10;
	return; 
}

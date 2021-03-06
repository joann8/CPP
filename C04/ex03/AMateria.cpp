#include "AMateria.hpp"

AMateria::AMateria(void) : _type("default")
{
	return;
}

AMateria::AMateria(std::string const & type) : _type(type)
{
	return ;
}

AMateria::AMateria(AMateria const & src)
{
	this->_type = src.getType();
	return ;
}

AMateria & AMateria::operator=(AMateria const & src)
{
	if(&src == this)
		return *this;
	this->_type = src.getType();
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

void AMateria::use(ICharacter& target)
{
	(void)target;
	return; 
}

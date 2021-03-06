#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
	return;
}

Cure::Cure(Cure const & src) : AMateria(src)
{
	*this = src;
	return ;
}

Cure & Cure::operator=(Cure const & src)
{
	this->_type = src.getType();
	return *this;
}

Cure::~Cure(void)
{
	return ;
}

AMateria* Cure::clone(void) const
{
	return new Cure();
}

void Cure::use(ICharacter & target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	return;
}

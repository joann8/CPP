#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
	return;
}

Cure::Cure(Cure const & src) : AMateria(src)
{
	return ;
}

Cure & Cure::operator=(Cure const & src)
{
	this->AMateria::operator=(src);
	return *this;
}

Cure::~Cure(void)
{
	return ;
}

AMateria* Cure::clone(void) const
{
	return new Cure(*this);
}

void Cure::use(ICharacter & target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	this->AMateria::use(target);
	return;
}

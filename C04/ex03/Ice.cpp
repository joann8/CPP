#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
	return;
}

Ice::Ice(Ice const & src) : AMateria(src)
{
	return ;
}

Ice & Ice::operator=(Ice const & src)
{
	this->AMateria::operator=(src);
	return *this;
}

Ice::~Ice(void)
{
	return ;
}

AMateria * Ice::clone(void) const
{
	return new Ice(*this);
}

void Ice::use(ICharacter & target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	this->AMateria::use(target);
	return;
}

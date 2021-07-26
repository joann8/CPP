 #include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal::WrongAnimal("WrongCat")
 {
 	std::cout << "A " << getType() << " is born." << std::endl;
	return ;
}

WrongCat::WrongCat(WrongCat const & src) : WrongAnimal(src)
 {
 	this->_type = src.getType();
 	std::cout << "A " << getType() << " is born. (from copy)" << std::endl;
	return ;
}

WrongCat::~WrongCat(void)
{
 	std::cout << "A " << getType() << " is dead." << std::endl;

	return ;
}

WrongCat & WrongCat::operator=(WrongCat const & src)
{
	this->WrongAnimal::_type = src.WrongAnimal::_type;
	return *this;
}

void WrongCat::makeSound(void) const
{	
	std::cout << "rrrrrr" << std::endl;
	return ;
}

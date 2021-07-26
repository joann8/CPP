 #include "Cat.hpp"

Cat::Cat(void) : Animal::Animal("Cat")
 {
 	std::cout << "A " << getType() << " is born." << std::endl;
	return ;
}

Cat::Cat(Cat const & src) : Animal(src)
 {
 	this->_type = getType();
 	std::cout << "A " << getType() << " is born. (from copy)" << std::endl;
	return ;
}

Cat::~Cat(void)
{
 	std::cout << "A " << getType() << " is dead." << std::endl;

	return ;
}

Cat & Cat::operator=(Cat const & src)
{
	this->_type = src.Animal::getType();
	return *this;
}

void Cat::makeSound(void) const
{	
	std::cout << "Miaou" << std::endl;
	return ;
}

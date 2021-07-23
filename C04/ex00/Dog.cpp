 #include "Dog.hpp"

Dog::Dog(void) : Animal::Animal("Dog")
 {
 	std::cout << "A " << getType() << " is born." << std::endl;
	return ;
}

Dog::Dog(Dog const & src) : Animal(src)
 {
 	*this = src;
 	std::cout << "A " << getType() << " is born. (from copy)" << std::endl;
	return ;
}

Dog::~Dog(void)
{
 	std::cout << "A " << getType() << " is dead." << std::endl;

	return ;
}

Dog & Dog::operator=(Dog const & src)
{
	this->Animal::_type = src.Animal::getType();
	return *this;
}

void Dog::makeSound(void) const
{	
	std::cout << "Ouaf Ouaf" << std::endl;
	return ;
}

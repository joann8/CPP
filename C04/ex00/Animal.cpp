 #include "Animal.hpp"

 Animal::Animal(void) : _type("")
 {
 	std::cout << "An animal is born! (from default)" << std::endl;
	return ;
}

Animal::Animal(std::string type) : _type(type)
 {
 	std::cout << "An animal of type " << getType() << " is born!" << std::endl;
	return ;
}

Animal::Animal(Animal const & src)
 {
	this->_type = src.getType();
 	std::cout << "An animal is born! (from copy)" << std::endl;
	return ;
}

Animal::~Animal(void)
{
 	std::cout << "An animal is dead" << std::endl;
	return ;
}

Animal & Animal::operator=(Animal const & src)
{
	this->_type = src.getType();
	return *this;
}

std::string Animal::getType(void) const
{
	return this->_type;
}

void Animal::makeSound(void) const
{
	std::cout << "~Animal random sound~" << std::endl;
	return;
}

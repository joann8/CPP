 #include "WrongAnimal.hpp"

 WrongAnimal::WrongAnimal(void) : _type("")
 {
 	std::cout << "A wrong animal is born! (from default)" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type)
 {
 	std::cout << "A wrong animal of type " << getType() << " is born!" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(WrongAnimal const & src)
 {
 	this->_type = src.getType();
 	std::cout << "A wrong animal is born! (from copy)" << std::endl;
	return ;
}

WrongAnimal::~WrongAnimal(void)
{
 	std::cout << "A wrong animal is dead" << std::endl;
	return ;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & src)
{
	this->_type = src.getType();
	return *this;
}

std::string WrongAnimal::getType(void) const
{
	return this->_type;
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "~WrongAnimal random sound~" << std::endl;
	return;
}

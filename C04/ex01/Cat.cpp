 #include "Cat.hpp"

Cat::Cat(void) : Animal::Animal("Cat"), _brain(new Brain())
 {
 	std::cout << "A " << getType() << " is born." << std::endl;
	return ;
}

Cat::Cat(Cat const & src) : Animal(src)
 {
 	this->_brain = new Brain();
	*(this->_brain) = *src._brain;
	this->_type = src.getType();
 	std::cout << "A " << getType() << " is born. (from copy)" << std::endl;
	return ;
}

Cat::~Cat(void)
{
 	std::cout << "A " << getType() << " is dead." << std::endl;
	delete this->_brain;
	return ;
}

Cat & Cat::operator=(Cat const & src)
{
	if (&src == this)
		return *this;
	this->_type = src.getType();
	delete this->_brain;
	this->_brain = new Brain (*(src._brain));
	return *this;
}

void Cat::makeSound(void) const
{	
	std::cout << "Miaou" << std::endl;
	return ;
}

Brain* Cat::getBrain(void) const
{
	return this->_brain;
}

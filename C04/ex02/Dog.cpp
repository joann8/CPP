 #include "Dog.hpp"

Dog::Dog(void) : Animal::Animal("Dog"), _brain(new Brain())
 {
 	std::cout << "A " << getType() << " is born." << std::endl;
	return ;
}

Dog::Dog(Dog const & src) : Animal(src)
 {
 	this->_brain = new Brain();
	*(this->_brain) = *(src._brain);
 	this->_type = src.getType();
	std::cout << "A " << getType() << " is born. (from copy)" << std::endl;
	return ;
}

Dog::~Dog(void)
{
 	std::cout << "A " << getType() << " is dead." << std::endl;
	delete this->_brain;
	return ;
}

Dog & Dog::operator=(Dog const & src)
{
	if (&src == this)
		return (*this);
	this->_type = src.getType();
	delete this->_brain;
	this->_brain = new Brain(*(src._brain));
	return *this;
}

void Dog::makeSound(void) const
{	
	std::cout << "Ouaf Ouaf" << std::endl;
	return ;
}

Brain* Dog::getBrain(void) const
{
	return this->_brain;
}

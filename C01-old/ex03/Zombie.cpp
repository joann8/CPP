#include "Zombie.hpp"

Zombie::Zombie(void) : _name(""), _type("")
{
	std::cout << "A regular zombie is born." << std::endl;
	return;
}


Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type)
{
	std::cout << "A \"" << this->_type << "\" zombie is born. Welcome to " << this->_name << "!" << std::endl;
	return;
}

Zombie::~Zombie()
{
	std::cout << this->_name << ", \"" << this->_type << "\" zombie, died. RIP." << std::endl;
	return ;
}

void Zombie::create(std::string name, std::string type)
{
	this->_name = name;
	this->_type = type;
	std::cout << "This " << this->_type << " zombie is named " << this->_name << std::endl;
	return;
}

void Zombie::annonce() const
{
	std::cout << "<" << this->_name << " (" << this->_type << ")> Braiiiiiiiinnnssss ..." << std::endl;
	return ;
}

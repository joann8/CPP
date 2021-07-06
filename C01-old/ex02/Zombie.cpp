#include "Zombie.hpp"

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

void Zombie::annonce()
{
	std::cout << "<" << this->_name << " (" << this->_type << ")> Braiiiiiiiinnnssss ..." << std::endl;
	return ;
}

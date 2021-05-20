#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name)
{
	std::cout << "A new zombie is born. Welcome to " << this->_name << "!" << std::endl;
	return;
}

Zombie::~Zombie()
{
	std::cout << this->_name << " died. RIP." << std::endl;
	return ;
}

void Zombie::annonce()
{
	std::cout << "<" << this->get_name() << " (" << this->get_type() << ")> Braiiiiiiiinnnssss ..." << std::endl;
	return ;
}

std::string Zombie::get_name() const
{
	return this->_name;
}

std::string Zombie::get_type() const
{
	return this->_type;
}

void Zombie::set_type(std::string type)
{	
	this->_type = type;
	return ;
}

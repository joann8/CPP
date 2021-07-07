#include "Zombie.hpp"

Zombie::Zombie(void) : _name("")
{
	std::cout << "A new zombie is born." << std::endl;
	return;
}


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
	std::cout << "<" << this->_name << "> BraiiiiiiiinzzzZ ..." << std::endl;
	return ;
}

void Zombie::set_name(std::string name)
{
	this->_name = name;
	return;
}

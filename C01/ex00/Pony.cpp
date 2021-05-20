#include "Pony.hpp"

Pony::Pony(std::string name, std::string color) : _name(name), _color(color)
{
	std::cout << "A " << this->_color << " poney named " << this->_name << " has been created!" << std::endl;
	return ;
}

Pony::~Pony(void)
{
	std::cout << "A " << this->_color << " poney named " << this->_name << " has been destructed!" << std::endl;
	return ;
}

std::string	Pony::get_name() const
{
	return this->_name;
}

void Pony::talk() const
{
	std::cout << "Hello! I am " << this->_name << " and I look awesome in " << this->_color << "!" << std::endl;
}


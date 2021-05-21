#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon_type("")
{
	return;
}

HumanB::~HumanB(void)
{
	return;
}

void	HumanB::attack(void) const
{
	std::stringstream str;

	str << std::uppercase << this->_name;
	str << " attacks with his ";
	str << std::uppercase << this->_weapon_type;
	std::cout << str.str() << std::endl;
	return ;
}

void	HumanB::setWeapon(std::string weapon_type)
{
	this->_weapon_type = weapon_type;
	return ;
}

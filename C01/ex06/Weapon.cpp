#include "Weapon.hpp"

Weapon::Weapon(void) : _weapon("")
{
	return;
}

Weapon::Weapon(std::string weapon) : _weapon(weapon)
{
	return;
}


Weapon::~Weapon(void)
{
	return;
}

void	Weapon::setType(std::string type)
{
	this->_weapon = type;
	return ;
}
	

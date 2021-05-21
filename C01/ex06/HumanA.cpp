#include "HumanA.hpp"

HumanA::HumanA(std::string name, std::string weapon_type) : _name(name), _weapon_type(weapon_type)
{
	return;
}

HumanA::~HumanA(void)
{
	return;
}

void	HumanA::attack(void) const
{
	std::stringstream str;

	str << std::uppercase << this->_name;
	str << " attacks with his ";
	str << std::uppercase << this->_weapon_type;
	std::cout << str.str() << std::endl;
	return ;
}

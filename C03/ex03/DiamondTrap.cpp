#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : FragTrap::FragTrap(), ScavTrap::ScavTrap()
{
	std::cout << "One defaut DiamondTrap is born" << std::endl;
	this->FragTrap::_hp = 100;
	this->ScavTrap::_max_hp = 100;
	this->ScavTrap::_ep = 50;
	this->ScavTrap::_max_ep = 50;
	this->FragTrap::_attack = 30;
	this->ScavTrap::_type = "DiamondTrap";
	return ;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), FragTrap(name), ScavTrap(name), _name(name)
{
	std::cout << "One DiamondTrap is born. Welcome to " << this->_name << "!" << std::endl;
	this->FragTrap::_hp = 100;
	this->ScavTrap::_max_hp = 100;
	this->ScavTrap::_ep = 50;
	this->ScavTrap::_max_ep = 50;
	this->FragTrap::_attack = 30;
	this->ScavTrap::_type = "DiamondTrap";
	ClapTrap::_name = name + "_clap_name";
	return ;
}

DiamondTrap::DiamondTrap(DiamondTrap const & src)
{
	*this = src;
	std::cout << "One DiamondTrap is born from a copy. Welcome to the new " << this->_name << "!" << std::endl;
	return ;
}

DiamondTrap::~DiamondTrap(void) 
{
	std::cout << "One DiamondTrap just died. RIP " << this->_name << std::endl;
	return ;
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const & src)
{
	this->_hp = src.FragTrap::_hp;
	this->_max_hp = src.FragTrap::_max_hp;
	this->_ep = src.FragTrap::_ep;
	this->_max_ep = src.ScavTrap::_max_ep;
	this->_name = src.ScavTrap::_name;
	this->_attack = src.ScavTrap::_attack;
	this->_type = src.ScavTrap::_type;
	return *this;
}

void DiamondTrap::attack(std::string const & target)
{
	this->ScavTrap::attack(target);
	return;
}

void DiamondTrap::whoAmI(void) const
{
	std::cout << this->_name << " (" << this->_type << " | " << ClapTrap::_name << ") : I ham shinning bright." << std::endl;
	return;
}
	

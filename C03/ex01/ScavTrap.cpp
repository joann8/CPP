#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap::ClapTrap() 
{
	std::cout << "One defaut ScavTrap is born" << std::endl;
	this->ClapTrap::_hp = 100;
	this->ClapTrap::_max_hp = 100;
	this->ClapTrap::_ep = 50;
	this->ClapTrap::_max_ep = 50;
	this->ClapTrap::_attack = 20;
	this->ClapTrap::_type = "ScavTrap";
	
	return ;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap::ClapTrap(name) 
{
	std::cout << "One ScavTrap is born. Welcome to " << this->_name << "!" << std::endl;
	this->ClapTrap::_hp = 100;
	this->ClapTrap::_max_hp = 100;
	this->ClapTrap::_ep = 50;
	this->ClapTrap::_max_ep = 50;
	this->ClapTrap::_attack = 20;
	this->ClapTrap::_type = "ScavTrap";
	return ;
}

ScavTrap::ScavTrap(ScavTrap const & src)
{
	*this = src;
	std::cout << "One ScavTrap is born from a copy. Welcome to the new " << this->_name << "!" << std::endl;
	return ;
}

ScavTrap::~ScavTrap(void) 
{
	std::cout << "One ScavTrap just died. RIP " << this->_name << std::endl;
	return ;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & src)
{
	this->_hp = src.ClapTrap::_hp;
	this->_max_hp = src.ClapTrap::_max_hp;
	this->_ep = src.ClapTrap::_ep;
	this->_max_ep = src.ClapTrap::_max_ep;
	this->_name = src.ClapTrap::_name;
	this->_attack = src.ClapTrap::_attack;
	this->_type = src.ClapTrap::_type;
	return *this;
}

void ScavTrap::attack (std::string const & target) 
{
	std::cout << this->_name << " (" << this->_type << ") : fear my aaaaattack, " << target << "! (-" << this->_attack << " points of damages)" << std::endl;
	return ;
}

void ScavTrap::guardGate(void) const
{
	std::cout << this->_name << " (" << this->_type << ") : I have enterred guard mode." << std::endl;
	return;
}
	

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap::ClapTrap("default", 100, 50, 20, "ScavTrap") 
{
	std::cout << "One defaut ScavTrap is born" << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap::ClapTrap(name, 100, 50, 20, "ScavTrap") 
{
	std::cout << "One ScavTrap is born. Welcome to " << ClapTrap::getName() << "!" << std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const & src)
{
	*this = src;
	std::cout << "One ScavTrap is born from a copy. Welcome to the new " << ClapTrap::getName() << "!" << std::endl;
	return ;
}

ScavTrap::~ScavTrap(void) 
{
	std::cout << "One ScavTrap just died. RIP " << ClapTrap::getName() << std::endl;
	return ;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & src)
{
	this->_hp = src.ClapTrap::getHP();
	this->_max_hp = src.ClapTrap::getMaxHP();
	this->_ep = src.ClapTrap::getEP();
	this->_max_ep = src.ClapTrap::getMaxEP();
	this->_name = src.ClapTrap::getName();
	this->_attack = src.ClapTrap::getAttack();
	this->_type = src.ClapTrap::getType();
	return *this;
}

void ScavTrap::attack (std::string const & target) 
{
	std::cout << ClapTrap::getName() << " (" << ClapTrap::getType() << ") : fear my aaaaattack, " << target << "! (-" << ClapTrap::getAttack() << " points of damages)" << std::endl;
	return ;
}

void ScavTrap::guardGate(void) const
{
	std::cout << ClapTrap::getName() << " (" << ClapTrap::getType() << ") : I have enterred guard mode." << std::endl;
	return;
}
	

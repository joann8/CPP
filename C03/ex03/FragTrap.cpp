#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap::ClapTrap("default", 100, 100, 30, "FragTrap") 
{
	std::cout << "One defaut FragTrap is born" << std::endl;
	return ;
}

FragTrap::FragTrap(std::string name) : ClapTrap::ClapTrap(name, 100, 100, 30, "FragTrap") 
{
	std::cout << "One FragTrap is born. Welcome to " << ClapTrap::getName() << "!" << std::endl;
	return ;
}

FragTrap::FragTrap(FragTrap const & src)
{
	*this = src;
	std::cout << "One FragTrap is born from a copy. Welcome to the new " << ClapTrap::getName() << "!" << std::endl;
	return ;
}

FragTrap::~FragTrap(void) 
{
	std::cout << "One FragTrap just died. RIP " << ClapTrap::getName() << std::endl;
	return ;
}

FragTrap & FragTrap::operator=(FragTrap const & src)
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

void FragTrap::highFivesGuys(void) const
{
	std::cout << ClapTrap::getName() << " (" << ClapTrap::getType() << ") : give me some Hive Fives! Guys?" << std::endl;
	return;
}

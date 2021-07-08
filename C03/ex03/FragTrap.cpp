#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap::ClapTrap() 
{
	std::cout << "One defaut FragTrap is born" << std::endl;
	this->ClapTrap::_hp = 100;
	this->ClapTrap::_max_hp = 100;
	this->ClapTrap::_ep = 100;
	this->ClapTrap::_max_ep = 100;
	this->ClapTrap::_attack = 30;
	this->ClapTrap::_type = "FragTrap";
	
	return ;
}

FragTrap::FragTrap(std::string name) : ClapTrap::ClapTrap(name) 
{
	std::cout << "One FragTrap is born. Welcome to " << this->_name << "!" << std::endl;
	this->ClapTrap::_hp = 100;
	this->ClapTrap::_max_hp = 100;
	this->ClapTrap::_ep = 100;
	this->ClapTrap::_max_ep = 100;
	this->ClapTrap::_attack = 30;
	this->ClapTrap::_type = "FragTrap";
	return ;
}

FragTrap::FragTrap(FragTrap const & src)
{
	*this = src;
	std::cout << "One FragTrap is born from a copy. Welcome to the new " << this->_name << "!" << std::endl;
	return ;
}

FragTrap::~FragTrap(void) 
{
	std::cout << "One FragTrap just died. RIP " << this->_name << std::endl;
	return ;
}

FragTrap & FragTrap::operator=(FragTrap const & src)
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

void FragTrap::highFivesGuys(void) const
{
	std::cout << this->_name << " (" << this->_type << ") : give me some Hive Fives! Guys?" << std::endl;
	return;
}
	

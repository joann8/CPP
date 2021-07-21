#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : FragTrap::FragTrap(), ScavTrap::ScavTrap()
{
	FragTrap::setHP(100);
	FragTrap::setMaxHP(100);
	ScavTrap::setEP(50);
	ScavTrap::setMaxEP(50);
	FragTrap::setAttack(30);
	FragTrap::setType("DiamondTrap");
	ClapTrap::setName(getName() + "_clap_name");
	std::cout << "One defaut DiamondTrap is born" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), FragTrap(name), ScavTrap(name), _name(name)
{
	FragTrap::setHP(100);
	FragTrap::setMaxHP(100);
	ScavTrap::setEP(50);
	ScavTrap::setMaxEP(50);
	FragTrap::setAttack(30);
	FragTrap::setType("DiamondTrap");
	ClapTrap::setName(getName() + "_clap_name");
	std::cout << "One DiamondTrap is born. Welcome to " << getName() << "!" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(DiamondTrap const & src)
{
	*this = src;
	std::cout << "One DiamondTrap is born from a copy. Welcome to the new " << getName() << "!" << std::endl;
	return ;
}

DiamondTrap::~DiamondTrap(void) 
{
	std::cout << "One DiamondTrap just died. RIP " << getName() << std::endl;
	return ;
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const & src)
{
	this->_hp = src.FragTrap::getHP();
	this->_max_hp = src.FragTrap::getMaxHP();
	this->_ep = src.FragTrap::getEP();
	this->_max_ep = src.ScavTrap::getMaxEP();
	this->_name = src.ScavTrap::getName();
	this->_attack = src.ScavTrap::getAttack();
	this->_type = src.ScavTrap::getType();
	return *this;
}

void DiamondTrap::attack(std::string const & target)
{
	this->ScavTrap::attack(target);
	return;
}

void DiamondTrap::whoAmI(void) const
{
	std::cout << getName() << " (" << ScavTrap::getType() << ") : my personnal name is *" << _name << "*, my clap_trap name is *" << ClapTrap::getName() << "*" << std::endl;
	return;
}
	

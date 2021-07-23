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
	setHP(src.ClapTrap::getHP());
	setMaxHP(src.ClapTrap::getMaxHP());
	setEP(ClapTrap::getEP());
	setMaxEP(src.ClapTrap::getMaxEP());
	setName(src.ClapTrap::getName());
	setAttack(ClapTrap::getAttack());
	setType(src.ClapTrap::getType());
	return *this;
}

void FragTrap::highFivesGuys(void) const
{
	std::cout << ClapTrap::getName() << " (" << getType() << ") : give me some Hive Fives! Guys?" << std::endl;
	return;
}

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
	setHP(ClapTrap::getHP());
	setMaxHP(ClapTrap::getMaxHP());
	setEP(ClapTrap::getEP());
	setMaxEP(src.ClapTrap::getMaxEP());
	setName(ClapTrap::getName());
	setAttack(ClapTrap::getAttack());
	setType(src.ClapTrap::getType());
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

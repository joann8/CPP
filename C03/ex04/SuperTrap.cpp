#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

SuperTrap::SuperTrap(void)
{
	this->ClapTrap::_hp = 100;
	this->ClapTrap::_max_hp = 100;
	this->ClapTrap::_ep = 120;
	this->ClapTrap::_max_ep = 120;
	this->ClapTrap::_level = 1;
	this->ClapTrap::_ranged_attack = 20;
	this->ClapTrap::_melee_attack = 60;
	this->ClapTrap::_armor_damage_reduction = 5;
	std::cout << "One defaut SuperTrap is born" << std::endl;
	return ;
}

SuperTrap::SuperTrap(std::string name) : ClapTrap::ClapTrap(name) 
{	
	this->ClapTrap::_hp = 100;
	this->ClapTrap::_max_hp = 100;
	this->ClapTrap::_ep = 120;
	this->ClapTrap::_max_ep = 120;
	this->ClapTrap::_level = 1;
	this->ClapTrap::_ranged_attack = 20;
	this->ClapTrap::_melee_attack = 60;
	this->ClapTrap::_armor_damage_reduction = 5;
	std::cout << "One SuperTrap is born. Welcome to " << this->_name << "!" << std::endl;
	return ;
}

SuperTrap::SuperTrap(SuperTrap const & src) : ClapTrap::ClapTrap(src)
{
	*this = src;
	std::cout << "One SuperTrap is born from a copy. Welcome to the new " << this->_name << "!" << std::endl;
	return ;
}

SuperTrap::~SuperTrap(void)
{
	std::cout << "One SuperTrap just died. RIP " << this->_name << std::endl;
	return ;
}

SuperTrap & SuperTrap::operator=(SuperTrap const & src)
{
	this->_hp = src._hp;
	this->_max_hp = src._max_hp;
	this->_ep = src._ep;
	this->_max_ep = src._max_ep;
	this->_level = src._level;
	this->_name = src._name;
	this->_ranged_attack = src._ranged_attack;
	this->_melee_attack = src._melee_attack;
	this->_armor_damage_reduction = src._armor_damage_reduction;
	return *this;
}

unsigned int SuperTrap::rangedAttack (std::string const & target) const
{
	std::cout << this->_name << " : SUPERTRAP ranged attack for you, " << target << "! (-" << this->_ranged_attack << " HP)" << std::endl;
	return this->ClapTrap::rangedAttack(target);
}
	
unsigned int SuperTrap::meleeAttack (std::string const & target) const
{
	std::cout << this->_name << " : SUPERTRAP melee attack for you, " << target << "! (-" << this->_melee_attack << " HP)" << std::endl;
	return this->ClapTrap::meleeAttack(target) ;
}

unsigned int SuperTrap::takeDamage (unsigned int amount)
{
	unsigned int res;

	res = this->ClapTrap::takeDamage(amount);
	if (res == 1)
		std::cout << this->_name << " : That's nothing... (" << this->_hp << "/" << this->_max_hp << " HP)" << std::endl;
	else
		std::cout << this->_name << " died. This SUPER-TP was not strong enough" << std::endl;
	return (res);
}

void SuperTrap::beRepaired (unsigned int amount)
{
	this->ClapTrap::beRepaired(amount);
	std::cout <<  this->_name << " : power from Frag and Ninja! (+ " << amount << " HP)" << std::endl;
	return ;
}

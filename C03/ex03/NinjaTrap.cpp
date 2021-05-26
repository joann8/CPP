#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void)
{
	this->ClapTrap::_hp = 60;
	this->ClapTrap::_max_hp = 60;
	this->ClapTrap::_ep = 120;
	this->ClapTrap::_max_ep = 120;
	this->ClapTrap::_level = 1;
	this->ClapTrap::_ranged_attack = 5;
	this->ClapTrap::_melee_attack = 60;
	this->ClapTrap::_armor_damage_reduction = 0;
	std::cout << "One defaut NinjaTrap is born" << std::endl;
	return ;
}

NinjaTrap::NinjaTrap(std::string name) : ClapTrap::ClapTrap(name) 
{
	this->ClapTrap::_hp = 60;
	this->ClapTrap::_max_hp = 60;
	this->ClapTrap::_ep = 120;
	this->ClapTrap::_max_ep = 120;
	this->ClapTrap::_level = 1;
	this->ClapTrap::_ranged_attack = 5;
	this->ClapTrap::_melee_attack = 60;
	this->ClapTrap::_armor_damage_reduction = 0;
	std::cout << "One NinjaTrap is born. Welcome to " << this->_name << "!" << std::endl;
	return ;
}

NinjaTrap::NinjaTrap(NinjaTrap const & src) : ClapTrap::ClapTrap(src)
{
	*this = src;
	std::cout << "One NinjaTrap is born from a copy. Welcome to the new " << this->_name << "!" << std::endl;
	return ;
}

NinjaTrap::~NinjaTrap(void)
{
	std::cout << "One NinjaTrap just died. RIP " << this->_name << std::endl;
	return ;
}

NinjaTrap & NinjaTrap::operator=(NinjaTrap const & src)
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

unsigned int NinjaTrap::rangedAttack (std::string const & target) const
{
	std::cout << this->_name << " : Fear my ranged attack, " << target << "! (-" << this->_ranged_attack << " HP)" << std::endl;
	return this->ClapTrap::rangedAttack(target);
}
	
unsigned int NinjaTrap::meleeAttack (std::string const & target) const
{
	std::cout << this->_name << " : Fear my melee attack, " << target << "! (-" << this->_melee_attack << " HP)" << std::endl;
	return this->ClapTrap::meleeAttack(target) ;
}

unsigned int NinjaTrap::takeDamage (unsigned int amount)
{
	unsigned int res;

	res = this->ClapTrap::takeDamage(amount);
	if (res == 1)
		std::cout << this->_name << " : Aaaaarrrgh... (" << this->_hp << "/" << this->_max_hp << " HP)" << std::endl;
	else
		std::cout << this->_name << " died. This NINJA-TP was not strong enough" << std::endl;
	return (res);
}

void NinjaTrap::beRepaired (unsigned int amount)
{
	this->ClapTrap::beRepaired(amount);
	std::cout <<  this->_name << " : meditation ON! (+ " << amount << " HP)" << std::endl;
	return ;
}

void NinjaTrap::ninjaShoebox(NinjaTrap const & target) const
{
	std::cout << this->_name << " : " << target.getName() << ", would you like a cake?" << std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap const & target) const
{
	std::cout << this->_name << " : " << target.getName() << ", would you like a crème brulée?" << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap const & target) const
{
	std::cout << this->_name << " : " << target.getName() << ", would you like a cigarette?" << std::endl;
}

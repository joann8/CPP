#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)  
{
	std::cout << "One defaut ScavTrap is born" << std::endl;
	this->FragTrap::_ep = 50;
	this->FragTrap::_max_ep = 50;
	this->FragTrap::_melee_attack = 20;
	this->FragTrap::_ranged_attack = 15;
	this->FragTrap::_armor_damage_reduction = 3;
	return ;
}

ScavTrap::ScavTrap(std::string name) : FragTrap::FragTrap(name) 
{
	std::cout << "One ScavTrap is born. Welcome to " << this->_name << "!" << std::endl;
	this->FragTrap::_ep = 50;
	this->FragTrap::_max_ep = 50;
	this->FragTrap::_melee_attack = 20;
	this->FragTrap::_ranged_attack = 15;
	this->FragTrap::_armor_damage_reduction = 3;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const & src) : FragTrap(src)
{
	//*this = src;
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
	this->FragTrap::_hp = src.FragTrap::_hp;
	this->FragTrap::_max_hp = src.FragTrap::_max_hp;
	this->FragTrap::_ep = src.FragTrap::_ep;
	this->FragTrap::_max_ep = src.FragTrap::_max_ep;
	this->FragTrap::_level = src.FragTrap::_level;
	this->FragTrap::_name = src.FragTrap::_name;
	this->FragTrap::_ranged_attack = src.FragTrap::_ranged_attack;
	this->FragTrap::_melee_attack = src.FragTrap::_melee_attack;
	this->FragTrap::_armor_damage_reduction = src.FragTrap::_armor_damage_reduction;
	return *this;
}

unsigned int ScavTrap::rangedAttack (std::string const & target) const
{
	std::cout << this->FragTrap::_name << " : Here is my ranged attack, " << target << "! (-" << this->FragTrap::_ranged_attack << " HP)" << std::endl;
	return this->FragTrap::_ranged_attack;
}
	
unsigned int ScavTrap::meleeAttack (std::string const & target) const
{
	std::cout << this->FragTrap::_name << " : Here is my melee attack, " << target << "! (-" << this->FragTrap::_melee_attack << " HP)" << std::endl;
	return this->FragTrap::_melee_attack ;
}

void ScavTrap::challengeNewcomer(void)
{
	std::cout << this->FragTrap::_name << " : Hey you! I dare you to win \"" << this->random_challenge() << "\" challenge!" << std::endl;

}

unsigned int ScavTrap::takeDamage (unsigned int amount)
{
	if (this->_hp > amount - this->_armor_damage_reduction)
	{
		this->_hp = this->_hp - amount + this->FragTrap::_armor_damage_reduction;
		std::cout << this->FragTrap::_name << " : Touché... (" << this->_hp << "/" << this->_max_hp << " HP)" << std::endl;
		return (1);
	}
	else
	{
		this->_hp = 0;
		std::cout << this->FragTrap::_name << " died. This SCAV-TP was not strong enough" << std::endl;
		return (0);
	}
}

void ScavTrap::beRepaired (unsigned int amount)
{
	if (this->_hp +  amount <= 100)
		this->_hp = this->_hp + amount;
	else
		this->_hp = 100;
	std::cout <<  this->FragTrap::_name << " : Drinking a redbull! (+ " << amount << " HP)" << std::endl;
	return ;
}

std::string ScavTrap::random_challenge(void) const
{
	std::string challenge[] =	{"Paper, Rock, Cissors", "I have in my suitcase", "Drink or Die", "Karaoke", "Shittiest flute ever"};
	return challenge[rand() % 5];
}

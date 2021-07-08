#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) 
{
	this->ClapTrap::_hp = 100;
	this->ClapTrap::_max_hp = 100;
	this->ClapTrap::_ep = 50;
	this->ClapTrap::_max_ep = 50;
	this->ClapTrap::_level = 1;
	this->ClapTrap::_ranged_attack = 15;
	this->ClapTrap::_melee_attack = 20;
	this->ClapTrap::_armor_damage_reduction = 3;
	std::cout << "One defaut ScavTrap is born" << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap::ClapTrap(name) 
{
	this->ClapTrap::_hp = 100;
	this->ClapTrap::_max_hp = 100;
	this->ClapTrap::_ep = 50;
	this->ClapTrap::_max_ep = 50;
	this->ClapTrap::_level = 1;
	this->ClapTrap::_ranged_attack = 15;
	this->ClapTrap::_melee_attack = 20;
	this->ClapTrap::_armor_damage_reduction = 3;
	std::cout << "One ScavTrap is born. Welcome to " << this->_name << "!" << std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const & src) : ClapTrap::ClapTrap(src)
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

unsigned int ScavTrap::rangedAttack (std::string const & target) const
{
	std::cout << this->_name << " : Here is my ranged attack, " << target << "! (-" << this->_ranged_attack << " HP)" << std::endl;
	return this->ClapTrap::rangedAttack(target);
}
	
unsigned int ScavTrap::meleeAttack (std::string const & target) const
{
	std::cout << this->_name << " : Here is my melee attack, " << target << "! (-" << this->_melee_attack << " HP)" << std::endl;
	return this->ClapTrap::meleeAttack(target) ;
}

unsigned int ScavTrap::takeDamage (unsigned int amount)
{
	unsigned int res;

	res = this->ClapTrap::takeDamage(amount);
	if (res == 1)
		std::cout << this->_name << " : Touché... (" << this->_hp << "/" << this->_max_hp << " HP)" << std::endl;
	else
		std::cout << this->_name << " died. This SCAV-TP was not strong enough" << std::endl;
	return (res);
}

void ScavTrap::beRepaired (unsigned int amount)
{
	this->ClapTrap::beRepaired(amount);
	std::cout <<  this->_name << " : Drinking a redbull! (+ " << amount << " HP)" << std::endl;
	return ;
}

void ScavTrap::challengeNewcomer(void)
{
	std::cout << "I dare you to win \"" << this->random_challenge() << "\" challenge!" << std::endl;
}

std::string ScavTrap::random_challenge(void) const
{
	std::string challenge[] =	{"Paper, Rock, Cissors", "I have in my suitcase", "Drink or Die", "Karaoke", "Shittiest flute ever"};
	return challenge[rand() % 5];
}
